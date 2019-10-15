
#include "../../precompile.h"
using namespace std;

struct foo{

    static void func();
};
/*
void foo:: func()
{
    std::cout << "foo::func running"<<std::endl;
}
*/
int main(int argc, char** argv)
{
    void (*p)() = foo::func;
    p();

}
