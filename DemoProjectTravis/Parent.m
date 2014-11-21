//
//  Parent.m
//  DemoProjectTravis
//
//  Created by Ashish ojha on 10/29/14.
//  Copyright (c) 2014 com.v2solutions. All rights reserved.
//

#import "Parent.h"

@implementation Parent
- (void)abcMethod
{
    NSLog(@"parent abc");
}

- (void)abcMethod:(NSString *)str
{
    NSLog(@"parent abc with str: %@", str);
}
@end
