#include "../../precompile.h"
using namespace std;


int main(int argc, char** argv, char** env)
{
    for(int i=0; i<argc; ++i)
        std::cout <<"argv["<<i<<"]: "<< argv[i]<<std::endl;
    for(int i=0; i< 28;++i)
        std::cout << "env["<<i<<"]: "<<env[i]<<std::endl;
}
