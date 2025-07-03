#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    srand((unsigned int)time(NULL));
    
    int a = rand() % 6 + 1;
    int b = rand() % 6 + 1;

    cout << "Rolling dice..."<< endl;
    cout << "Die 1: "<<a<< endl;
    cout << "Die 2: "<<b<< endl;
    cout << "Total value: "<<a+b<< endl;

    return 0;
}
