#include <iostream>
#include <string>

double getInterestRate(double balance, const std::string& accountType, const std::string& accountLevel) {
    // Define the interest rate table
    if (accountType == "Personal") {
        if (accountLevel == "Standard") {
            if (balance >= 0) return 1.2;
        } else if (accountLevel == "Gold") {
            if (balance >= 1000) return 1.9;
        } else if (accountLevel == "Premium") {
            if (balance >= 5000) return 2.3;
        }
    } else if (accountType == "Business") {
        if (accountLevel == "Standard") {
            if (balance >= 1500) return 1.7;
        } else if (accountLevel == "Platinum") {
            if (balance >= 10000) return 2.5;
        }
    }
    // Return 0 if no matching interest rate is found
    return 0.0;
}

int main() {
    double balance;
    std::string accountType, accountLevel;

    // Input the account details
    std::cout << "Enter account balance: ";
    std::cin >> balance;
    std::cout << "Enter account type (Personal or Business): ";
    std::cin >> accountType;
    std::cout << "Enter account level (Standard, Gold, Premium for Personal or Standard, Platinum for Business): ";
    std::cin >> accountLevel;

    // Calculate and display the interest rate
    double interestRate = getInterestRate(balance, accountType, accountLevel);
    if (interestRate > 0) {
        std::cout << "Your interest rate is: " << interestRate << "%" << std::endl;
    } else {
        std::cout << "No matching interest rate found for the given details." << std::endl;
    }

    return 0;
}