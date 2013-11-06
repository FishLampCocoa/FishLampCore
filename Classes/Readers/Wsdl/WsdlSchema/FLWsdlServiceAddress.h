// 
// FLWsdlServiceAddress.h
// 
// DO NOT MODIFY!! Modifications will be overwritten.
// Generated by: Mike Fullerton @ 6/2/13 5:36 PM with PackMule (3.0.0.100)
// 
// Project: FishLamp CodeWriter WSDL Interpreter
// Schema: FLWsdlObjects
// 
// Copyright 2013 (c) GreenTongue Software, LLC
// 

#import "FLModelObject.h"


@interface FLWsdlServiceAddress : FLModelObject {
@private
    NSString* _location;
}

@property (readwrite, strong, nonatomic) NSString* location;

+ (FLWsdlServiceAddress*) wsdlServiceAddress;

@end
