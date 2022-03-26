#include <iostream>
#include <sstream>
#include <string>

int main()
{
    char a[] = "if/else/int/float";

    std::istringstream is( a );

    size_t count = 0;

    std::string line;

    while ( std::getline( is, line, '/' ) ) ++count;

    std::cout << " Total Tokens : " << count <<std::endl;
}
