#include <iostream>

using namespace std;
class Man
{
  int weight;
  public:Man(int weight=0)
  {
      this->weight=weight;
  }
  public: void setWeight(int weight)
  {
      this->weight=weight;
  }
  public: void getWeight()
  {
      cout<<"The man's weight is "<<weight;
      
  }
  Man operator+(const Man& m)                           //operator overloading.
  {
      Man man;
      man.weight=this->weight+m.weight;
      return man;
  }
};

int main()
{
    cout<<"Hello World";
    Man m1,m2,m3;
    m1.setWeight(10);
    m2.setWeight(20);
    m3=m1+m2;
    m3.getWeight();

    return 0;
}
