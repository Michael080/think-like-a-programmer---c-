# [Function Declarations in Header file](https://www.codecademy.com/learn/learn-c-plus-plus/modules/learn-cpp-functions/cheatsheet)
## *Declaration* vs *Definition*
| *C++ functions typically have two parts: declaration and definition.*
|
| *Function declarations are generally stored in a header file (`.hpp` or `.h`) and function definitions (body of the function that defines how it is implemented) are written in the `.cpp` file.*

**[According to this *stack overflow* post:](https://stackoverflow.com/questions/1410563/what-is-the-difference-between-a-definition-and-a-declaration)
**Declaration**
- A **declaration** introduces an identifier and describes its type, be it a type, object, or function. 
- A **declaration** is what the compiler needs to accept references to that identifier. **e.g.** *`int square(int num)`*

**Definition**
- A **definition** actually instantiates/implements this identifier. It's **what the linker needs** in order to link references to those entities. These are definitions corresponding to the above declarations: **`int square(int num) {return num*num}`**

### Example/s
```c++
// declaration | `square.hpp` or `square.h`
int square(int num);

// definition: a definition can act as both a declaration & definition if I'm not mistaken | `square.cpp`
int square(int num) {
  return num*num;
}
```

## File Structure
- **declaration:** located in header file `square.hpp` or `square.h`
- **definition:** in `main.cpp` file *before `main()` definition, **or** in a separate `.cpp` file for funcs `square.cpp`
  - wherever the function is defined & a header file also exists: **the header must be included - `#include "square.hpp"`

>[!example] Square Program
> Let's create an example project consisting of 3 files:
> - **`main.cpp`** execution, location of `main()`, etc,.
> - **`square.h`:** declaration of `square()`
>   - **e.g.** *`int square(int num);`
> - **`square.cpp`:** definition of `square()`
>   - **e.g.** *`int square(int num) {return num*num};`
