//04. Write a program in C++ to handle multiple exceptions for different operational output

#include <iostream>
using namespace std;
void number (int x) {
    try {
        if (x >= 1)
            throw (x);
        else if (x <= -1) 
            throw (1.1);
        else if (x == 0)
            throw ('n');
    }
    catch (int n) {
        cout << "Number is Greater than 0\n";
    }
    catch (double n) {
        cout << "Number is less than 0\n";
    }
    catch (char n) {
        cout << "Number is 0\n";
    }
}

int main () {
    cout << "Testing multiple operation: \n";
    number (56);
    number (0);
    number (-11);
    return 0;
}
