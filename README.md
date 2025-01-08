# Modern String in C
- This is a package which contains implementation of modern String in C language. 
- It provides several optimized functions written in C.

## How to use it?
- **Step 1**: Copy this whole repo to your project's directory.
- **Step 2**: Include 'String.h' file in your code like this:
```c
#include "Modern_String/Modern_String.h"
```
- **Step 3**: To create a String, below is an example:
```c
#include "Modern_String/Modern_String.h"

int main(void)
{
    ModernString str = makeString("Hello, World");

    printString(&str);

    destroyString(str); // do it or face memory leak
}
```
#### **NOTE**: Don't create instance of '**struct String**' directly. Instead, call '**makeString()**' functions which is as fast as creating an instance directly and it performs additional settings to make your string work stable.

## 🔗 Developer Links
[![portfolio](https://img.shields.io/badge/my_portfolio-000?style=for-the-badge&logo=ko-fi&logoColor=white)](https://sakshamjoshi.netlify.app/)
[![linkedin](https://img.shields.io/badge/linkedin-0A66C2?style=for-the-badge&logo=linkedin&logoColor=white)](https://www.linkedin.com/in/sakshamjoshi27)
[![Github](https://img.shields.io/badge/Visit_my-Github-purple)](https://github.com/saksham-joshi)
[![X(Twitter)](https://img.shields.io/twitter/follow/sakshamjoshi27
)](https://x.com/sakshamjoshi27)
[![Static Badge](https://img.shields.io/badge/mail_at-social.sakshamjoshi%40gmail.com-aqua)](mailto:social.sakshamjoshi@gmail.com)


