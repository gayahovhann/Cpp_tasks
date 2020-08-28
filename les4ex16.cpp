#include <iostream> 
    int main() {
        char a, b;
        std::cin >>a >>b;
        if(a > b)
        {
            std::cout<<"YES";
            
        } else {
                if(a < b)
            {
                std::cout<<"NO";
                
            } else {
                std::cout<<"EQUAL";
                
            }
        }
}