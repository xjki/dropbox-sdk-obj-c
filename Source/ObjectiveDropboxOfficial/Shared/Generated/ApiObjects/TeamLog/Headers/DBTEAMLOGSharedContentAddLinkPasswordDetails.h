///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBTEAMLOGSharedContentAddLinkPasswordDetails;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `SharedContentAddLinkPasswordDetails` struct.
///
/// Added password to link for shared file/folder.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMLOGSharedContentAddLinkPasswordDetails : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @return An initialized instance.
///
- (instancetype)initDefault;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `SharedContentAddLinkPasswordDetails`
/// struct.
///
@interface DBTEAMLOGSharedContentAddLinkPasswordDetailsSerializer : NSObject

///
/// Serializes `DBTEAMLOGSharedContentAddLinkPasswordDetails` instances.
///
/// @param instance An instance of the
/// `DBTEAMLOGSharedContentAddLinkPasswordDetails` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMLOGSharedContentAddLinkPasswordDetails` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBTEAMLOGSharedContentAddLinkPasswordDetails *)instance;

///
/// Deserializes `DBTEAMLOGSharedContentAddLinkPasswordDetails` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMLOGSharedContentAddLinkPasswordDetails` API object.
///
/// @return An instantiation of the
/// `DBTEAMLOGSharedContentAddLinkPasswordDetails` object.
///
+ (DBTEAMLOGSharedContentAddLinkPasswordDetails *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
