//06. Write a Program that implements the inheritance following below -
// Students
// ├── Arts
// ├── Engineering
// │   ├── Civil
// │   ├── Elec
// │   └── Mech
// └── Medical

#include <iostream>
using namespace std;

class Students
{};

class Arts : public Students
{
    public:
        Arts () {
            cout << "I am a Arts Student" << endl;
        }
};
class Medical : public Students
{
    public:
        Medical () {
            cout << "I am a Medical Student" << endl;
        }
};
class Engineering : public Students
{
    public:
        Engineering () {
            cout << "I am a Engineering Student" << endl;
        }
};

class Mech : public Engineering
{
    public:
        Mech () {
            cout << "I am a Mechanical Enginner" << endl;
        }
};
class Elec : public Engineering
{
    public:
        Elec () {
            cout << "I am a Electrical Engineer" << endl;
        }
};
class Civil : public Engineering
{
    public:
        Civil () {
            cout << "I am a Civil Engineer" << endl;
        }
};

int main () {
    Arts a;
    Elec e;
    return 0;
}