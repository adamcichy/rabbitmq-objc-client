#import <Foundation/Foundation.h>
#import "RMQChannel.h"
#import "RMQFramesetWaiter.h"
#import "RMQLocalSerialQueue.h"

@interface RMQAllocatedChannel : MTLModel <RMQChannel>
- (nonnull instancetype)init:(nonnull NSNumber *)channelNumber
                      sender:(nonnull id <RMQSender>)sender
                      waiter:(nonnull id<RMQFramesetWaiter>)waiter
                       queue:(nonnull id<RMQLocalSerialQueue>)queue;
@end
