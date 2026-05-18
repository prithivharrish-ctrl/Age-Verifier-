#include <iostream>

void scoretracker(std::string name,int score) {
    std::cout << "player : " << name << "\n" << "Score :" << score << "\n";
}

void haswon() {
    int score;
    std::cout << "Enter score :";
    if (score>100) {
        std::cout << "Scored enough";
    }
    else {
        std::cout << "Not enough";
    }
}

int main() {
    scoretracker("alice",150);
    haswon();
}
