	#include <iostream>
	#include <string>
	#include <algorithm>
	
	/* run this program using the console pauser or add your own getch, system("pause") or input loop */
	
	int main(int argc, char** argv) {
		int in = 0; 
		int n = 0;
		int answer = 0;
		int sum = 0;
		
		std::cin >> in;
		
		for (int i = 0; i < in; i++){
			sum = 0;
			std::cin >> n;
			std::cin >> answer;
			
			for(int j = 1; j <= n; j++){
				sum += j;
			}
			
			if(answer == sum)
				std::cout << "YES" << std::endl;
			else
				std::cout << "NO" << std::endl;
		}
		return 0;
	}

