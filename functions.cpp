#include <iostream>

void thisFunctionIsCalledAfterMain();
void thisFunctionIsCalledAfterMainButWithParameters(int &, bool); // Notice how we are adding the parameters
int defaultValueFunction(float income, float taxRate = 0.20)
{ // We can only provide default values to the last parameter
    return (income - (income * taxRate));
}

int main()
{
    std::cout << defaultValueFunction(20) << std::endl;
    std::cout << defaultValueFunction(20, 0.5) << std::endl;

    // Function signature contains funtion's name, parameters but not the return type

    thisFunctionIsCalledAfterMain();
    int a = 200;
    thisFunctionIsCalledAfterMainButWithParameters(a, true);
}

void thisFunctionIsCalledAfterMain()
{
    std::cout << "This function is called after main. Because it is declared before main" << std::endl;
}

void thisFunctionIsCalledAfterMainButWithParameters(int &marks, bool late)
{
    if (late && marks > 40)
    {
        marks = 40;
    }
    std::cout << "Marks " << marks << std::endl;
}