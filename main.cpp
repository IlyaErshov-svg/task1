#include <iostream>

/// Функция вычисляющая факториал
/// \param val число
/// \return значение факториала
std::size_t factorial(std::size_t val)
{
    size_t result = 1;
    for(size_t i = 2; i <= val; ++i)
    {
        result *= i;
    }
    return result;
}

int main() {
    int input = 0;
    //std::size_t input;
    std::cout << "factorial " << std::flush;
    std::cin >> input;
    if(input < 0)
        std::cerr << "Incorrect value";
    else{
        std::cout << factorial(input) <<std::endl;
    }
    return 0;
}
