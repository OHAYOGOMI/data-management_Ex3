#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    srand((unsigned int)time(NULL));
    
    int a = rand() % 6 + 1;
    int b = rand() % 6 + 1;
    int c = a+b;

    cout << "Rolling dice..."<< endl;
    cout << "Die 1: "<<a<< endl;
    cout << "Die 2: "<<b<< endl;
    cout << "Total value: "<<c<< endl;

    if( c > 7 ){
        cout << "You won" << endl;
    }
    
    if( c <= 7 ){
        cout << "You lost" << endl;
    }

    return 0;
}
