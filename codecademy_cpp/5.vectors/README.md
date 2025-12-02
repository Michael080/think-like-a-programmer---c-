# vectors
>[!abstract] A vector is a sequence of elements that you can access by index. *(similar to an array methinks...)*

## basic/s syntax
### include library
```c++
#include <vector>
```

### datatype creation
```c++
// SYNTAX
std::vector<type> name; 
// example
std::vector<int> myVector;
```
>[!tip] the datatype of a vector can not be changed once declared

#### *Presizing*
```c++
// create vector w/ size: 2
std::vector<double> myVector(2); // => {0.0, 0.0}, because default value for a double is `0.0`
```

### functions
A function which returns a `vector` I found tricky
```c++
// declare outside of `main`
// *NOTE:* type of `<int>` could be anything `<double>`, `<float>`, etc,.
std::vector<int> thingamajig(int num) {
    // code
}

int main() {
    // ...
```

# Arrays
In `c++` arrays are *lower-level constructs* than vectors so require more work from the user.
- *require static size*
- *cant' be resized*

## Create Array
**initialize**
```c++
int favoriteNums[4]; // create array of size: 4
```

**initialize w/ values**
```c++
int favoriteNums[] = {7, 9, 15, 16};
```
**Note:** *size doesn't need to be spec'd as it's inferred at assignment*

**reassignment**
```c++
char vowels[] = {'a', 'e', 'i', 'o', 'u'};
vowels[0] = 'r';
```
