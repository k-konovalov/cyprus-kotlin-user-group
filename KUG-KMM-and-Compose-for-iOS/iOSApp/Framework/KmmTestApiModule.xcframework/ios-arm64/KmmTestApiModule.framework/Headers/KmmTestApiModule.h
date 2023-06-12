#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class KTAMKotlinEnumCompanion, KTAMKotlinEnum<E>, KTAMTelemetryTestEvent, KTAMKotlinArray<T>, KTAMOriginDTO, KTAMLocationDTO, KTAMCharacterDTOCompanion, KTAMCharacterDTO, KTAMInfoDTO, KTAMCharactersDTOCompanion, KTAMCharactersDTO, KTAMInfoDTOCompanion, KTAMLocationDTOCompanion, KTAMOriginDTOCompanion, KTAMKotlinThrowable, KTAMKotlinx_serialization_coreSerializersModule, KTAMKotlinx_serialization_coreSerialKind, KTAMKotlinNothing;

@protocol KTAMKotlinComparable, KTAMKotlinx_serialization_coreKSerializer, KTAMKotlinIterator, KTAMKotlinx_serialization_coreEncoder, KTAMKotlinx_serialization_coreSerialDescriptor, KTAMKotlinx_serialization_coreSerializationStrategy, KTAMKotlinx_serialization_coreDecoder, KTAMKotlinx_serialization_coreDeserializationStrategy, KTAMKotlinx_serialization_coreCompositeEncoder, KTAMKotlinAnnotation, KTAMKotlinx_serialization_coreCompositeDecoder, KTAMKotlinx_serialization_coreSerializersModuleCollector, KTAMKotlinKClass, KTAMKotlinKDeclarationContainer, KTAMKotlinKAnnotatedElement, KTAMKotlinKClassifier;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

#pragma push_macro("_Nullable_result")
#if !__has_feature(nullability_nullable_result)
#undef _Nullable_result
#define _Nullable_result _Nullable
#endif

__attribute__((swift_name("KotlinBase")))
@interface KTAMBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end

@interface KTAMBase (KTAMBaseCopying) <NSCopying>
@end

__attribute__((swift_name("KotlinMutableSet")))
@interface KTAMMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end

__attribute__((swift_name("KotlinMutableDictionary")))
@interface KTAMMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end

@interface NSError (NSErrorKTAMKotlinException)
@property (readonly) id _Nullable kotlinException;
@end

__attribute__((swift_name("KotlinNumber")))
@interface KTAMNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end

__attribute__((swift_name("KotlinByte")))
@interface KTAMByte : KTAMNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end

__attribute__((swift_name("KotlinUByte")))
@interface KTAMUByte : KTAMNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end

__attribute__((swift_name("KotlinShort")))
@interface KTAMShort : KTAMNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end

__attribute__((swift_name("KotlinUShort")))
@interface KTAMUShort : KTAMNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end

__attribute__((swift_name("KotlinInt")))
@interface KTAMInt : KTAMNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end

__attribute__((swift_name("KotlinUInt")))
@interface KTAMUInt : KTAMNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end

__attribute__((swift_name("KotlinLong")))
@interface KTAMLong : KTAMNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end

__attribute__((swift_name("KotlinULong")))
@interface KTAMULong : KTAMNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end

__attribute__((swift_name("KotlinFloat")))
@interface KTAMFloat : KTAMNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end

__attribute__((swift_name("KotlinDouble")))
@interface KTAMDouble : KTAMNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end

__attribute__((swift_name("KotlinBoolean")))
@interface KTAMBoolean : KTAMNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end

__attribute__((swift_name("PushDelegate")))
@protocol KTAMPushDelegate
@required
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((swift_name("KotlinComparable")))
@protocol KTAMKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end

__attribute__((swift_name("KotlinEnum")))
@interface KTAMKotlinEnum<E> : KTAMBase <KTAMKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KTAMKotlinEnumCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(E)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TelemetryTestEvent")))
@interface KTAMTelemetryTestEvent : KTAMKotlinEnum<KTAMTelemetryTestEvent *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) KTAMTelemetryTestEvent *ohmy __attribute__((swift_name("ohmy")));
+ (KTAMKotlinArray<KTAMTelemetryTestEvent *> *)values __attribute__((swift_name("values()")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CharacterDTO")))
@interface KTAMCharacterDTO : KTAMBase
- (instancetype)initWithId:(int32_t)id name:(NSString *)name status:(NSString *)status species:(NSString *)species type:(NSString *)type gender:(NSString *)gender origin:(KTAMOriginDTO *)origin location:(KTAMLocationDTO *)location image:(NSString *)image episode:(NSArray<NSString *> *)episode url:(NSString *)url created:(NSString *)created __attribute__((swift_name("init(id:name:status:species:type:gender:origin:location:image:episode:url:created:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KTAMCharacterDTOCompanion *companion __attribute__((swift_name("companion")));
- (KTAMCharacterDTO *)doCopyId:(int32_t)id name:(NSString *)name status:(NSString *)status species:(NSString *)species type:(NSString *)type gender:(NSString *)gender origin:(KTAMOriginDTO *)origin location:(KTAMLocationDTO *)location image:(NSString *)image episode:(NSArray<NSString *> *)episode url:(NSString *)url created:(NSString *)created __attribute__((swift_name("doCopy(id:name:status:species:type:gender:origin:location:image:episode:url:created:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *created __attribute__((swift_name("created")));
@property (readonly) NSArray<NSString *> *episode __attribute__((swift_name("episode")));
@property (readonly) NSString *gender __attribute__((swift_name("gender")));
@property (readonly) int32_t id __attribute__((swift_name("id")));
@property (readonly) NSString *image __attribute__((swift_name("image")));
@property (readonly) KTAMLocationDTO *location __attribute__((swift_name("location")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) KTAMOriginDTO *origin __attribute__((swift_name("origin")));
@property (readonly) NSString *species __attribute__((swift_name("species")));
@property (readonly) NSString *status __attribute__((swift_name("status")));
@property (readonly) NSString *type __attribute__((swift_name("type")));
@property (readonly) NSString *url __attribute__((swift_name("url")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CharacterDTO.Companion")))
@interface KTAMCharacterDTOCompanion : KTAMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KTAMCharacterDTOCompanion *shared __attribute__((swift_name("shared")));
- (id<KTAMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CharactersDTO")))
@interface KTAMCharactersDTO : KTAMBase
- (instancetype)initWithInfo:(KTAMInfoDTO *)info results:(NSArray<KTAMCharacterDTO *> *)results __attribute__((swift_name("init(info:results:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KTAMCharactersDTOCompanion *companion __attribute__((swift_name("companion")));
- (KTAMCharactersDTO *)doCopyInfo:(KTAMInfoDTO *)info results:(NSArray<KTAMCharacterDTO *> *)results __attribute__((swift_name("doCopy(info:results:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) KTAMInfoDTO *info __attribute__((swift_name("info")));
@property (readonly) NSArray<KTAMCharacterDTO *> *results __attribute__((swift_name("results")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CharactersDTO.Companion")))
@interface KTAMCharactersDTOCompanion : KTAMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KTAMCharactersDTOCompanion *shared __attribute__((swift_name("shared")));
- (id<KTAMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InfoDTO")))
@interface KTAMInfoDTO : KTAMBase
- (instancetype)initWithCount:(int32_t)count pages:(int32_t)pages next:(NSString * _Nullable)next prev:(NSString * _Nullable)prev __attribute__((swift_name("init(count:pages:next:prev:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KTAMInfoDTOCompanion *companion __attribute__((swift_name("companion")));
- (KTAMInfoDTO *)doCopyCount:(int32_t)count pages:(int32_t)pages next:(NSString * _Nullable)next prev:(NSString * _Nullable)prev __attribute__((swift_name("doCopy(count:pages:next:prev:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t count __attribute__((swift_name("count")));
@property (readonly) NSString * _Nullable next __attribute__((swift_name("next")));
@property (readonly) int32_t pages __attribute__((swift_name("pages")));
@property (readonly) NSString * _Nullable prev __attribute__((swift_name("prev")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InfoDTO.Companion")))
@interface KTAMInfoDTOCompanion : KTAMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KTAMInfoDTOCompanion *shared __attribute__((swift_name("shared")));
- (id<KTAMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LocationDTO")))
@interface KTAMLocationDTO : KTAMBase
- (instancetype)initWithName:(NSString *)name url:(NSString *)url __attribute__((swift_name("init(name:url:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KTAMLocationDTOCompanion *companion __attribute__((swift_name("companion")));
- (KTAMLocationDTO *)doCopyName:(NSString *)name url:(NSString *)url __attribute__((swift_name("doCopy(name:url:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSString *url __attribute__((swift_name("url")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LocationDTO.Companion")))
@interface KTAMLocationDTOCompanion : KTAMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KTAMLocationDTOCompanion *shared __attribute__((swift_name("shared")));
- (id<KTAMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OriginDTO")))
@interface KTAMOriginDTO : KTAMBase
- (instancetype)initWithName:(NSString *)name url:(NSString *)url __attribute__((swift_name("init(name:url:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KTAMOriginDTOCompanion *companion __attribute__((swift_name("companion")));
- (KTAMOriginDTO *)doCopyName:(NSString *)name url:(NSString *)url __attribute__((swift_name("doCopy(name:url:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSString *url __attribute__((swift_name("url")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OriginDTO.Companion")))
@interface KTAMOriginDTOCompanion : KTAMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KTAMOriginDTOCompanion *shared __attribute__((swift_name("shared")));
- (id<KTAMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RickAndMortyHttpClient")))
@interface KTAMRickAndMortyHttpClient : KTAMBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (KTAMCharactersDTO * _Nullable)getCharactersAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("getCharacters()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinEnumCompanion")))
@interface KTAMKotlinEnumCompanion : KTAMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KTAMKotlinEnumCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface KTAMKotlinArray<T> : KTAMBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(KTAMInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<KTAMKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerializationStrategy")))
@protocol KTAMKotlinx_serialization_coreSerializationStrategy
@required
- (void)serializeEncoder:(id<KTAMKotlinx_serialization_coreEncoder>)encoder value:(id _Nullable)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<KTAMKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreDeserializationStrategy")))
@protocol KTAMKotlinx_serialization_coreDeserializationStrategy
@required
- (id _Nullable)deserializeDecoder:(id<KTAMKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
@property (readonly) id<KTAMKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreKSerializer")))
@protocol KTAMKotlinx_serialization_coreKSerializer <KTAMKotlinx_serialization_coreSerializationStrategy, KTAMKotlinx_serialization_coreDeserializationStrategy>
@required
@end

__attribute__((swift_name("KotlinThrowable")))
@interface KTAMKotlinThrowable : KTAMBase
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(KTAMKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(KTAMKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (KTAMKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) KTAMKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
- (NSError *)asError __attribute__((swift_name("asError()")));
@end

__attribute__((swift_name("KotlinException")))
@interface KTAMKotlinException : KTAMKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(KTAMKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(KTAMKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KotlinIterator")))
@protocol KTAMKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreEncoder")))
@protocol KTAMKotlinx_serialization_coreEncoder
@required
- (id<KTAMKotlinx_serialization_coreCompositeEncoder>)beginCollectionDescriptor:(id<KTAMKotlinx_serialization_coreSerialDescriptor>)descriptor collectionSize:(int32_t)collectionSize __attribute__((swift_name("beginCollection(descriptor:collectionSize:)")));
- (id<KTAMKotlinx_serialization_coreCompositeEncoder>)beginStructureDescriptor:(id<KTAMKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));
- (void)encodeEnumEnumDescriptor:(id<KTAMKotlinx_serialization_coreSerialDescriptor>)enumDescriptor index:(int32_t)index __attribute__((swift_name("encodeEnum(enumDescriptor:index:)")));
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));
- (id<KTAMKotlinx_serialization_coreEncoder>)encodeInlineDescriptor:(id<KTAMKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("encodeInline(descriptor:)")));
- (void)encodeIntValue:(int32_t)value __attribute__((swift_name("encodeInt(value:)")));
- (void)encodeLongValue:(int64_t)value __attribute__((swift_name("encodeLong(value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNotNullMark __attribute__((swift_name("encodeNotNullMark()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNull __attribute__((swift_name("encodeNull()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableValueSerializer:(id<KTAMKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));
- (void)encodeSerializableValueSerializer:(id<KTAMKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));
@property (readonly) KTAMKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerialDescriptor")))
@protocol KTAMKotlinx_serialization_coreSerialDescriptor
@required

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (NSArray<id<KTAMKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<KTAMKotlinx_serialization_coreSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) NSArray<id<KTAMKotlinAnnotation>> *annotations __attribute__((swift_name("annotations")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) int32_t elementsCount __attribute__((swift_name("elementsCount")));
@property (readonly) BOOL isInline __attribute__((swift_name("isInline")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) BOOL isNullable __attribute__((swift_name("isNullable")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) KTAMKotlinx_serialization_coreSerialKind *kind __attribute__((swift_name("kind")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) NSString *serialName __attribute__((swift_name("serialName")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreDecoder")))
@protocol KTAMKotlinx_serialization_coreDecoder
@required
- (id<KTAMKotlinx_serialization_coreCompositeDecoder>)beginStructureDescriptor:(id<KTAMKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));
- (int32_t)decodeEnumEnumDescriptor:(id<KTAMKotlinx_serialization_coreSerialDescriptor>)enumDescriptor __attribute__((swift_name("decodeEnum(enumDescriptor:)")));
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));
- (id<KTAMKotlinx_serialization_coreDecoder>)decodeInlineDescriptor:(id<KTAMKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeInline(descriptor:)")));
- (int32_t)decodeInt __attribute__((swift_name("decodeInt()")));
- (int64_t)decodeLong __attribute__((swift_name("decodeLong()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeNotNullMark __attribute__((swift_name("decodeNotNullMark()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (KTAMKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<KTAMKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));
- (id _Nullable)decodeSerializableValueDeserializer:(id<KTAMKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));
@property (readonly) KTAMKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreCompositeEncoder")))
@protocol KTAMKotlinx_serialization_coreCompositeEncoder
@required
- (void)encodeBooleanElementDescriptor:(id<KTAMKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(descriptor:index:value:)")));
- (void)encodeByteElementDescriptor:(id<KTAMKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(descriptor:index:value:)")));
- (void)encodeCharElementDescriptor:(id<KTAMKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(descriptor:index:value:)")));
- (void)encodeDoubleElementDescriptor:(id<KTAMKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(descriptor:index:value:)")));
- (void)encodeFloatElementDescriptor:(id<KTAMKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(descriptor:index:value:)")));
- (id<KTAMKotlinx_serialization_coreEncoder>)encodeInlineElementDescriptor:(id<KTAMKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("encodeInlineElement(descriptor:index:)")));
- (void)encodeIntElementDescriptor:(id<KTAMKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(descriptor:index:value:)")));
- (void)encodeLongElementDescriptor:(id<KTAMKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(descriptor:index:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableElementDescriptor:(id<KTAMKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<KTAMKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeSerializableElementDescriptor:(id<KTAMKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<KTAMKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeShortElementDescriptor:(id<KTAMKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(descriptor:index:value:)")));
- (void)encodeStringElementDescriptor:(id<KTAMKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(descriptor:index:value:)")));
- (void)endStructureDescriptor:(id<KTAMKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)shouldEncodeElementDefaultDescriptor:(id<KTAMKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(descriptor:index:)")));
@property (readonly) KTAMKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModule")))
@interface KTAMKotlinx_serialization_coreSerializersModule : KTAMBase

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)dumpToCollector:(id<KTAMKotlinx_serialization_coreSerializersModuleCollector>)collector __attribute__((swift_name("dumpTo(collector:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<KTAMKotlinx_serialization_coreKSerializer> _Nullable)getContextualKClass:(id<KTAMKotlinKClass>)kClass typeArgumentsSerializers:(NSArray<id<KTAMKotlinx_serialization_coreKSerializer>> *)typeArgumentsSerializers __attribute__((swift_name("getContextual(kClass:typeArgumentsSerializers:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<KTAMKotlinx_serialization_coreSerializationStrategy> _Nullable)getPolymorphicBaseClass:(id<KTAMKotlinKClass>)baseClass value:(id)value __attribute__((swift_name("getPolymorphic(baseClass:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<KTAMKotlinx_serialization_coreDeserializationStrategy> _Nullable)getPolymorphicBaseClass:(id<KTAMKotlinKClass>)baseClass serializedClassName:(NSString * _Nullable)serializedClassName __attribute__((swift_name("getPolymorphic(baseClass:serializedClassName:)")));
@end

__attribute__((swift_name("KotlinAnnotation")))
@protocol KTAMKotlinAnnotation
@required
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_coreSerialKind")))
@interface KTAMKotlinx_serialization_coreSerialKind : KTAMBase
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreCompositeDecoder")))
@protocol KTAMKotlinx_serialization_coreCompositeDecoder
@required
- (BOOL)decodeBooleanElementDescriptor:(id<KTAMKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(descriptor:index:)")));
- (int8_t)decodeByteElementDescriptor:(id<KTAMKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeByteElement(descriptor:index:)")));
- (unichar)decodeCharElementDescriptor:(id<KTAMKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeCharElement(descriptor:index:)")));
- (int32_t)decodeCollectionSizeDescriptor:(id<KTAMKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeCollectionSize(descriptor:)")));
- (double)decodeDoubleElementDescriptor:(id<KTAMKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(descriptor:index:)")));
- (int32_t)decodeElementIndexDescriptor:(id<KTAMKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeElementIndex(descriptor:)")));
- (float)decodeFloatElementDescriptor:(id<KTAMKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeFloatElement(descriptor:index:)")));
- (id<KTAMKotlinx_serialization_coreDecoder>)decodeInlineElementDescriptor:(id<KTAMKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeInlineElement(descriptor:index:)")));
- (int32_t)decodeIntElementDescriptor:(id<KTAMKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeIntElement(descriptor:index:)")));
- (int64_t)decodeLongElementDescriptor:(id<KTAMKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeLongElement(descriptor:index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableElementDescriptor:(id<KTAMKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<KTAMKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeNullableSerializableElement(descriptor:index:deserializer:previousValue:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeSequentially __attribute__((swift_name("decodeSequentially()")));
- (id _Nullable)decodeSerializableElementDescriptor:(id<KTAMKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<KTAMKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (int16_t)decodeShortElementDescriptor:(id<KTAMKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeShortElement(descriptor:index:)")));
- (NSString *)decodeStringElementDescriptor:(id<KTAMKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeStringElement(descriptor:index:)")));
- (void)endStructureDescriptor:(id<KTAMKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
@property (readonly) KTAMKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface KTAMKotlinNothing : KTAMBase
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_coreSerializersModuleCollector")))
@protocol KTAMKotlinx_serialization_coreSerializersModuleCollector
@required
- (void)contextualKClass:(id<KTAMKotlinKClass>)kClass provider:(id<KTAMKotlinx_serialization_coreKSerializer> (^)(NSArray<id<KTAMKotlinx_serialization_coreKSerializer>> *))provider __attribute__((swift_name("contextual(kClass:provider:)")));
- (void)contextualKClass:(id<KTAMKotlinKClass>)kClass serializer:(id<KTAMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));
- (void)polymorphicBaseClass:(id<KTAMKotlinKClass>)baseClass actualClass:(id<KTAMKotlinKClass>)actualClass actualSerializer:(id<KTAMKotlinx_serialization_coreKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));
- (void)polymorphicDefaultBaseClass:(id<KTAMKotlinKClass>)baseClass defaultDeserializerProvider:(id<KTAMKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefault(baseClass:defaultDeserializerProvider:)"))) __attribute__((deprecated("Deprecated in favor of function with more precise name: polymorphicDefaultDeserializer")));
- (void)polymorphicDefaultDeserializerBaseClass:(id<KTAMKotlinKClass>)baseClass defaultDeserializerProvider:(id<KTAMKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefaultDeserializer(baseClass:defaultDeserializerProvider:)")));
- (void)polymorphicDefaultSerializerBaseClass:(id<KTAMKotlinKClass>)baseClass defaultSerializerProvider:(id<KTAMKotlinx_serialization_coreSerializationStrategy> _Nullable (^)(id))defaultSerializerProvider __attribute__((swift_name("polymorphicDefaultSerializer(baseClass:defaultSerializerProvider:)")));
@end

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol KTAMKotlinKDeclarationContainer
@required
@end

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol KTAMKotlinKAnnotatedElement
@required
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((swift_name("KotlinKClassifier")))
@protocol KTAMKotlinKClassifier
@required
@end

__attribute__((swift_name("KotlinKClass")))
@protocol KTAMKotlinKClass <KTAMKotlinKDeclarationContainer, KTAMKotlinKAnnotatedElement, KTAMKotlinKClassifier>
@required

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName __attribute__((swift_name("qualifiedName")));
@property (readonly) NSString * _Nullable simpleName __attribute__((swift_name("simpleName")));
@end

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
