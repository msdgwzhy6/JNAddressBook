# JNAddressBook
Very easy to get iOS address book 

```objective-c
@interface JNAddressBook : NSObject

@property (nonatomic,assign) int recordID;
@property (nonatomic,copy) NSString *name;
@property (nonatomic,copy) NSString *email;
@property (nonatomic,copy) NSString *phoneNum;

/**
 *  Access to mobile phone contacts
 */

+(NSArray*)arrayWithAddressBook;
@end
```
##Get Data

```objective-c

NSArray addressBooks = [JNAddressBook arrayWithAddressBook];

```
