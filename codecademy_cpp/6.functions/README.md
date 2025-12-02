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
