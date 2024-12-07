#include <iostream>

extern int aGlobalVariable; // Defined in a.cpp

int main()
{
    // In terminal use the command g++ a.cpp b.cpp -o a.out
    // ./a.cout
    // To execute the code
    std::cout << aGlobalVariable << std::endl;
    return 0;
}