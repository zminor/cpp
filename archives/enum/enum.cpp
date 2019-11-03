#include "../../precompile.h"
using namespace std;



int main(int argc, char** argv)
{

    enum string{
        a,
        b,
        c = 10,
        d,
        e
    }fk;

std::cout <<fk<<std::endl;
std::cout << string::a<<std::endl;
std::cout << string ::b<<std::endl;

}
