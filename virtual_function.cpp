
#include <iostream>

using namespace std;
class A
{
    public:int age;
    public:string name;
    public : virtual void printAge()
    {
      cout<<"Age of base class "<<age;   
    }
    public : void printName()
    {
        cout<<"Name of base class "<<name;
    }
	/* This is a parameterized constructor*/
    A(int age,string name)
    {
        this->name=name;
        this->age=age;
    }
	/* This is an empty constructor*/
    A()
    {
        
    }
    
};
class B:public A
{
    public:void printAge()
    {
        cout<<"Age of derived class "<<age;
    }
    public:void printName()
    {
        cout<<"Name of derived class "<<name;
    }
    public: void livingOrNonLiving(bool isLiving)
    {
        if(isLiving)
        {
            cout<<"Dervied class is living";
        }
        else
        {
            cout<<"Dervied class is non living";
        }
    }
    B(int age,string name)
    {   
        this->age=age;
        this->name=name;
    }
};


int main()
{
    A *a=new B(10,"Rithvik");
    a->printAge();          // will call the method from the derived  class, since the method is a virtual method .
    a->printName();         // will call the method from the base class, since the method in base class is not virtual.
    //a->livingOrNonLiving(true); //The base class cannot access the derived class method if that method is not present in base class
    return 0;
}
