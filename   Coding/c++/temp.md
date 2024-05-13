#### Encapsulation
```cpp
#include <iostream>
#include <string>

class Car {
private:
    std::string brand;
    int year;

public:
    // Constructor to initialize brand and year
    Car(const std::string& b, int y) : brand(b), year(y) {}

    // Public member functions to access and modify private members
    void setBrand(const std::string& b) {
        brand = b;
    }

    std::string getBrand() const {
        return brand;
    }

    void setYear(int y) {
        year = y;
    }

    int getYear() const {
        return year;
    }

    // Function to display car information
    void display() const {
        std::cout << "Brand: " << brand << ", Year: " << year << std::endl;
    }
};

int main() {
    // Creating an instance of the Car class
    Car myCar("Toyota", 2022);

    // Accessing and modifying private members using public member functions
    std::cout << "Original Brand: " << myCar.getBrand() << ", Original Year: " << myCar.getYear() << std::endl;
    myCar.setBrand("Honda");
    myCar.setYear(2023);
    std::cout << "New Brand: " << myCar.getBrand() << ", New Year: " << myCar.getYear() << std::endl;

    // Displaying car information
    myCar.display();

    return 0;
}

```
- The `Car` class encapsulates the data (brand and year) by making them private.
- It provides public member functions (`setBrand`, `getBrand`, `setYear`, `getYear`) to allow controlled access to these private members.
- The `display` function demonstrates accessing private members indirectly through public member functions.
- This encapsulation ensures that the internal representation of a `Car` object is hidden from outside access and manipulation, promoting data integrity and better maintenance of the codebase





```dataview
n
```




```c
// C program demonstrating conversion of
// char to int using typecasting
#include <stdio.h>
 
// Driver code
int main()
{
    short  k ;
    k = 10;
    printf("%d", sizeof(k));
    return 0;
}
```