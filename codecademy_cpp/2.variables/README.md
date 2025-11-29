# Basic Data Types | *Variables*
**Example:**
```c++
int age = 28;

double price = 8.99;

char grade = 'A';

std::string message = "Game Over";

bool late_to_work = true;
```

## Datatype Modifiers
| *"...datatype modifiers are used w/ built-in data types to modify the length of data that a particular data type can hold."*

**included:**
- `signed`
- `unsigned`
- `short`
- `long`

### Const
Can't be changed by program during execution.

## Type Conversion | *Type Cast*
**Convert a `double` to an `int`:
```c++
double weight1;
int weight2;

weight1 = 154.49;
weight2 = (<new type>) <value/var>; // SYNTAX
weight2 = (int) weight1;

// `double` -> `int` simply removes the decimal w/out rounding
// weight2 is now 154
```
