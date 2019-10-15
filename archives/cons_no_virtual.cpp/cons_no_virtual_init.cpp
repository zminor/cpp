#include "../../precompile.h"
using namespace std;


class base 
{
public:
    base();
    virtual void log() const = 0;
private:
    void init()
    {
        log();
    }
};
base::base()
{
    init();
}
class derive1:public base
{
    public:
        using base::base;
        virtual void log() const
        {
            std::cout << "derive1"<<std::endl;
        }
};

class derive2:public base
{
    public:
        virtual void log() const
        {
            std::cout << "derive2"<<std::endl;
        }
};
int main(int argc, char** argv)
{
    derive2 d;



}
