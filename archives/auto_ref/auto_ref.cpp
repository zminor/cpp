#include "../../precompile.h"
using namespace std;


int main(int argc, char** argv)
{
    int a = 0;
    int & b = a;
    auto &c = b;
    std::cout << "a= "<<a<<" b= "<<b << " c= "<<c<<std::endl;
    c = 10;
    std::cout << "a= "<<a<<" b= "<<b << " c= "<<c<<std::endl;
    //a=10 b=10 c =10
    //auto & will define c as a_ref
}
