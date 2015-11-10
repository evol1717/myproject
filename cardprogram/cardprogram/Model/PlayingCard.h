//
//  PlayingCard.h
//  cardprogram
//
//  Created by zt on 15/11/4.
//  Copyright © 2015年 eb. All rights reserved.
//

#import "Card.h"

@interface PlayingCard : Card

@property (strong, nonatomic) NSString *suit;
@property (nonatomic) NSUInteger rank;

+(NSArray *)validSuits;
+(NSUInteger)maxRank;

@end
