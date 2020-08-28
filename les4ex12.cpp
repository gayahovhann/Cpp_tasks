#include <iostream>
int main()
{
    unsigned int a, b, max;
    std::cin >>a >>b;
    if(a > b) {
        max = a;
    } else {
        max = b;
    }
    std::cout <<max;
}