//
//  ZIKRoutePrivate.h
//  ZIKRouter
//
//  Created by zuik on 2018/4/7.
//  Copyright © 2018 zuik. All rights reserved.
//

#import "ZIKRoute.h"

@interface ZIKRoute<__covariant Destination, __covariant RouteConfig: ZIKPerformRouteConfiguration *, __covariant RemoveConfig: ZIKRemoveRouteConfiguration *> ()
@property (nonatomic, copy, readonly) _Nullable Destination(^makeDestinationBlock)(RouteConfig config, ZIKRouter *router);
@property (nonatomic, copy, readonly, nullable) RouteConfig(^makeDefaultConfigurationBlock)(void);
@property (nonatomic, copy, readonly, nullable) RemoveConfig(^makeDefaultRemoveConfigurationBlock)(void);
@property (nonatomic, copy, readonly, nullable) void(^prepareDestinationBlock)(Destination destination, RouteConfig config, ZIKRouter *router);
@property (nonatomic, copy, readonly, nullable) void(^didFinishPrepareDestinationBlock)(Destination destination, RouteConfig config, ZIKRouter *router);

- (Class)routerClass;
+ (Class)registryClass;

@end