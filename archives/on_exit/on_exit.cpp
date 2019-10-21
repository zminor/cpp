#include "../../precompile.h"
using namespace std;

void fun()
{
    std::cout << "at exit"<<std::endl;
}
void fun2()
{
    std::cout << "before exit2"<<std::endl;
}
void on_exit_fun(int status, void* arg)
{
    std::cout << "before exit()\n";
    printf( "exit %d\n", status);
    std::cout << "arg = "<< ((char*)arg)<< std::endl;
}
int main (int argc , char** argv)
{
//   on_exit(fun1);
   const char* str = "fk u ";
   on_exit(on_exit_fun,(void*)str);
   atexit(fun);//stack data structure, will be called last 
   std::cout << "running"<<std::endl;
   exit(1234);
}
