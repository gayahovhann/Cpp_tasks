#include <iostream> 
int main() {
    int A, B, k;
    std::cin >>A >>B;
    k = 0;
    for(int i = A; i <= B; i++) {
        if(i % 7 == 0) {
            k = k +1;
        }
    }
    std::cout <<k;
}