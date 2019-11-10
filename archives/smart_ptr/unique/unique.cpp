#include "../../precompile.h"
using namespace std;


int main(int argc, char** argv)
{

    auto d = [=](int * val){ delete val; std::cout << "deleter"<<std::endl;};
    auto p = unique_ptr<int, decltype(d)>(new int(10),d);


}
