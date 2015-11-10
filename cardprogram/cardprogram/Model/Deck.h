//
//  Deck.h
//  cardprogram
//
//  Created by zt on 15/11/4.
//  Copyright © 2015年 eb. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Card.h"

@interface Deck : NSObject

- (void)addCard:(Card *)card atTop:(BOOL)atTop;
- (void)addCard:(Card *)card;

- (Card *)drawRandomCard;

@end
