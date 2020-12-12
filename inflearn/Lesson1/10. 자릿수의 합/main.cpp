#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int digit_sum(int x){
	
	int sum;
	
	for(;x > 0; x /= 10){
		sum += x % 10;
	}
	
	return sum; 
}

int main(int argc, char** argv) {
	
	int max = 0, digit_max = 0;
	int temp, digit_temp;
	int in; 
	
	std::cin >> in;
	
	for(int i = 0; i < in; i++){
	
		std::cin >> temp;
		digit_temp = digit_sum(temp);
		
		if(digit_max < digit_temp){
			max = temp;
			digit_max = digit_temp;
		}
		else if(digit_max == digit_temp){
			if(max < temp)
				max = temp;
		}
	}
	
	
	std::cout << max;
	return 0;
}

