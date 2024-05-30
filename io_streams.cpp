#include <iostream>

int main()
{
    int some_number;
    std::cout << "Enter a number" << std::endl;
    std::cin >> some_number;
    std::cout << "number = " << some_number << std::endl;
    std::cerr << "Some error message" << std::endl;
    return 0;
}