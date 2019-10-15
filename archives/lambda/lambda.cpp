
#include "../../precompile.h"
using namespace std;

int main(int argc, char** argv)
{
   int i=0;
   //auto f = [=]()decltype(i){return ++i; } ;//read only by default
   auto f1 = [=](int i)decltype(i){return ++i; } ;
   auto f2 = [=]()mutable decltype(i){ return ++i;};
   auto f3 = [&](){return ++i;};
   std::cout << "f2 result = "<<f2()<<std::endl;
   std::cout << "f3 result = "<<f3()<<std::endl;
}

