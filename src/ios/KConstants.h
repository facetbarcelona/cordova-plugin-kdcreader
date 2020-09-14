//
//  KReader.h
//  KReader
//
//  Created by SeungWoo Han on 9/14/14.
//  Copyright (c) 2014 AISolution. All rights reserved.
//

#ifndef KDCReader_KConstants_h
#define KDCReader_KConstants_h

/* KDCDevice */
NSString * const kDeviceType = @"type";
NSString * const kDeviceSubtype = @"subtype";
NSString * const kDeviceName = @"deviceName";
NSString * const kKDCName = @"kdcName";

/* Connection State */
NSString * const kState = @"state";
NSString * const kDevice = @"device";

/* Device List Type */
NSString * const kExternalAccessory = @"ExternalAccessory";
NSString * const kScannedPeripheral = @"ScannedBluetooth";
NSString * const kConnectedPeripheral = @"ConnectedPeripheral";

/* KDCData */
NSString * const kDataType = @"type";

NSString * const kData = @"data";
NSString * const kDataBytes = @"dataBytes";

NSString * const kBarcode = @"barcode";

NSString * const kGPS = @"gps";

NSString * const kMSR = @"msr";
NSString * const kMSRBytes = @"msrBytes";

NSString * const kNFCTagType = @"nfcType";
NSString * const kNFCUid = @"uid";
NSString * const kNFC = @"nfc";
NSString * const kNFCBytes = @"nfcBytes";

NSString * const kUHFListType = @"uhfListType";
NSString * const kUHFList = @"uhfList";
NSString * const kRSSIList = @"uhfRssiList";

NSString * const kKeyEvent = @"key";

NSString * const kRecord = @"record";

#endif
