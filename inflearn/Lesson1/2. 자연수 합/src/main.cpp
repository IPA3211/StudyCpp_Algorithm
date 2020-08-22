#include <iostream>

int main(void){
    int a, b, answer = 0;
    
    std::cin >> a >> b;

    std::cout << a;
    answer += a++;

    for(; a <= b; a++){
        std::cout << " + " << a;
        answer += a;
    }

    std::cout << " = " << answer << std::endl;
    return 0;
}