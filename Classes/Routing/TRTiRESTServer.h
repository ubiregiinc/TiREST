//
//  TiRESTServer.h
//  TiREST
//
//  Created by Kota Mizushima on 12/06/20.
//
//

#import <Foundation/Foundation.h>
#import "TRRoutableHTTPConnection.h"

@interface TRTiRESTServer : NSObject {
	Class routerClass_;
}

@property (nonatomic) Class routerClass;

- (id)init:(NSUInteger)port useBonjour:(BOOL)useBonjour documentRoot:(NSString*)documentRoot routerClass:(Class)routerClass;

- (id)init:(NSUInteger)port routerClass:(Class)routerClass;

- (void)start:(NSError *__autoreleasing *)error;

- (void)stop;
	
+ (TRTiRESTServer*)newServer:(NSUInteger)port useBonjour:(BOOL)useBonjour documentRoot:(NSString*)documentRoot routerClass:(Class)routerClass;

+ (TRTiRESTServer*)newServer:(NSUInteger)port routerClass:(Class)routerClass;

@end