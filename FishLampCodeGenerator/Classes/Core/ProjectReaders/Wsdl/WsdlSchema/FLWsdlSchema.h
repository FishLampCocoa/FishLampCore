// 
// FLWsdlSchema.h
// 
// DO NOT MODIFY!! Modifications will be overwritten.
// Generated by: Mike Fullerton @ 6/2/13 5:36 PM with PackMule (3.0.0.100)
// 
// Project: FishLamp CodeWriter WSDL Interpreter
// Schema: FLWsdlObjects
// 
// Copyright 2013 (c) GreenTongue Software, LLC
// 

#import "FLWsdlElementBaseType.h"

@class FLObjectDescriber;
@class FLWsdlImport;

@interface FLWsdlSchema : FLWsdlElementBaseType {
@private
    NSMutableArray* _imports;
    NSString* _elementFormDefault;
    NSString* _targetNamespace;
}

@property (readwrite, strong, nonatomic) NSString* elementFormDefault;
@property (readwrite, strong, nonatomic) NSMutableArray* imports;
@property (readwrite, strong, nonatomic) NSString* targetNamespace;

+ (FLWsdlSchema*) wsdlSchema;

@end