#include <iostream>

void sieve(int & a){
    bool * sand;
    sand = new bool [a + 1];

    sand[0] = false;
    sand[1] = false;

    for(int i = 2; i<= a; i++){
        sand[i] = true;
    }

    for(int i = 2; i * i <= a; i++){
        if(sand[i]){
            for(int j = i * i; j <= a; j += i){
                //  j = i * i 인 이유는 만약 i 가 3이면 3 * 2 는 이미 소수가 아님
                // 그러므로 3 * 3 부터 판정하면 됨
                // j += i 는 3, 6, 9, 12 ... 이런식
                sand[j] = false;
            }
        }
    }

    for(int i = 0; i <= a; i++){
        if(sand[i]){
            std::cout << i << std::endl;
        }
    }
}

int main(void){
    int a;
    std::cout << "에라토스테네스의 체" << std::endl;

    std::cin >> a;
    sieve(a);
}

