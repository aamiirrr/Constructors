//Aamir Ayaan Quraishi
//2307012002
//Aim - to learn the use of destructor in c++ language.

#include<iostream>
using namespace std;

int count = 0;

class Student {
    public:
    Student(){
        count++;
        cout << "number of objects created:" << count << endl;
    }
    ~Student(){
        count--;
        cout << "number of objects destroyed:" << count + 1 << endl;
    }
};
int main(){
    Student aa,bb,cc;
    {
        Student dd;
    }
    return 0;
}
