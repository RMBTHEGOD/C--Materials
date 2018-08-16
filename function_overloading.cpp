#include <iostream>

using namespace std;
class Addition
{
  public: void add(int number1,int number2);
  public: void add(double number1,int number2);
  
  
};
void Addition::add(int number1,int number2)
{
    cout<<"The int addition is "<<(number1+number2);
}
void Addition::add(double number1,int number2)
{
    cout<<"The float addition is "<<(number1+number2);
}
int main()
{
    cout<<"Hello World";
    Addition addition;
    addition.add(1,2);
    addition.add(1.11,3);
    return 0;
}
