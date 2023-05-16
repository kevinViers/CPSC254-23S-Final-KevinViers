#ifndef GENERAL_LOGIC_H
#define GENERAL_LOGIC_H

#include <iostream>
#include <vector>

struct User {
    std::string username;
    std::string password;
    std::vector<std::string> activityHistory;
    double balance;

    // Constructor
    User(const std::string& uname, const std::string& pwd);

    // Function to deposit an amount
    void deposit(double amount);

    // Function to withdraw an amount
    void withdraw(double amount);

    // Function to get user's activity history
    void getActivityHistory() const;
};

#endif  // GENERAL_LOGIC_H
