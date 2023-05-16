#include <iostream>
#include <vector>
#include "generalLogic.h"

// Constructor implementation
User::User(const std::string& uname, const std::string& pwd)
    : username(uname), password(pwd), balance(0.0) {}

// Function prototype for deposit
void User::deposit(double amount);

// Function prototype for withdraw
void User::withdraw(double amount);

// Function prototype for getActivityHistory
void User::getActivityHistory() const;

// Function implementation for deposit
void User::deposit(double amount) {
    // Implement the deposit logic here
    // Add the amount to the user's balance
    balance += amount;
}

// Function implementation for withdraw
void User::withdraw(double amount) {
    // Implement the withdrawal logic here
    // Subtract the amount from the user's balance
    balance -= amount;
}

// Function implementation for getActivityHistory
void User::getActivityHistory() const {
    // Implement the logic to retrieve and display the user's activity history
}

int main() {
    // main function code here
    return 0;
}
