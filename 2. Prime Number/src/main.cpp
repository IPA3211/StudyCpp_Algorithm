#include <iostream>
#include <cmath>
bool isPrimeNumber(int & a){
    int sqrtN = sqrt(a);
    for(int i = 2; i <= sqrtN; i++){
        if(a % i == 0)
            return false;
    }
    return true;
}

int main(void){
    int a;

    std::cout << "해당수가 소수인지 구합니다" << std::endl;

    std::cout << "수 : ";
    std::cin >> a;

    if(isPrimeNumber(a))
        std::cout << "소수입니다" << std::endl;
    else
        std::cout << "소수가 아닙니다" << std::endl;

    return 0;
}