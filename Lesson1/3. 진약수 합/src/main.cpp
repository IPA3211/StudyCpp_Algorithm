#include <iostream>

int main(void){
    int a, answer = 0;
    
    std::cin >> a;

    std::cout << "1";
    answer += 1;
    for(int i = 2   ; i < a; i++){
        if(a % i == 0){
            std::cout << " + " << i;
            answer += i;
        }

    }

    std::cout << " = " << answer << std::endl;
    return 0;
}