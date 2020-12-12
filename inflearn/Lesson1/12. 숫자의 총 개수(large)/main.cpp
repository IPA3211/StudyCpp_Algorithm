#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int in = 0, sum = 0;
	int add = 1, div = 10;
	std::cin >> in;
	
	for(int i = 1; i <= in; i++){
		if(i / div != 0){
			div *= 10;
			add += 1;
		}
		
		sum += add;
	}
	
	std::cout << sum;
	return 0;
}

