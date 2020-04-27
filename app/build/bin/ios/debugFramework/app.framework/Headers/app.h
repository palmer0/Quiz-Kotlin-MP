#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class AppCheatToQuestionState, AppQuestionState, AppQuestionToCheatState, AppQuestionResources, AppQuestionData, AppResultData, AppAppMediator, AppQuestionViewModel;

@protocol AppQuestionViewContract, AppPlatformProtocol, AppQuestionModelContract, AppQuestionRouterContract, AppQuestionPresenterContract;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wnullability"

__attribute__((swift_name("KotlinBase")))
@interface AppBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end;

@interface AppBase (AppBaseCopying) <NSCopying>
@end;

__attribute__((swift_name("KotlinMutableSet")))
@interface AppMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end;

__attribute__((swift_name("KotlinMutableDictionary")))
@interface AppMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end;

@interface NSError (NSErrorAppKotlinException)
@property (readonly) id _Nullable kotlinException;
@end;

__attribute__((swift_name("KotlinNumber")))
@interface AppNumber : NSNumber
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
@end;

__attribute__((swift_name("KotlinByte")))
@interface AppByte : AppNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end;

__attribute__((swift_name("KotlinUByte")))
@interface AppUByte : AppNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end;

__attribute__((swift_name("KotlinShort")))
@interface AppShort : AppNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end;

__attribute__((swift_name("KotlinUShort")))
@interface AppUShort : AppNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end;

__attribute__((swift_name("KotlinInt")))
@interface AppInt : AppNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end;

__attribute__((swift_name("KotlinUInt")))
@interface AppUInt : AppNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end;

__attribute__((swift_name("KotlinLong")))
@interface AppLong : AppNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end;

__attribute__((swift_name("KotlinULong")))
@interface AppULong : AppNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end;

__attribute__((swift_name("KotlinFloat")))
@interface AppFloat : AppNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end;

__attribute__((swift_name("KotlinDouble")))
@interface AppDouble : AppNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end;

__attribute__((swift_name("KotlinBoolean")))
@interface AppBoolean : AppNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AppMediator")))
@interface AppAppMediator : AppBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)appMediator __attribute__((swift_name("init()")));
@property AppCheatToQuestionState * _Nullable cheatToQuestionState __attribute__((swift_name("cheatToQuestionState")));
@property AppQuestionState *questionState __attribute__((swift_name("questionState")));
@property AppQuestionToCheatState * _Nullable questionToCheatState __attribute__((swift_name("questionToCheatState")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CheatToQuestionState")))
@interface AppCheatToQuestionState : AppBase
- (instancetype)initWithCheated:(BOOL)cheated __attribute__((swift_name("init(cheated:)"))) __attribute__((objc_designated_initializer));
- (BOOL)component1 __attribute__((swift_name("component1()")));
- (AppCheatToQuestionState *)doCopyCheated:(BOOL)cheated __attribute__((swift_name("doCopy(cheated:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL cheated __attribute__((swift_name("cheated")));
@end;

__attribute__((swift_name("PlatformProtocol")))
@protocol AppPlatformProtocol
@required
- (AppQuestionResources *)getQuestionResources __attribute__((swift_name("getQuestionResources()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PlatformResources")))
@interface AppPlatformResources : AppBase
- (instancetype)initWithView:(id<AppQuestionViewContract>)view __attribute__((swift_name("init(view:)"))) __attribute__((objc_designated_initializer));
- (AppQuestionResources *)getQuestionResources __attribute__((swift_name("getQuestionResources()")));
- (void)setImplementationProtocol:(id<AppPlatformProtocol>)protocol __attribute__((swift_name("setImplementation(protocol:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("QuestionData")))
@interface AppQuestionData : AppBase
- (instancetype)initWithTrueLabel:(NSString *)trueLabel falseLabel:(NSString *)falseLabel cheatLabel:(NSString *)cheatLabel nextLabel:(NSString *)nextLabel __attribute__((swift_name("init(trueLabel:falseLabel:cheatLabel:nextLabel:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (AppQuestionData *)doCopyTrueLabel:(NSString *)trueLabel falseLabel:(NSString *)falseLabel cheatLabel:(NSString *)cheatLabel nextLabel:(NSString *)nextLabel __attribute__((swift_name("doCopy(trueLabel:falseLabel:cheatLabel:nextLabel:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *cheatLabel __attribute__((swift_name("cheatLabel")));
@property (readonly) NSString *falseLabel __attribute__((swift_name("falseLabel")));
@property (readonly) NSString *nextLabel __attribute__((swift_name("nextLabel")));
@property (readonly) NSString *trueLabel __attribute__((swift_name("trueLabel")));
@end;

__attribute__((swift_name("QuestionModelContract")))
@protocol AppQuestionModelContract
@required
- (AppQuestionData *)fetchQuestionData __attribute__((swift_name("fetchQuestionData()")));
- (AppResultData *)fetchResultData __attribute__((swift_name("fetchResultData()")));
- (BOOL)getCurrentAnswer __attribute__((swift_name("getCurrentAnswer()")));
- (int32_t)getCurrentIndex __attribute__((swift_name("getCurrentIndex()")));
- (NSString *)getCurrentQuestion __attribute__((swift_name("getCurrentQuestion()")));
- (void)incrCurrentIndex __attribute__((swift_name("incrCurrentIndex()")));
- (void)setCurrentIndexIndex:(int32_t)index __attribute__((swift_name("setCurrentIndex(index:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("QuestionModel")))
@interface AppQuestionModel : AppBase <AppQuestionModelContract>
- (instancetype)initWithResources:(AppQuestionResources *)resources __attribute__((swift_name("init(resources:)"))) __attribute__((objc_designated_initializer));
- (AppQuestionData *)fetchQuestionData __attribute__((swift_name("fetchQuestionData()")));
- (AppResultData *)fetchResultData __attribute__((swift_name("fetchResultData()")));
- (BOOL)getCurrentAnswer __attribute__((swift_name("getCurrentAnswer()")));
- (int32_t)getCurrentIndex __attribute__((swift_name("getCurrentIndex()")));
- (NSString *)getCurrentQuestion __attribute__((swift_name("getCurrentQuestion()")));
- (void)incrCurrentIndex __attribute__((swift_name("incrCurrentIndex()")));
- (void)setCurrentIndexIndex:(int32_t)index __attribute__((swift_name("setCurrentIndex(index:)")));
@property int32_t quizIndex __attribute__((swift_name("quizIndex")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("QuestionModel.Companion")))
@interface AppQuestionModelCompanion : AppBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (readonly) NSString *TAG __attribute__((swift_name("TAG")));
@end;

__attribute__((swift_name("QuestionPresenterContract")))
@protocol AppQuestionPresenterContract
@required
- (void)clickCheatButton __attribute__((swift_name("clickCheatButton()")));
- (void)clickFalseButton __attribute__((swift_name("clickFalseButton()")));
- (void)clickNextButton __attribute__((swift_name("clickNextButton()")));
- (void)clickTrueButton __attribute__((swift_name("clickTrueButton()")));
- (void)fetchScreenData __attribute__((swift_name("fetchScreenData()")));
@property id<AppQuestionModelContract> model __attribute__((swift_name("model")));
@property id<AppQuestionRouterContract> router __attribute__((swift_name("router")));
@property id<AppQuestionViewContract> view __attribute__((swift_name("view")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("QuestionPresenter")))
@interface AppQuestionPresenter : AppBase <AppQuestionPresenterContract>
- (instancetype)initWithState:(AppQuestionState *)state __attribute__((swift_name("init(state:)"))) __attribute__((objc_designated_initializer));
- (void)clickCheatButton __attribute__((swift_name("clickCheatButton()")));
- (void)clickFalseButton __attribute__((swift_name("clickFalseButton()")));
- (void)clickNextButton __attribute__((swift_name("clickNextButton()")));
- (void)clickTrueButton __attribute__((swift_name("clickTrueButton()")));
- (void)fetchScreenData __attribute__((swift_name("fetchScreenData()")));
@property id<AppQuestionModelContract> model __attribute__((swift_name("model")));
@property id<AppQuestionRouterContract> router __attribute__((swift_name("router")));
@property id<AppQuestionViewContract> view __attribute__((swift_name("view")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("QuestionPresenter.Companion")))
@interface AppQuestionPresenterCompanion : AppBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (readonly) NSString *TAG __attribute__((swift_name("TAG")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("QuestionResources")))
@interface AppQuestionResources : AppBase
- (instancetype)initWithTrueLabel:(NSString *)trueLabel falseLabel:(NSString *)falseLabel cheatLabel:(NSString *)cheatLabel nextLabel:(NSString *)nextLabel correctLabel:(NSString *)correctLabel incorrectLabel:(NSString *)incorrectLabel questions:(NSArray<NSString *> *)questions answers:(NSArray<NSString *> *)answers __attribute__((swift_name("init(trueLabel:falseLabel:cheatLabel:nextLabel:correctLabel:incorrectLabel:questions:answers:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (NSString *)component5 __attribute__((swift_name("component5()")));
- (NSString *)component6 __attribute__((swift_name("component6()")));
- (NSArray<NSString *> *)component7 __attribute__((swift_name("component7()")));
- (NSArray<NSString *> *)component8 __attribute__((swift_name("component8()")));
- (AppQuestionResources *)doCopyTrueLabel:(NSString *)trueLabel falseLabel:(NSString *)falseLabel cheatLabel:(NSString *)cheatLabel nextLabel:(NSString *)nextLabel correctLabel:(NSString *)correctLabel incorrectLabel:(NSString *)incorrectLabel questions:(NSArray<NSString *> *)questions answers:(NSArray<NSString *> *)answers __attribute__((swift_name("doCopy(trueLabel:falseLabel:cheatLabel:nextLabel:correctLabel:incorrectLabel:questions:answers:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<NSString *> *answers __attribute__((swift_name("answers")));
@property (readonly) NSString *cheatLabel __attribute__((swift_name("cheatLabel")));
@property (readonly) NSString *correctLabel __attribute__((swift_name("correctLabel")));
@property (readonly) NSString *falseLabel __attribute__((swift_name("falseLabel")));
@property (readonly) NSString *incorrectLabel __attribute__((swift_name("incorrectLabel")));
@property (readonly) NSString *nextLabel __attribute__((swift_name("nextLabel")));
@property (readonly) NSArray<NSString *> *questions __attribute__((swift_name("questions")));
@property (readonly) NSString *trueLabel __attribute__((swift_name("trueLabel")));
@end;

__attribute__((swift_name("QuestionRouterContract")))
@protocol AppQuestionRouterContract
@required
- (BOOL)getDataFromCheatScreen __attribute__((swift_name("getDataFromCheatScreen()")));
- (void)passDataToCheatScreenAnswer:(BOOL)answer __attribute__((swift_name("passDataToCheatScreen(answer:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("QuestionRouter")))
@interface AppQuestionRouter : AppBase <AppQuestionRouterContract>
- (instancetype)initWithMediator:(AppAppMediator *)mediator __attribute__((swift_name("init(mediator:)"))) __attribute__((objc_designated_initializer));
- (BOOL)getDataFromCheatScreen __attribute__((swift_name("getDataFromCheatScreen()")));
- (void)passDataToCheatScreenAnswer:(BOOL)answer __attribute__((swift_name("passDataToCheatScreen(answer:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("QuestionRouter.Companion")))
@interface AppQuestionRouterCompanion : AppBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (readonly) NSString *TAG __attribute__((swift_name("TAG")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("QuestionState")))
@interface AppQuestionState : AppBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property BOOL cheatEnabled __attribute__((swift_name("cheatEnabled")));
@property NSString * _Nullable cheatLabel __attribute__((swift_name("cheatLabel")));
@property BOOL falseEnabled __attribute__((swift_name("falseEnabled")));
@property NSString * _Nullable falseLabel __attribute__((swift_name("falseLabel")));
@property BOOL nextEnabled __attribute__((swift_name("nextEnabled")));
@property NSString * _Nullable nextLabel __attribute__((swift_name("nextLabel")));
@property NSString * _Nullable questionText __attribute__((swift_name("questionText")));
@property int32_t quizIndex __attribute__((swift_name("quizIndex")));
@property NSString * _Nullable resultText __attribute__((swift_name("resultText")));
@property BOOL trueEnabled __attribute__((swift_name("trueEnabled")));
@property NSString * _Nullable trueLabel __attribute__((swift_name("trueLabel")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("QuestionToCheatState")))
@interface AppQuestionToCheatState : AppBase
- (instancetype)initWithAnswer:(BOOL)answer __attribute__((swift_name("init(answer:)"))) __attribute__((objc_designated_initializer));
- (BOOL)component1 __attribute__((swift_name("component1()")));
- (AppQuestionToCheatState *)doCopyAnswer:(BOOL)answer __attribute__((swift_name("doCopy(answer:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL answer __attribute__((swift_name("answer")));
@end;

__attribute__((swift_name("QuestionViewContract")))
@protocol AppQuestionViewContract
@required
- (void)displayQuestionDataViewModel:(AppQuestionViewModel *)viewModel __attribute__((swift_name("displayQuestionData(viewModel:)")));
- (void)navigateToCheatScreen __attribute__((swift_name("navigateToCheatScreen()")));
@property id<AppQuestionPresenterContract> presenter __attribute__((swift_name("presenter")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("QuestionViewModel")))
@interface AppQuestionViewModel : AppBase
- (instancetype)initWithQuestionText:(NSString * _Nullable)questionText resultText:(NSString * _Nullable)resultText trueLabel:(NSString * _Nullable)trueLabel falseLabel:(NSString * _Nullable)falseLabel cheatLabel:(NSString * _Nullable)cheatLabel nextLabel:(NSString * _Nullable)nextLabel trueEnabled:(BOOL)trueEnabled falseEnabled:(BOOL)falseEnabled cheatEnabled:(BOOL)cheatEnabled nextEnabled:(BOOL)nextEnabled __attribute__((swift_name("init(questionText:resultText:trueLabel:falseLabel:cheatLabel:nextLabel:trueEnabled:falseEnabled:cheatEnabled:nextEnabled:)"))) __attribute__((objc_designated_initializer));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (BOOL)component10 __attribute__((swift_name("component10()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (NSString * _Nullable)component5 __attribute__((swift_name("component5()")));
- (NSString * _Nullable)component6 __attribute__((swift_name("component6()")));
- (BOOL)component7 __attribute__((swift_name("component7()")));
- (BOOL)component8 __attribute__((swift_name("component8()")));
- (BOOL)component9 __attribute__((swift_name("component9()")));
- (AppQuestionViewModel *)doCopyQuestionText:(NSString * _Nullable)questionText resultText:(NSString * _Nullable)resultText trueLabel:(NSString * _Nullable)trueLabel falseLabel:(NSString * _Nullable)falseLabel cheatLabel:(NSString * _Nullable)cheatLabel nextLabel:(NSString * _Nullable)nextLabel trueEnabled:(BOOL)trueEnabled falseEnabled:(BOOL)falseEnabled cheatEnabled:(BOOL)cheatEnabled nextEnabled:(BOOL)nextEnabled __attribute__((swift_name("doCopy(questionText:resultText:trueLabel:falseLabel:cheatLabel:nextLabel:trueEnabled:falseEnabled:cheatEnabled:nextEnabled:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL cheatEnabled __attribute__((swift_name("cheatEnabled")));
@property (readonly) NSString * _Nullable cheatLabel __attribute__((swift_name("cheatLabel")));
@property (readonly) BOOL falseEnabled __attribute__((swift_name("falseEnabled")));
@property (readonly) NSString * _Nullable falseLabel __attribute__((swift_name("falseLabel")));
@property (readonly) BOOL nextEnabled __attribute__((swift_name("nextEnabled")));
@property (readonly) NSString * _Nullable nextLabel __attribute__((swift_name("nextLabel")));
@property (readonly) NSString * _Nullable questionText __attribute__((swift_name("questionText")));
@property (readonly) NSString * _Nullable resultText __attribute__((swift_name("resultText")));
@property (readonly) BOOL trueEnabled __attribute__((swift_name("trueEnabled")));
@property (readonly) NSString * _Nullable trueLabel __attribute__((swift_name("trueLabel")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ResultData")))
@interface AppResultData : AppBase
- (instancetype)initWithCorrectLabel:(NSString *)correctLabel incorrectLabel:(NSString *)incorrectLabel __attribute__((swift_name("init(correctLabel:incorrectLabel:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (AppResultData *)doCopyCorrectLabel:(NSString *)correctLabel incorrectLabel:(NSString *)incorrectLabel __attribute__((swift_name("doCopy(correctLabel:incorrectLabel:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *correctLabel __attribute__((swift_name("correctLabel")));
@property (readonly) NSString *incorrectLabel __attribute__((swift_name("incorrectLabel")));
@end;

#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
