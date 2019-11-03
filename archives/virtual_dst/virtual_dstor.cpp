#include "../../precompile.h"
using namespace std;

struct Base
{
    Base(){ std::cout << "Base constructor"<<std::endl;}
    ~Base(){    std::cout << "Base destructor"<<std::endl;}
};

struct Derived:public Base
{
    Derived(){ std::cout << "Derived constructor"<<std::endl;}
    ~Derived(){    std::cout << "Derived destructor"<<std::endl;}
};
struct Base1
{
    Base1(){ std::cout << "Base1 constructor"<<std::endl;}
    virtual ~Base1(){    std::cout << "Base1 destructor"<<std::endl;}
};
struct Derived1:public Base1
{
    Derived1(){ std::cout << "Derived1 constructor"<<std::endl;}
    ~Derived1(){    std::cout << "Derived1 destructor"<<std::endl;}
};

int main(int argc, char** argv)
{
    Base*  b = new Derived();
    Base1* b1 = new Derived1();
    delete b;
    delete b1;
    b = nullptr;
    b1 = nullptr;

}
