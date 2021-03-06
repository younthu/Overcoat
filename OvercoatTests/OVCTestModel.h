//
//  OVCTestModel.h
//  Overcoat
//
//  Created by guille on 16/05/14.
//  Copyright (c) 2014 Guillermo Gonzalez. All rights reserved.
//

#import <Mantle/Mantle.h>
#import <Overcoat/Overcoat.h>

@interface OVCTestModel : MTLModel <MTLJSONSerializing, MTLManagedObjectSerializing>

@property (copy, nonatomic, readonly) NSString *name;
@property (copy, nonatomic, readonly) NSString *realName;

@end

@interface OVCErrorModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic, readonly) NSString *status;
@property (copy, nonatomic, readonly) NSNumber *code;
@property (copy, nonatomic, readonly) NSString *message;

@end

@interface OVCAlternativeModel : MTLModel <MTLJSONSerializing, OVCManagedObjectSerializingContainer>

@property (copy, nonatomic, readonly) NSNumber *offset;
@property (copy, nonatomic, readonly) NSNumber *limit;
@property (copy, nonatomic, readonly) NSArray *objects;

@end
