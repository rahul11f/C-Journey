#include <iostream>
#include <string>

int main() {
    // ==========================================
    //           INPUT REGION
    // ==========================================
    std::string userName;
    
    std::cout << "Let's practice input! What is your name? ";
    std::getline(std::cin, userName);
    
    std::cout << "\nWelcome, " << userName << "! It's great to have you here.\n" << std::endl;
    
    return 0;
}
