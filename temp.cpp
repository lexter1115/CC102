#include <iostream>

int main() {
    double temperature;

   
    std::cout << "Enter the temperature";
    std::cin >> temperature;

   
    if (temperature < 32.0) {
        std::cout << "It's very cold! You should bring a heavy jacket." << std::endl;
    } else if (temperature <= 50.0) {
        std::cout << "It's a bit chilly. You should bring a light jacket." << std::endl;
    } else {
        std::cout << "The weather is warm. No jacket needed." << std::endl;
    }

    return 0;
}