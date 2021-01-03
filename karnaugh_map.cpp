#include <iostream>
#include <vector>
#include <cstdlib>
#include <time.h>
using namespace std;

void twom() {
    srand(time(NULL));
    for(int i = 0; i < 4; i++) {
        int random = rand() % 2;
        std::cout << random << "    ";
        if(i == 1)
            std::cout << std::endl;
    }

    std::cout << std::endl;
}

void threem() {
    srand(time(NULL));
    for(int i = 0; i < 8; i++) {
        int random = rand() % 2;
        std::cout << random << "    ";
        if(i == 3)
            std::cout << std::endl;
    }

    std::cout << std::endl;
}

void fourm() {
    srand(time(NULL));
    for(int i = 0; i < 16; i++) {
        int random = rand() % 2;
        std::cout << random << "    ";
        if(i == 3)
            std::cout << std::endl;
        if(i == 7)
            std::cout << std::endl;
        if(i == 11)
            std::cout << std::endl;
    }

    std::cout << std::endl;
}

int main() {
    srand(time(NULL));
    int answer = 0;
    int random = 0;

    cout << "Begin for Press 1: " << endl;
    cin >> answer;

    while(answer != -1) {
    random = rand() % 3;

    switch (random)
    {

    case 0:
        cout << "Two Variable Karnaugh Map" << endl;
        twom();
        break;
    case 1:
        cout << "Three Variable Karnaugh Map" << endl;
        threem();
        break;
    case 2:
        cout << "Four Variable Karnaugh Map" << endl;   
        fourm();
        break;
    
    default:
    cout << "Wololo" << endl;
        break;
    }

    cout << "Want to continue(Press 1) / Exit(Press -1): " << endl;
    cin >> answer;
    }
}