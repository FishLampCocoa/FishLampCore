// 
// FLCodeArrayBaseClass.m
// 
// DO NOT MODIFY!! Modifications will be overwritten.
// Generated by: Mike Fullerton @ 6/27/13 5:17 PM with PackMule (3.0.0.31)
// 
// Project: FishLamp Code Generator
// 
// Copyright 2013 (c) GreenTongue Software LLC, Mike Fullerton
// The FishLamp Framework is released under the MIT License: http://fishlamp.com/license
// 

#import "FLCodeArrayBaseClass.h"
#import "FLModelObject.h"
#import "FLCodeArrayType.h"
#import "FLObjectDescriber.h"

@implementation FLCodeArrayBaseClass

+ (id) codeArray {
    return FLAutorelease([[[self class] alloc] init]);
}
#if FL_MRC
- (void) dealloc {
    [_name release];
    [_types release];
    [super dealloc];
}
#endif
+ (void) didRegisterObjectDescriber:(FLObjectDescriber*) describer {
    [describer addContainerType:[FLPropertyDescriber propertyDescriber:@"arrayType" propertyClass:[FLCodeArrayType class]] forContainerProperty:@"types"];
}
@synthesize name = _name;
FLSynthesizeLazyGetterDeprecated(types, NSMutableArray, _types);
@synthesize types = _types;

@end
