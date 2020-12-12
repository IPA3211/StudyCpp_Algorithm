#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int in = 0, sum = 0;
	std::cin >> in;
	
	for(int i = 1; i <= in; i++){
		for(int j = i; j > 0; j /= 10)
			sum++;
	}
	
	std::cout << sum;
	return 0;
}

