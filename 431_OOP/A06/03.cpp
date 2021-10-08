//03. Write a program for division operation to handle an exception if the divisor is 0

#include <iostream>
using namespace std;

void divide (int X, int Y) {
    if (Y != 0)
        cout << "Result of division is: " << X / Y << endl;
    else 
        throw (0);
}

int main () {
    try {
        int a, b;
        cout << "Enter two integer number: ";
        cin >> a >> b;
        divide (a, b);
    }
    catch (int i) {
        cout << "Caught the exception";
    }
    return 0;
}