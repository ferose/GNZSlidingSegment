//
//  GNZSegment.h
//  Pods
//
//  Created by Chris Gonzales on 11/19/15.
//
//

#import <Foundation/Foundation.h>

@protocol GNZSegment <NSObject, UIScrollViewDelegate>

- (NSUInteger)selectedSegmentIndex;
- (void)setSelectedSegmentIndex:(NSUInteger)index;

@end
