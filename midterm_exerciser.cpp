#include <iostream>
#include <vector>
#include <cstdlib>
#include <time.h>
using namespace std;

void b2d() {
    srand(time(NULL));
    int size = 8;

    for(int i = 0; i < size; i++) {int random = rand() % 2; std::cout << random << " "; }

    std::cout << std::endl ;  

}

void d2b() {
    srand(time(NULL));
    int random = (rand() % 900) + 100;

    std::cout << random << std::endl;

}

void e2b() {
    srand(time(NULL));
    for(int i = 0; i < 3; i++) { int random = rand() % 7; std::cout << random << " "; }

    std::cout << std::endl;
}

void b2e() {
    srand(time(NULL));
    int size = 12;

    for(int i = 0; i < size; i++) {int random = rand() % 2; std::cout << random << " ";}

    std::cout << " \n" ;  
}

void e2d() {
    srand(time(NULL));
    for(int i = 0; i < 3; i++) { int random = rand() % 7; std::cout << random << " "; }

    std::cout << std::endl;
}

void h2b() {
    srand(time(NULL));
    for(int i = 0; i < 2; i++) {
        int random = rand() % 16;
        if(random < 10) std::cout << random;
        if(random == 10) std::cout << "A";
        if(random == 11) std::cout << "B";
        if(random == 12) std::cout << "C";
        if(random == 13) std::cout << "D";
        if(random == 14) std::cout << "E";
        if(random == 15) std::cout << "F";
    }

    std::cout << std::endl;
}

void b2h() {
    srand(time(NULL));
    int size = 16;

    for(int i = 0; i < size; i++) {int random = rand() % 2; std::cout << random << " ";}

    std::cout << " \n" ; 
}

void db2d() {
    srand(time(NULL));
    int size = 6;

    for(int i = 0; i < size; i++) {
        int random = rand() % 10;
        std::cout << random;
        if(i == 2)
            std::cout << ".";
    }

    std::cout << std::endl;
}

void de2d() {
    srand(time(NULL));
    int size = 4;

    std::cout << "0.";
    for(int i = 0; i < size; i++) {
        int random = rand() % 10;
        std::cout << random;
    }

    std::cout << std::endl;
}


void rom() {
    srand(time(NULL));
    int random1 = 0;
    int random2 = 0;

    while(random1 >= random2) {
        random1 = (rand() % 9000) + 1000;
        random2 = (rand() % 9000) + 1000;
    }

    std::cout << random1 << " - " << random2 << std::endl;
    std::cout << "Answer: " << random1 - random2 << endl;
}

void rop() {
    srand(time(NULL));
    int random1 = 0;
    int random2 = 0;

    while(random1 >= random2) {
        random1 = (rand() % 9000) + 1000;
        random2 = (rand() % 9000) + 1000;
    }

    std::cout << random2 << " - " << random1 << std::endl;
    std::cout << "Answer: " << random2 - random1 << endl;
}

void sbnd() {
    srand(time(NULL));
    int sign = rand() % 2;
    int random1 = rand() % 20;
    int random2 = rand() % 20;

    if(sign == 0) std::cout << "+ " << random1 << " + " << random2 << std::endl;
    else std::cout << "- " << random1 << " + " << random2 << std::endl;
}

void bcd() {
    srand(time(NULL));
    int random1 = (rand() % 900) + 100;
    int random2 = (rand() % 900) + 100;

    std::cout << random1 << " + " << random2 << std::endl; 
}

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
    random = rand() % 16;

    switch (random)
    {
    case 0:
        cout << "Binary To Decimal" << endl;
        b2d();
        break;
    case 1:
        cout << "Decimal To Binary" << endl;
        d2b();
        break;
    case 2:
        cout << "Eight To Binary" << endl;
        e2b();
        break;
    case 3:
        cout << "Binary To Eight" << endl;
        b2e();
        break;
    case 4:
        cout << "Eight To Decimal" << endl;
        e2d();
        break;
    case 5:
        cout << "Hexadecimal To Binary" << endl;
        h2b();
        break;
    case 6:
        cout << "Binary To Hexadecimal" << endl;
        b2h();
        break;
    case 7:
        cout << "Dot Binary To Decimal" << endl;
        db2d();
        break;
    case 8:
        cout << "Radix Computation Minus" << endl;
        rom();
        break;
    case 9:
        cout << "Radix Computation Positive" << endl;
        rop();
        break;
    case 10:
        cout << "Signed Binary Decimal" << endl;
        sbnd();
        break;
    case 11:
        cout << "Binary Coded Decimal" << endl;
        bcd();
        break;
    case 12:
        cout << "Two Variable Karnaugh Map" << endl;
        twom();
        break;
    case 13:
        cout << "Three Variable Karnaugh Map" << endl;
        threem();
        break;
    case 14:
        cout << "Four Variable Karnaugh Map" << endl;   
        fourm();
        break;
    case 15:
        cout << "Dot Eight To Decimal" << endl;
        de2d();
        break;
    
    default:
    cout << "Wololo" << endl;
        break;
    }//end of switch

    cout << "Want to continue(Press 1) / Exit(Press -1): " << endl;
    cin >> answer;
    }//end of while
    
    return 0;
}



