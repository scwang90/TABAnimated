//
//  TABComponentLayer+TABAnimated.h
//  AnimatedDemo
//
//  github: https://github.com/tigerAndBull/TABAnimated
//  jianshu: https://www.jianshu.com/p/6a0ca4995dff
//
//  历史更新文档：https://www.jianshu.com/p/e3e9ea295e8a
//  动画下标说明：https://www.jianshu.com/p/8c361ba5aa18
//  豆瓣效果说明：https://www.jianshu.com/p/1a92158ce83a
//  嵌套视图说明：https://www.jianshu.com/p/cf8e37195c11
//
//  Created by tigerAndBull on 2019/7/6.
//  Copyright © 2019 tigerAndBull. All rights reserved.
//

#import "TABComponentLayer.h"

NS_ASSUME_NONNULL_BEGIN

@interface TABComponentLayer (TABAnimated)

#pragma mark - 链式语法

/**
 * 向左平移
 * Translation to the left
 *
 * @return return value 向左平移的值
 */
- (TABComponentLayerBlock)left;

/**
 * 向右平移
 * Translation to the right
 *
 * @return return value 向右平移的值
 */
- (TABComponentLayerBlock)right;

/**
 * 向上平移
 * Upward translation
 *
 * @return return value 向上平移的值
 */
- (TABComponentLayerBlock)up;

/**
 * 向下平移
 * Downward translation
 *
 * @return return value 向下平移的值
 */
- (TABComponentLayerBlock)down;

/**
 * 设置该动画组件的宽度，设置的是`tabViewWidth`这个属性
 * set width
 *
 * @return return value 宽度
 */
- (TABComponentLayerBlock)width;

/**
 * 设置该动画组件的高度，设置的就是`tabViewHeight`这个属性
 * set height
 *
 * @return return value 高度
 */
- (TABComponentLayerBlock)height;

/**
 * 设置该动画组件的圆角
 *
 * @return return value 圆角
 */
- (TABComponentLayerBlock)radius;

/**
 * 减少的宽度，与当前宽度相比，所减少的宽度
 * 负数则为增加
 *
 * @return return value 减少的宽度
 */
- (TABComponentLayerBlock)reducedWidth;

/**
 * 减少的高度，与当前高度相比，所减少的高度
 * 负数则为增加
 *
 * @return return value 减少的高度
 */
- (TABComponentLayerBlock)reducedHeight;

/**
 * 设置动画组件的行数
 * set numberOflines
 *
 * @return return value 设置的行数
 */
- (TABComponentLayerLinesBlock)line;

/**
 * 间距，行数超过1时生效，默认为8.0。
 * set linespace
 *
 * @return return value 间距值
 */
- (TABComponentLayerBlock)space;

/**
 * 对于`numberOflines` > 1的动画元素，设置最后一行的宽度比例，默认是0.5，即原宽度的一半。
 *
 * @return return value 最后一行的宽度比例
 */
- (TABComponentLayerBlock)lastLineScale;

/**
 * 从骨架层中移除
 * remve the layer
 *
 * @return return value description
 */
- (TABLoadStyleBlock)remove;

/**
 * 赋予该动画组件画由长到短的动画
 * add the long animation to the layer
 */
- (TABLoadStyleBlock)toLongAnimation;

/**
 * 赋予该动画组件画由短到长的动画
 * add the short animation to the layer
 */
- (TABLoadStyleBlock)toShortAnimation;

/**
 * 动画来自居中文本，设置后取消居中显示
 * If it is from the UILabel of `NSTextAligentCenter`,canceling show in center.
 */
- (TABLoadStyleBlock)cancelAlignCenter;

/**
 * 豆瓣动画变色下标，一起变色的元素，设置同一个下标即可。
 */
- (TABComponentLayerLinesBlock)dropIndex;

/**
 * 适用于多行的动画组件,
 * 比如设置 dropFromIndex(3), 那么多行动画组中的第一行的下标是3，第二行就是4，依次类推。
 */
- (TABComponentLayerLinesBlock)dropFromIndex;

/**
 * 将动画层移出豆瓣动画队列，不参与变色。
 */
- (TABLoadStyleBlock)removeOnDrop;

/**
 * 豆瓣动画变色停留时间比，默认是0.2。
 */
- (TABComponentLayerBlock)dropStayTime;

@end

NS_ASSUME_NONNULL_END
