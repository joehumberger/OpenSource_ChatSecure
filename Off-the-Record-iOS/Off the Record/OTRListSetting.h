//
//  OTRListSetting.h
//  Off the Record
//
//  Created by David on 11/13/12.
//  Copyright (c) 2012 Chris Ballinger. All rights reserved.
//

#import "OTRValueSetting.h"

@interface OTRListSetting : OTRValueSetting


@property (nonatomic,strong) NSArray * possibleValues;
@property (nonatomic, retain) NSString *defaultValue;


-(void)editValue;

@end
