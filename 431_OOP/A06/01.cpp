//01. Write a program which generates a template class, by which we can
// perform integer type data addition and float type data addition also use of
// function template with multiple parameters

#include <iostream>
using namespace std;

template <class X>
X addition (X a, X b) {
    X sum;
    sum = a + b;
    return sum;
}

int main () {
    int n;
    n = addition (20, 25);
    cout << "Sum of two integer value is: " << n << endl;
    float f;
    f = addition (23.9, 32.8);
    cout << "Sum of two floating value is: " << f << endl;
    return 0;
}

