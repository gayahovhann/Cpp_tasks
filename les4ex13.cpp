#include <iostream>
int main() {
    int a, b, c, min;
    std::cin >>a >>b >>c;
    if( a > b) {
        min = b;
    } else {
        min = a;
    }
    if(c < min) {
        min = c;
    }
    std::cout <<min;
}