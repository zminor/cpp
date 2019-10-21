#include "../../precompile.h"
using namespace std;

int main()
{
    int val = 0;
    auto fut = std::async([]()mutable{ return ++val; });
    auto fut2 = std::async([=]()mutable{ return ++val; });
    int ret = fut.get();
    int ret2 = fut2.get();
    std::cout << "return value = "<<ret <<std::endl;
    std::cout << "return value = "<<ret2 <<std::endl;
}
