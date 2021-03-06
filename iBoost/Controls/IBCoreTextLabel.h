//
//  IBCoreTextLabel.h
//  iBoostCatalog
//
//  Created by John Blanco on 9/3/10.
//  Copyright 2010 Effective UI. All rights reserved.
//

// supports <b>, <i>, <font face="XXX" size="XXX" color="">, and <br>

#import <Foundation/Foundation.h>


@interface IBCoreTextLabel : UIControl {
	UIColor *_textColor;
	
	NSString *_text;
	NSMutableAttributedString *_attrStr;
	
	NSMutableArray *_boldRanges;
	NSMutableArray *_italicRanges;
	NSMutableArray *_fontRanges;
}

@property (nonatomic, retain) NSString *text;
@property (nonatomic, retain) UIColor *textColor;

@end
