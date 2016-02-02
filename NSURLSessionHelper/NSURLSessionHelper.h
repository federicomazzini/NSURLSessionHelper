//
//  NSURLSessionHelper.h
//  NSURLSessionHelper
//
//  Created by Federico Mazzini on 2/2/16.
//  Copyright © 2016 FedericoMazzini. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef void (^DataFn)(NSData *data);

@interface NSURLSessionHelper : NSObject

@property (nonatomic, strong) NSURLSession *session;

+ (id)sharedHelper;

-(void)fetchDataFromURL:(NSString*)URL completion:(DataFn)completion;
-(NSDictionary*)SerializeFetchedDataToJSON:(NSData *)responseData;

@end
