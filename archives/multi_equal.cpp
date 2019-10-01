#include "../precompile.h"

/*
 * a = b = value; -> b = value; a = b;
 */
int main(int argc, char** argv)
{
	int a = 0;
	int b = a = 1;
	std::cout << "a="<< a << " b="<< b <<std::endl;
}
