//
//  LiSponserPayManager.h
//  LiCore
//
//  Copyright (c) 2013 Applicasa. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "PromoView.h"
#import "User.h"
#import "SponsorPaySDK.h"
#define LI_SPONSORPAY_VERSION @"1.0.2"
@interface LiSponsorPayManager : NSObject <LiCoreInitializeDelegate, SPOfferWallViewControllerDelegate>


@property (nonatomic, strong) PromoView *promoView;

+ (LiSponsorPayManager *) sharedInstance;
- (void) showSponsorPayWithPromoView:(PromoView *)promoViewInstance;

@end