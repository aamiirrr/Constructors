//Aamir Ayaan Quraishi
//23070123002
//Aim - to learn and use the use of constructor statements using constructor.

#include <iostream>
using namespace std;

class construct{
    public:
    int a,b;
construct(){
    a = 10;
    b = 20;
}
void display(){
cout << "a ="<< a <<endl<< "b ="<<b;
}
};

int main() {
    construct constructor;
    constructor.display();    

    return 0;
}

/*
OUTPUT
a =10
b =20
*/
