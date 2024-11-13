#include <iostream>
#include <string>

std::string getMovieRating(int age, bool withParent) {
    if (age < 13) {
        return withParent ? "G, PG" : "G";
    } else if (age < 16) {
        return withParent ? "G, PG, R" : "G, PG";
    } else {
        return "G, PG, R";
    }
}

bool canAfford(double money, bool isMatinee) {
    double ticketPrice = isMatinee ? 7.50 : 10.50;
    return money >= ticketPrice;
}

int main() {
    int age;
    bool withParent;
    double money;
    std::string showTime;

    
    std::cout << "Enter your age: ";
    std::cin >> age;

    std::cout << "Are you with a parent? (1 for yes, 0 for no): ";
    std::cin >> withParent;

    std::cout << "Enter the amount of money you have: ";
    std::cin >> money;

    std::cout << "Is it a matinee or evening show? (Enter 'matinee' or 'evening'): ";
    std::cin >> showTime;
    bool isMatinee = (showTime == "matinee");

    
    std::string allowedRatings = getMovieRating(age, withParent);
    bool affordable = canAfford(money, isMatinee);

    
    std::cout << "You can attend movies rated: " << allowedRatings << std::endl;
    if (affordable) {
        std::cout << "You can afford the ticket." << std::endl;
    } else {
        std::cout << "You do not have enough money for the ticket." << std::endl;
    }

    return 0;
}