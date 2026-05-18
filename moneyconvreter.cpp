#include <iostream>

double convert(double USD) {
    double INR = USD*83;
    return INR;
}

int main() {
    double USD;
    std::cout << "Enter USD :";
    std::cin >> USD;
    std::cout << "Your amount in INR is " << convert(USD);
    return 0;
}
