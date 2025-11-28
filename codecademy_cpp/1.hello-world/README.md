# 1 - hello world
## c++ program 
```c++
// This program outputs message "Hello World"

// pre-processor directive instructing compiler to locate library called `iostream`
#include <iostream>

// `int` specifies `main()` returns an integer value
// every c++ program must have a function called `main()`
int main() {
    // `std` standard library
    // `cout` character output stream
   std::cout << "Hello World!\n";

    // int main() always returns an integer, methinks automatically `0` would be returned if the below line were excluded
   return 0;

    // the compiler completely ignores white space except when concerning `if` statements
}
```

>[!note] Add'l Resources
> [Google C++ Style Guide](https://google.github.io/styleguide/cppguide.html)
