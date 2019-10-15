#include "../../precompile.h"
using namespace std;
using namespace std::chrono;

int main(int argc, char** argv)
{
    auto cur_t = std::chrono::high_resolution_clock::now();
    ifstream file("test.txt");
    file.unsetf(ios::skipws);
    string data((istream_iterator<char> (file)),
                    istream_iterator<char>());
    auto after_t = std::chrono::high_resolution_clock::now();
    duration<double,std::milli> dur = after_t - cur_t;
    std::cout << data<<std::endl;
    std::cout << "size:"<<data.size()<<std::endl;
    std::cout << "time taken: "<<dur.count()*1000000<<"s"<<std::endl;
}
