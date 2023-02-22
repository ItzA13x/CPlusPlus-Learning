#include <iostream>

// The const keyword specifies that a variable's value is constant
// This tells the compiler to prevent anything from modifying it
// (read-only)

int main(){
  

    const double PI = 3.14159; // It's good practice to change constant variable names to uppercase
    double radius = 10;
    double circumference = 2 * PI * radius;

    std::cout << circumference << "cm";

    const int LIGHT_SPEED = 299792458;
    const int WIDTH = 1920;
    const int HEIGHT = 1080;
    
    
    return 0;
}