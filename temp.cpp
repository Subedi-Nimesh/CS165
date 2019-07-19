#include <iostream>
using namespace std;

class Base
{
public:
  void f()
  {
    cout << "Base class method.\n";
  }
};

class Derived : public Base
{
public:
  void f()
  {
    cout << "Derived class method.\n";
  }
};

void f2(Base & b)
{
  b.f();
}

int main()
{
  Derived d;
  f2(d);

  return 0;
}