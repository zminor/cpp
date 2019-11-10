#include "../../precompile.h"
using namespace std;

class my_string{
public:
    my_string(){ 
        std::cout << "default " <<std::endl;
        data = new char[1];
        data[0] = '\0';
        std::cout << data<<std::endl;
    }
    my_string(const my_string & str)
    {
        std::cout << "copy constructor"<<std::endl;
        if(!str.data)
        {
            data = new char[1];
            data[0] = '\0';
        }
        else 
        {
            data = new char[strlen(str.data)+1];
            strcpy(data,str.data);
            len = str.len;
        }
        std::cout << data<<std::endl;
    }
    my_string(const char* str_data)
    {
        std::cout << "char * "<<std::endl;
        if(!str_data)
        {
            data = new char[1];
            data[0] = '\0';
        }
        len = strlen(str_data);
        data = new char[ len+1];
        strcpy(data, str_data);
        std::cout << data<<std::endl;
    }
    ~my_string()
    {
        std::cout << "dstor" <<std::endl;
        if(data)
        {
            delete[] data;
            len = 0;
        }
    }
    my_string& operator =(const my_string& str)
    {
        std::cout << "operator =" << std::endl;
        if(&str != this)
        {
            char * tmp = new char[strlen(str.data)+1];
            strcpy(tmp, str.data);
            len = str.len;
        }
        std::cout << data<<std::endl;
        return *this;
    }
private:
    char * data = nullptr;
    size_t len = 0;
};

int main(int argc, char** argv)
{
    my_string str;
    my_string str1 = "fuck";
    my_string str2(str1);
    my_string str3 = str1;
}
