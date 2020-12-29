	#include <iostream>
	#include <string>
	#include <algorithm>
	
	/* run this program using the console pauser or add your own getch, system("pause") or input loop */
	
	int main(int argc, char** argv) {
		int sec, lim, max = 0;
		
		std::cin >> sec;
		std::cin >> lim;
		
		int in = 0;
		int temp = 0;
		
		for(int i = 0; i < sec; i++){
			std::cin >> in;
			
			if(in > lim){
				temp++;
				if(temp > max)
					max = temp;
			}
			
			else{
				temp = 0;
			}
		}
		
		if(max == 0)
			std::cout << "-1";
		else
			std::cout << max;
		
		return 0;
	}

