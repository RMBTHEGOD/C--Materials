#include <iostream>

using namespace std;
class B;
class C;
class A
{ 
  int age;
  friend void show(A& a, B& b);     //global friend function
  public: A(int age=10)
  {
      this->age=age;
  }
  friend class C;                   //Friend class
};


class C
{
  int age;
  
   public: C(int age=30)
  {
      this->age=age;
  }
  public: void ageOfA(A& a)
  {
      cout<<"Age of A is"<<a.age;
  }
  public: void ageOfB(B& b);
};

class B
{
    int age;
    friend void show(A& a, B& b);
     public: B(int age=20)
    {
      this->age=age;
    }
    friend void C::ageOfB(B& b);    //Friend function
};



void C::ageOfB(B& b)
{
    cout<<"Age of B is "<<b.age;
}

void show(A& a,B& b)
{
    cout <<"A's age is "<<a.age;
    cout<<"B's age is "<<b.age;
}
int main()
{
 A a;
 B b;
 C c;
 show(a,b);
 c.ageOfA(a);
 c.ageOfB(b);
 
}