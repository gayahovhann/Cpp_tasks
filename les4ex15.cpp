#include <iostream>
int main() {
    int a, b, c, mid;
    std::cin>>a >>b >>c;
    if(a > b && b > c) {
        mid  = b;
    } else  {
        if(a < b && b < c) {
        mid  = b;
    }
    }

    if(a < b && a > c) {
        mid  = a;
    } else  {
        if(a < c && b < a) {
        mid  = a;
    }
    }

    if(a > c && c > b) {
        mid  = c;
    } else  {
        if(c < b && a < c) {
        mid  = c;
    }
    }
    std::cout <<mid;

}