//
//  JNAddressBook.h
//  auction
//
//  Created by Teemo on 15/6/17.
//  Copyright (c) 2015年 Netease. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface JNAddressBook : NSObject

@property (nonatomic,assign) int recordID;
@property (nonatomic,copy) NSString *name;
@property (nonatomic,copy) NSString *email;
@property (nonatomic,copy) NSString *phoneNum;

/**
 *  Access to mobile phone contacts
 */

+(NSArray*)arrayWithAddressBook;
@end
