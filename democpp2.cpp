#include <iostream>

class Student {
public:
    // Default Constructor
    Student() {
        std::cout << "Default Constructor called!" << std::endl;
    }

    // Other member functions or variables can be added here
};

int main() {
    // Creating an object of MyClass
    Student myObject;

    // The default constructor is automatically called when the object is created

    return 0;
}
