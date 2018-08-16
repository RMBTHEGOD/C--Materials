#include <iostream>

using namespace std;
class B;
class C;
class A
{
  int age;
  friend void accessAge(A& a ,B& b);  //global friend function
  public: A(int age=0)
  {
      this->age=age;
  }
  public: void assignAge(int age)
  {
      this->age=age;
  }
  friend class C;               //Class C can access the private attributes of A.
  public:void accessBage(B& b);  // can access the attributes of other class using the friend function
};

class C
{
  string name;
  public:C(string name="Sam")
  {
      this->name=name;
  }
  public: void ageOfA(A& a)
  {
      cout<<"Age of a is "<<a.age;
  }
};

class B
{
    int age;
    public:B(int age=10)
    {
        this->age=age;
    }
    friend void accessAge(A& a, B& b); //global friend function.
    friend void A::accessBage(B& b);   //friend function 
};

void accessAge(A& a, B& b)
{
    cout<<"Age is "<<a.age+b.age;
}
void A::accessBage(B& b)
{
    cout<<"B's age is "<<b.age;
}

int main()
{
    cout<<"Hello World";
    A a;
    B b;
    C c;
    a.assignAge(200);
    accessAge(a,b);
    a.accessBage(b);
    c.ageOfA(a);
    return 0;
}
