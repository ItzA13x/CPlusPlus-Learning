#include <iostream>

int main(){

    int x; // Declaration
    x = 5; // Assignment

    std::cout << x << '\n';

    int y = 6; // You can declare and assign a variable in one line if you know what the value will be
    std::cout << y << '\n';
    
    int sum = x + y;
    std::cout << sum << '\n';

//------------------------------------------------------------------------------------------------------------------//

    // int means integer (whole number)
    int age = 14;
    int year = 2023;
    int days = 7.5;

    // When we try to output days the '.5' gets cut off
    std::cout << days << '\n';


    // double means number including decimal (or float) 
    double price = 19.19;
    double temperature = 35.1;
    double balance = 453.67;

    std::cout << price << '\n';
    
    // char means single character
    char grade = 'A';
    char initial = 'B';
    char currency = '$';

    std::cout << initial << '\n';


    // bool means boolean (true or false)

    bool student = true;
    bool power = false;
    bool stock = true;

    std::cout << power << '\n';


    // string (objects that represents a sequence of text)

    std::string name = "Bob";
    std::string day = "Friday";
    std::string food = "pizza";
    std::string address = "123 Fake Street";

    std::cout << name << '\n';

    std::cout << "Hello " << name << '\n';
    std::cout << "You are " << age << " years old";


    return 0;
}

