#include "../../precompile.h"
using namespace std;

class foo
{
public:
    foo(int _divisor):divisor(_divisor){}
    std::function<bool(int)> get_filter()
    {
        //divisor not visible to lambda,bu visible to this
        //return [divisor] (int value){ return value %divisor ==0;};
        return [=] (int value){ return value %divisor ==0;};//= captures this pointer
    }
private:
    int divisor = 10;
};
int main(int argc, char** argv)
{
    foo f(3);
    auto func = f.get_filter();
    std::cout << func(6)<<std::endl;
}
