#include "../../precompile.h"
using namespace std;

struct A{ ~A(){std::cout << "A" << std::endl;}};
struct B{ ~B(){std::cout << "B" << std::endl;}};
struct C{ ~C(){std::cout << "C" << std::endl;}};
struct D{ ~D(){std::cout << "D" << std::endl;}};

D d;

int main(int argc, char** argv)
{
    A *a = new A();
    static B b;
    C c;
    delete a;
}
