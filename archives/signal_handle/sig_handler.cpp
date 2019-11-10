#include "../../precompile.h"
#include <sys/types.h>
#include <sys/wait.h>
#define MAXBUF 128
using namespace std;

void handler1(int sig)
{
    int olderrno = errno;
    while(waitpid(-1,NULL,0) < 0)
        std::cout <<"waitpid error\n";
    std::cout << "Handler reaped child\n";
    sleep(1);
    errno = olderrno;
}
void handler2(int sig)
{
    int olderrno = errno;
    while(waitpid(-1,NULL,0) > 0)
        std::cout <<"Handler reaped child\n";
    if(errno != ECHILD) 
        std::cout <<"waitpid error\n";
    sleep(1);
    errno = olderrno;
}
int main(int argc, char** argv)
{
    int i, n;
    char buf[MAXBUF];
    if( signal(SIGCHLD, handler2) == SIG_ERR)
        std::cout<<"signal err"<<std::endl;

    for( int i=0; i<3; ++i)
    {
        if(fork() ==0)
        {
            printf("Hello from child %d\n", (int)getpid()) ;
            exit(0);   
        }
    }
    if( (n = read(STDIN_FILENO, buf, sizeof(buf))) < 0)
        std::cout <<"read"<<std::endl;
    printf("parent processing input: %s\n", buf);
    while(1)
        ;
    exit(0);
}
