
#include "../../precompile.h"
using namespace std;

class foo
{

    public:
        void func(){ std::cout << val<<std::endl;}
    private:
        int val =0;
};

int main()
{
 //   auto f = decltype(foo::func);
 //   f();
}
