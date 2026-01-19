// Write a Program to Create odd number between 1 to 50

#include <iostream>
using namespace std;

int main() {
    cout << "Odd numbers between 1 to 50: ";

    for(int i = 1; i <= 50; i++) {
        if(i % 2 != 0) {  
            cout << i ;
        }
    }
    return 0;
}
