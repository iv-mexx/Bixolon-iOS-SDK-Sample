# Bixolon-iOS-SDK-Sample
As simple sample project about how to use the Bixolon iOS SDK to print to a Bixolon Bluetooth Printer

## About

In my opinion, official documentation for the Bixolon iOS SDK is not very helpful in getting started and the accompanied sample project is very convoluted. 
So here's a minimal working example that shows, how to print text, images and bar/qr codes on a Bixolon Bluetooth Printer from iOS.

Download the SDK and Documentation [from Bixolon](http://www.bixolon.com/html/de/download/download_category.xhtml?ca_id=103&large_cd=0011&small_cd=0001).

## Usage

* Pair your printer with your iOS Device **before** launching the app
  * Default Pairing pin is `0000`
* Launch the app on your device
* Hit `Print`
* A text, an image and a QR code are printed

## Details

First, make sure that your `Info.plist` contains the following entry, otherwise you can not connect to the printer:

```xml
<key>UISupportedExternalAccessoryProtocols</key>
<array>
	<string>com.bixolon.protocol</string>
</array>
```

Communication witht he printer is done via `UPOSPrinterController`. 

First, its necessary to add the printer to the devie list of the printer controller. This sample project simply uses the paired printer. Make sure to save the device list afterwards

Then, you'll have to 

* Open a connection to the printer via `[self.uposPrinterController open:device.modelName];`. Here, device is a device from the device list (In this sample simply the first and only device in the list)
* Claim the printer: `[self.uposPrinterController claim:5000];`
* Enable the printer: `self.uposPrinterController.DeviceEnabled = YES;`

After that, you can print via `[self.uposPrinterController printNormal:PTR_S_RECEIPT data:@"Test\n\r"];` and similar calls. 

**Attention**: Do not disable/free/close the printer connection right away, otherwise the data transfer can not be finished and nothing is printed. This example simply keeps the printer open.

## Attention

This app only works on a real device since the Bixolon SDK (i.e. `UPOSPrinterController`) crashes when allocated on a Simulator.