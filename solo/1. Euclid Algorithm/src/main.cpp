#include <iostream>

int gcd(int & a, int & b){

// 일반 GCD 를 사용하는 것은 a와 b 의 차이가 클수록
// 연산이 많이 사용되므로 나머지를 이용하는 것이 좋다

    int temp = 0;

    while(a){
        if(a >= b){
            a -= b;
        }
        else{
            temp = a; 
            a = b;
            b = temp;
        }
    }

    return b;
}

int gcd_improve(int & a, int & b){

    int temp = 0;

    while(b){
        temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}

int main(void){
    int a, b;
    std::cout << "두 수의 최대 공약수를 구합니다" << std::endl;

    std::cout << "첫번째 수 : ";
    std::cin >> a;

    std::cout << "두번째 수 : ";
    std::cin >> b;

    //std::cout << "최대 공약수 :" << gcd(a, b) << std::endl;
    std::cout << "최대 공약수 :" << gcd_improve(a, b) << std::endl;

    return 0;
}