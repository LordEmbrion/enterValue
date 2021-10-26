#include <iostream>

int main () {
    int favoriteNumber;
    std::cout << "Please enter a number between 1 - 100: ";
    std::cin >> favoriteNumber;
    if (favoriteNumber > 100 || favoriteNumber < 0){
        std::cout << "You were always the teacher's least favorite...\n";
    }
    else {
        std::cout << "Nice job! You can follow instructions!\n";
    }
    std::cin.ignore();
    std::cin.get();
    return 0;
}
