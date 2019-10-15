
#include "../../precompile.h"
using namespace std;

int main(int argc, char** argv)
{
    std::string s = "fk u";
    std::cout <<"&s = "<< &s<<std::endl;
    std::string s2 = std::move(s);
    std::cout << "&s = "<<&s<<std::endl;
    std::cout << "&s2 = "<<&s2<<std::endl;
}
