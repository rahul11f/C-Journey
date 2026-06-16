#include <iostream>
#include <string>

int main() {
    // ==========================================
    //           OUTPUT REGION
    // ==========================================
    std::cout << "Hello, C++ World!" << std::endl;
    std::cout << "Day 1 of my C++ Journey begins now.\n" << std::endl;

    // ==========================================
    //           INPUT REGION
    // ==========================================
    std::string userName;
    
    std::cout << "Let's practice input! What is your name? ";
    std::getline(std::cin, userName);
    
    std::cout << "\nWelcome, " << userName << "! It's great to have you here.\n" << std::endl;

    // ==========================================
    //        PRACTICE CODE REGION
    // ==========================================
    // Try writing your own C++ code below!
    // For example, try asking for a number and printing it.
    
    // int myNumber;
    // std::cout << "Enter a number: ";
    // std::cin >> myNumber;
    // std::cout << "You entered: " << myNumber << std::endl;

    return 0;
}
