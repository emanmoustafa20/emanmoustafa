#include "mathematics.hpp" // for mathematics::heron
#include <iostream>        // for std::cout
#include <algorithm>       // for std::atof
#include <string>
// We need main function here!
int main(int argc, char **argv)
{
    mathematics::Triangle t{0, 0, 0};
    if (argc == 1)
    {
        std::cout << "Please enter the dimensions of triangle" << std::endl;
        std::cin >> t.a >> t.b >> t.c;
        std::cout << "area using Heron Formula=" << mathematics::heron(t) << std::endl;
    }
    else if (argc == 4)
    {
        t.a = std::atof(argv[1]);
        t.b = std::atof(argv[2]);
        t.c = std::atof(argv[3]);
        std::cout << "area using Heron Formula=" << mathematics::heron(t) << std::endl;
    }

    else
    {
        std::cout << "Incorrect usage" << std::endl;
        return 1;
    }
    return 0;
}