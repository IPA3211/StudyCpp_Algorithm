	#include <iostream>
	#include <string>
	
	/* run this program using the console pauser or add your own getch, system("pause") or input loop */
	
	bool isPrime(int x){
		
		if(x < 2)
			return false;
		
		for(int i = 2; i * i <= x; i++){
			if (x % i == 0)
				return false;
		}
		
		return true;
	}
	
	int reverse(int x){
		int reversed = 0;
		
		for(; x % 10 == 0; x /= 10);
		
		for(; x != 0; x /= 10){
			reversed = reversed * 10 + (x % 10);
		}
		
		return reversed;
	}
	
	int main(int argc, char** argv) {
		int temp = 0;
		int in = 0; 
		
		std::cin >> in;
		
		for(int i = 0; i < in; i++){
			std::cin >> temp;
			if (isPrime(reverse(temp))){
				std::cout << reverse(temp) << " ";
			}
		}
		
		
		
		return 0;
	}

