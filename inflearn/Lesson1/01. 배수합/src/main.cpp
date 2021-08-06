#include <iostream>

int main(void){
    int a, b, answer = 0;
    
    std::cin >> a >> b;

    for(int c = 0; c <= a; c += b){
        answer += c;
    }

    std::cout << answer << std::endl;
    return 0;
}