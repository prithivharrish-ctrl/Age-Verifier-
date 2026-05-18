#include <iostream>

int main() {
    int age;
    std::cout << "Enter your age: ";
    std::cin >> age;
    if (age>=21) {
        std::cout<<"Access granted" << "\n";
    }
    else {
        std::cout <<"Access denied"<<'\n';
        while (age<21) {
            std::cout << "Enter your age: ";
            std::cin >> age;
            std::cout<<"Access denied" << "\n";
        }
    }
    std::cout << "You are " << age << " years old.";
    return 0;
}