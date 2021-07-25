// Define a class string. Use overload == operator to compare two srings

#include <iostream>
#include <string.h>
using namespace std;

class String
{
private:
  char data[100];

public:
  void read()
  {
    cin >> data;
  }
  void display()
  {
    cout << data;
  }
  bool operator==(String const &obj)
  {
    return (strcmp(data, obj.data) == 0);
  }
};

int main()
{
  String p, q;
  p.read();
  q.read();

  cout << "p == q : " << (p == q) << endl;
}
