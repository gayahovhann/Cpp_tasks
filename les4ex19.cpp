#include <iostream>
int main(){
    int A, B, C, D, a, b, c;
    std::cin >>A >>B >>C >>D;
    if(A > C) {
        a = A *D;
        b = B + C;
        c = a - b;
    } else {
        if(C > A) {
            c = (B + D) * A;
        } else {
            c = A + B + C + D;
        }
    }
    std::cout <<c;
}