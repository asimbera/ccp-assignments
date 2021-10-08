//02. Use of class template with multiple parameters

#include <iostream>
using namespace std;

template <class X, class Y>
class client {
    X a;
    Y b;
    public:
        client (X n, Y m){
            a = n;
            b = m;
        }
        client () {}
        void show () {
            cout << a << " and " << b << endl;
        }
};

int main () {
    cout << "Initialising the class template as client 1 with float and int data types: client1: " << endl;
    client <float,int> client1 (23.2, 72);
    client1.show ();
    cout << "Initialising the class template as client 2 with int and string data types: client2:" << endl;
    client <int,string> client2 (12, "Suman");
    client2.show();
    return 0;
}