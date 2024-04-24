## Contents 


#### Basics
```cpp

#include <iostream>  
using namespace std;  
  
int main() {  
  cout << "Hello World!";  
  return 0;  
}
```
- `using namespace std` means that we can use names for objects and variables from the standard library.
	- if not `std::cout`

###### Insert newline
```cpp
cout << "Hello World!" << endl;
```
The `endl` line brke

##### Data Types
c*+`string`
eg 
```cpp
string myText = "Text";
```


|Data Type|Size|Description|
|---|---|---|
|`boolean`|1 byte|Stores true or false values|
|`char`|1 byte|Stores a single character/letter/number, or ASCII values|
|`int`|2 or 4 bytes|Stores whole numbers, without decimals|
|`float`|4 bytes|Stores fractional numbers, containing one or more decimals. Sufficient for storing 6-7 decimal digits|
|`double`|8 bytes|Stores fractional numbers, containing one or more decimals. Sufficient for storing 15 decimal digits|
==bool has only 1 bit in size==
=======
# CPP
## Contents

#### Constants
```c++
struct pins {
    const int pin1;
    const int pin2;
    const int pin3;
    const int pin4;
    const int pin5;
    const int pin6;
    const int pin7;
    
    // Constructor to initialize the pins
    pins(int p1, int p2, int p3, int p4, int p5, int p6, int p7) 
        : pin1(p1), pin2(p2), pin3(p3), pin4(p4), pin5(p5), pin6(p6), pin7(p7) {}
};

```
#why?
```cpp
pins(int p1, int p2, int p3, int p4, int p5, int p6, int p7) 
        : pin1(p1), pin2(p2), pin3(p3), pin4(p4), pin5(p5), pin6(p6), pin7(p7) {}
```
1. The members of the struct `pins` are declared as constants (`const`), but they are not assigned any values. ==Constants in C++ must be initialized when they are declared==.
    
2. The member variables of the struct `pins` are declared without specifying their types.
> [!NOTE] Explanation
> - Each member variable of the `pins` struct is declared as `const int`, specifying both the type and that the variables are constant.
> - A constructor is added to initialize the pins when a `pins` object is created. The constructor takes seven integer arguments corresponding to the pin numbers and initializes the `pin1` through `pin7` members accordingly.


