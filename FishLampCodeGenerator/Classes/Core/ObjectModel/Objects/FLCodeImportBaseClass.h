// 
// FLCodeImportBaseClass.h
// 
// DO NOT MODIFY!! Modifications will be overwritten.
// Generated by: Mike Fullerton @ 6/27/13 5:17 PM with PackMule (3.0.0.31)
// 
// Project: FishLamp Code Generator
// 
// Copyright 2013 (c) GreenTongue Software LLC, Mike Fullerton
// The FishLamp Framework is released under the MIT License: http://fishlamp.com/license
// 

#import "FLModelObject.h"
#import "FLCodeInputType.h"

@interface FLCodeImportBaseClass : FLModelObject {
@private
    NSString* _path;
    NSString* _type;
}

@property (readwrite, strong, nonatomic) NSString* path;
@property (readwrite, strong, nonatomic) NSString* type;
@property (readwrite, assign, nonatomic) FLCodeInputType typeEnum;
@property (readwrite, strong, nonatomic) FLCodeInputTypeEnumSet* typeEnumSet;

+ (id) codeImport;

@end