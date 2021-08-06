#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n, sum = 0;
	std::cin >> n; 
	
	for(int i = 1; i <= n; i++){
		for(int j = 1; j * j <= i; j++){
			if(i % j == 0){
				if(j * j == i)
					sum++;
				else
					sum += 2;
			}
		}
		
		std::cout << sum << " ";
		sum = 0;
	}
	
	return 0;
}
