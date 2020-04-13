#include <iostream>

int main(void){
    int a[] = {1,5,6,9,7,8,3,4,2,10};
    int idx = 0, temp = 0;
    for(int i = 0; i < 10; i++){
        idx = i;
        for(int j = i; j < 10; j++){
            if(a[j] < a[idx]){
                idx = j;
            }
        }
        temp = a[i];
        a[i] = a[idx];
        a[idx] = temp;
    }

    for(int i = 0; i < 10; i++){
        std::cout << a[i] << " ";
    }
    std::cout << std::endl;
}