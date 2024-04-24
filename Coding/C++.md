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
