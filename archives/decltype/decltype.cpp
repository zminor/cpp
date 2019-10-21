#include "../../precompile.h"
using namespace std;
int main()
{
    int a = 1; 
    int b = 2;
    decltype(b) c = 3;
    std::cout << &a<<" "<<&b<<" "<<&c<<std::endl;
    
}
