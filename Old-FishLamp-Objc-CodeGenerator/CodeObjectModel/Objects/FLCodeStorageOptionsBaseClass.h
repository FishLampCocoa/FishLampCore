// 
// FLCodeStorageOptionsBaseClass.h
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

@interface FLCodeStorageOptionsBaseClass : FLModelObject {
@private
    BOOL _isStorable;
    BOOL _isPrimaryKey;
    BOOL _isUnique;
    BOOL _isRequired;
    BOOL _isIndexed;
}

@property (readwrite, assign, nonatomic) BOOL isIndexed;
@property (readwrite, assign, nonatomic) BOOL isPrimaryKey;
@property (readwrite, assign, nonatomic) BOOL isRequired;
@property (readwrite, assign, nonatomic) BOOL isStorable;
@property (readwrite, assign, nonatomic) BOOL isUnique;

+ (id) codeStorageOptions;

@end
