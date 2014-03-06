// Person
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>
#import <KFData/KFData.h>

@class Country, CountryRelationshipAttribute;

@interface PersonRelationshipAttribute : KFAttribute

/** age */
- (KFAttribute *)age;

/** firstName */
- (KFAttribute *)firstName;

/** lastName */
- (KFAttribute *)lastName;

/** username */
- (KFAttribute *)username;

/** companies */
- (KFAttribute *)companies;

/** country */
- (CountryRelationshipAttribute *)country;

@end

@interface Person : NSManagedObject

+ (NSString *)entityName;

#pragma mark - Properties

/** age (required) */
@property (nonatomic, assign) int32_t age;

/** firstName (optional) */
@property (nonatomic, retain) NSString *firstName;

/** lastName (optional) */
@property (nonatomic, retain) NSString *lastName;

/** username (required) */
@property (nonatomic, retain) NSString *username;

/** companies (optional) */
@property (nonatomic, retain) NSOrderedSet *companies;

/** country (required) */
@property (nonatomic, retain) Country *country;

@end

@interface Person (CoreDataGeneratedAccessors)

- (void)addCompaniesObject:(NSManagedObject *)value;
- (void)removeCompaniesObject:(NSManagedObject *)value;
- (void)addCompanies:(NSOrderedSet *)values;
- (void)removeCompanies:(NSOrderedSet *)values;

@end

@interface Person (KFAttribute)

/** age */
+ (KFAttribute *)age;

/** firstName */
+ (KFAttribute *)firstName;

/** lastName */
+ (KFAttribute *)lastName;

/** username */
+ (KFAttribute *)username;

/** companies */
+ (KFAttribute *)companies;

/** country */
+ (CountryRelationshipAttribute *)country;

@end
