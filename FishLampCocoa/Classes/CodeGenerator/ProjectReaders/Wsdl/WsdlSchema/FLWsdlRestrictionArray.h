// 
// FLWsdlRestrictionArray.h
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

@class FLWsdlSequenceArray;
@class FLWsdlEnumeration;
@class FLObjectDescriber;

@interface FLWsdlRestrictionArray : FLModelObject {
@private
    NSString* _base;
    FLWsdlSequenceArray* _sequence;
    NSMutableArray* _enumerations;
}

@property (readwrite, strong, nonatomic) NSString* base;
@property (readwrite, strong, nonatomic) NSMutableArray* enumerations;
@property (readwrite, strong, nonatomic) FLWsdlSequenceArray* sequence;

+ (FLWsdlRestrictionArray*) wsdlRestrictionArray;

@end