#include <iostream>

int main(void){
    int loop, temp = 0;
    int max = -1, min = -1;
    std::cin >> loop;

    for(int i = 0; i < loop; i++){
        std::cin >> temp;

        if(i == 0){
            max = temp;
            min = temp;
        }

        if(min > temp){
            min = temp;
        }

        if(max < temp){
            max = temp;
        }
    }

    std::cout << max - min << std::endl;

    return 0;
}