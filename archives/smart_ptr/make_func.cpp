
#include "../../precompile.h"
using namespace std;

int main(int argc, char ** argv)
{
    int * val = new int(10);
    auto p1 = std::make_shared<int>(*val);
    auto p2 = std::shared_ptr<int>(p1);
    auto cnt = p1.use_count();
    std::cout << "cnt="<<cnt << std::endl;
}
