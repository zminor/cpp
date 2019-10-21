#include "../../precompile.h"
using namespace std;

struct foo
{
    foo() = default;
    ~foo() = default;
};

auto del_func = [](foo* obj){delete obj;std::cout << "delete func"<<std::endl; };

/*
 * struct fun
{
   void  operator()(foo* obj){ delete obj; std::cout <<"fun funning"<< std::endl;}
};
*/
    void p_fun (foo* obj)
    {
        delete obj;
    }
int main(int argc, char ** argv)
{
    auto ptr = new foo();
    auto p = unique_ptr<foo,decltype(del_func)>(new foo(),del_func);
    auto p1 = unique_ptr<foo>(new foo());
    auto p_func = unique_ptr<foo, decltype(p_fun)*>(new foo(),p_fun);
    std::cout << "raw size = "<<sizeof(ptr)<<std::endl;
    std::cout << "with lambda size = "<<sizeof(p)<<std::endl;
    std::cout << "without lambda size = "<<sizeof(p1)<<std::endl;
    std::cout << "function ptr size = "<<sizeof(p_func)<<std::endl;
        
delete ptr;
   
}
