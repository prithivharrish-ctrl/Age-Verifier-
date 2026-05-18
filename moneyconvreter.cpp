#include <iostream>

void converttoINR(double USD) {
    double INR = USD*83;
    std::cout << "Amount in INR is " << INR;
}

int main() {
    double USD;
    std::cout << "Enter USD :";
    std::cin >> USD;
    converttoINR(USD);
}