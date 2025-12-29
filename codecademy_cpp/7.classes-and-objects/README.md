# classses and objects
## simple class creation
```c++
class City {

}
```

### class members
Components of a class are called class members. Just like you can get a string’s length using `.length()`, you can access class members using the dot operator (`object.class_member`).

There are two types of class members:
- Attributes, also known as member data, consist of information about an instance of the class. 
- Methods, also known as member functions, are functions that you can use with an instance of the class. We use a `.` before method names to distinguish them from regular functions.
```c++
// @ ./city.hpp

class City {
    // attribute
    int population;

    // method
    void add_resident() {
        population++;
    }

    public:
        int get_population();
};
```

Unless we have a mostly empty class, it’s common to split function declarations from definitions. We declare methods inside the class (in a header), then define the methods outside the class (in a .cpp file of the same name).

### define method outside of class
How can we define methods outside a class? We can do this using `ClassName::`
```c++
// @ ./city.cpp

// include "city.hpp"
int City::get_population() {
    return population;
};
```

In the preceding code sample, we declare `.get_population()` in the header file, `city.hpp`. Unlike with regular functions, we need to include the header file in the `.cpp` file where we define the methods, which we have done at the top of `city.cpp`. Then, we provide the definition for `.get_population()`, which returns the value of the population attribute.

>[!note] We must declare a method inside the class if we want to define it outside.
>[!note] I find this a bit perplexing. I should prob. read up more on how header files actually work!

### Create Objects
```c++
// create an instance of City
City new_york;
// set population
new_york.population = 1111111;
```

## [Access Control: Public & Private](https://www.codecademy.com/courses/learn-c-plus-plus/lessons/cpp-classes-and-objects/exercises/cpp-class-access-control)
>[!quote]
> *By default, everything in a class is `private`, meaning class members are limited to the scope of the class. This makes it easier to keep data from mistakenly being altered, and abstracts away all the nitty gritty details.*

### Allow Access via `public`
Because the default behavior when trying to access class members is to throw an error in order to allow access to them requires use of the modifier `public`


```cpp
class City {
  int population;

// everything below `public` is... public
public:
    void add_resident() {
        population++;
    }


// There is also a `private` modifier which can set things below public to be private.
private:
    bool is_capital;
};
```

#### Setters/getters
Usage of setters such as `.add_artist()` under `public` enables setting of values that can be validated etc,. which theoretically assists in bug prevention that can't be implimented when a value is completely exposed publically.
