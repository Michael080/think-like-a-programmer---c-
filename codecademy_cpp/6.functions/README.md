# functions
>[!note] [`c++` functions cheatsheet | *freecodecamp*](https://www.codecademy.com/learn/learn-c-plus-plus/modules/learn-cpp-functions/cheatsheet)

## declaration & definition
- **declaration:** includes name, return type, and parameters if any
- **definition:** aka *function body*, contains instructions for what function is to do

### example
```c++
function izer(param1, param2) { // <-- declaration
  // definition
} // <-- declaration
```

## the `void` specifier
*for functions w/out output (return value) use the `void` specifier*
```c++
void return_no_thang() {
    std::cout << "I do sumthin' but mostly nothin' \n";
}
```

## return data types
>[!tip] functions returning different types
> functions which return a different datatype than the `main` function
> should be declared outside of `main()`:
> ```c++
> //...
> bool is_working() {
> return true;
> }
>
> int main() {
>   std::cout << is_working();
> }
> ```

## Parameters
Function parameters behave similarly to javascript  but are less forgiving when calling (*if 2 parameters, w/out 2 arguments call compilation will fail*), and datatypes must be spec'd.

## Scope & Flexibility
What would be called *function scope* in js is referred to as *local scope* in `c++`. And insofar as variable declarations go `c++` behaves the same as js.

### Multi-file Programs
Files spec'd in compilation command are linked
>[!abstract] Steps:
> - 1. **add declarations for each function @ top of file**
>   - *declaration includes datatype, function name, & params in parens*
> - 2. **move/write function definitions in separate "functions" file**
> - 3. **compile file/s in single command**

#### 1. function declarations | `main.cpp`
>[!tip] Example multi-file projects:
> `./scope-and-flexibility/2.multi-file-programs/main.cpp`

```c++
#include <iostream>

// declarations @ top of `main.cpp` above `main()`
double average(double num1, double num2);
int tenth_power(int num);

int main() {
  // ...
```

##### 3. compile/link
```bash
# compile main and function file/s
g++ main.cpp my_functions.cpp
```

#### separate header files
Instead of keeping the *function declarations* @ the top of `main.cpp` they can be kept in a separate file to reduce clutter.

>[!example]
> - 1. create *header file*
>   - usually same name as "functions" file w/ extension `.hpp` or `.h`
> - 2. add headers to *header file*
> - 3. include @ top of `main.cpp`
> - 4. compile files: *link `.cpp` files*
> **Header files MUST be included in the file with main()**

##### 1-2 header file | `my_functions.hpp`
```c++
double average(double num1, double num2);
int tenth_power(int num);
bool is_palindrome(std::string text);
```

##### 3. include in `main.cpp`
```c++
#include <iostream>
#include "my_functions.hpp"

int main() {
  // ...
```

##### 4. compile & link
```c++
g++ main.cpp my_functions.cpp
```

### inline functions
#### inline function
| *"Using inline advises the compiler to insert the function’s body where the function call is, which sometimes helps with execution speed (and sometimes hinders execution speed)."*

```c++
// qulified by `inline`
inline 
void eat() {

  std::cout << "nom nom\n";

}
```

#### inline function *as member function*
| *"However, you will sometimes also hear about “inline functions” that are just member functions (i.e. functions inside of classes)
|  — which have been defined and declared in a single line in a header file because the function body is so short:"*

```c++ 
// cookie_functions.hpp

// eat() belongs to the Cookie class:
void Cookie::eat() {std::cout << "nom nom\n";} 
```

### default arguments
>![example] see `./scope-and-flexibility/4.default-arguments/main.cpp` for example project

**Example project layout:**
- `main.cpp`
- `functions.hpp`: header file <-- **set defaults here**
- `functions.cpp`: function definitions

```c++
// if not arg provided string `c++` will be used as `lang`
void intro(std::string lang = "c++");
```
**Note:** *if using a headers file (function declarations), default args would be set in that file*

### function overloading
>[!tip] this process is the opposite of DRY, see next section *function templates* for more better goods

**function overloading:** by giving multiple functions the same name, **function overloading** allows acceptance of different types for single args (*as long at least one condition is true*), and allows params to be optional

#### define func which takes `char` or `int`
```c++
void print_cat_ears(char let) {
  std::cout << " " << let << "   " << let << " " << "\n";
  std::cout << let << let << let << " " << let << let << let << "\n";
}

void print_cat_ears(int num) {
  std::cout << " " << num << "   " << num << " " << "\n";
  std::cout << num << num << num << " " << num << num << num << "\n";
}
```

### function templates
When two functions have the same body but different types **function templates** can be used

**create template | *@ function declarations `.hpp`***
```c++
// spec template
template <typename T>
void print_cat_ears(T item) {

  std::cout << " " << item << "   " << item << " " << "\n";
  std::cout << item << item << item << " " << item << item << item << "\n";

}
```

**call func `print_cat_ears`**
```c++
print_cat_ears(2);
// the output: =>
//  2   2
// 222 222
```
*As long as the argument's type can be used w/ the methods expected*

>[!note] Using templates will slow down the program’s compile time, but speed up the execution time.
