#include <iostream>

int main() {
    double celsius, fahrenheit;

    
    std::cout << "Voer de temperatuur in graden Celsius in: ";
    std::cin >> celsius;

   
    fahrenheit = (celsius * 9.0 / 5.0) + 32;

   
    std::cout << "De temperatuur in Fahrenheit is: " << fahrenheit << "°F" << std::endl;

    return 0;
}
