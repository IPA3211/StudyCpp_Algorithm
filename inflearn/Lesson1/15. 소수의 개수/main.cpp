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
	
	int main(int argc, char** argv) {
		int in = 0; 
		int count = 0;
		
		std::cin >> in;
		
		for(int i = 2; i <= in; i++){
			if (isPrime(i)){
				count++;
			}
		}
		
		std::cout << count;
		
		
		return 0;
	}

