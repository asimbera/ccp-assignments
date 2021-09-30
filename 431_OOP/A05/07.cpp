// 7. Write a Program to implements the concept of virtual base class

/*
    Suppose, a class 'A' has a public data member 20. class 'B' and 'C' will inherit 20 from class 'A'. but 'D' will inherit 20 from both 'B' and 'C' which leads to ambiguity. To resolve this, we need to make 'A' as virtual base class
*/

#include <iostream>
using namespace std;

class A {
    public:
        A () {
            cout << "I have a data member 20" << endl;
        }
};

class B : virtual A {};

class C : virtual A {};

class D : public B, public C {};

int main () {
    D dl;
}
