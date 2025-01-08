

#include "Modern_String_utility.h"


/*==| Forward declaration of String functions |==*/

inline void appendString(MstrPtr, const char*);
inline char atString(MstrPtr, ULongLong);

inline void capitalizeString(MstrPtr);
inline void clearString(MstrPtr);
inline signed short int compareString(MstrPtr , MstrPtr);
inline signed short int compareConstCharWithString(MstrPtr , const char*);
inline ModernString copyString(MstrPtr);
inline ULongLong countString(MstrPtr, char);

inline void deleteCharString(MstrPtr , const ULongLong);
inline void deletePartString(MstrPtr, const ULongLong, const ULongLong);
inline void destroyString(MstrPtr);
inline const char* getConstCharString(MstrPtr);
inline ULongLong indexString(MstrPtr, char);

inline ModernStringBool isAlphabetString(MstrPtr);
inline ModernStringBool isAlphaNumericString(MstrPtr);
inline ModernStringBool isNumericString(MstrPtr);
inline ModernStringBool isEmptyString(MstrPtr);

inline ModernStringBool isEqualString(MstrPtr, MstrPtr);
inline ModernStringBool isEqualToConstChar(MstrPtr, const char*);

inline ModernStringBool isLessThanString(MstrPtr, MstrPtr);          
inline ModernStringBool isLessThanConstChar(MstrPtr , const char*);      
inline ModernStringBool isLessThanEqualToString(MstrPtr, MstrPtr);     
inline ModernStringBool isLessThanEqualToConstChar(MstrPtr , const char*); 

inline ModernStringBool isMoreThanString(MstrPtr, MstrPtr);          
inline ModernStringBool isMoreThanConstChar(MstrPtr , const char*);      
inline ModernStringBool isMoreThanEqualToString(MstrPtr, MstrPtr);     
inline ModernStringBool isMoreThanEqualToConstChar(MstrPtr , const char*);

inline ModernStringBool isLowerCaseString(MstrPtr);
inline ModernStringBool isUpperCaseString(MstrPtr);

inline ULongLong lenString(MstrPtr);
inline ModernString makeString(const char*);
inline ModernString makeEmptyString();
inline ModernString makeReservedString(unsigned long);

inline char popBackString(MstrPtr);
inline char popFrontString(MstrPtr);
inline void printString(MstrPtr);
inline void printlnString(MstrPtr);
inline void pushBackString(MstrPtr, char);

inline void replaceCharString(MstrPtr, char, char);
inline void reverseString(MstrPtr);
inline ULongLong rindexString(MstrPtr, char);

inline void sortString(MstrPtr); //==
inline ModernStringStats statsString(MstrPtr);
inline ModernString subString(MstrPtr, ULongLong, ULongLong);

inline void toLowerCaseString(MstrPtr);
inline void toUpperCaseString(MstrPtr);

inline ModernString takeInputString(const char*);
inline void trimString(MstrPtr);