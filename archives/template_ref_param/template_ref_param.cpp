#include "../../precompile.h"
using namespace std;

template <typename T>
void func(const T& param)
{
    std::cout << "address: "<< &param <<std::endl;
}
struct foo{
};
int main (int argc, char** argv)
{
    foo obj;
    std::cout << "address = "<<&obj<<std::endl;
    func(obj);
}
