#include <iostream>

const int SIZE_OF_DATA = 100;

int main(void) {
	int loop = 0, input = 0, posCurser = 0, negCurser = SIZE_OF_DATA - 1;
	int data[SIZE_OF_DATA];

	std::cin >> loop;

	for (int i = 0; i < loop; i++) {
		std::cin >> input;
		if (input > 0) {
			data[posCurser] = input;
			posCurser++;
		}
		else {
			data[negCurser] = input;
			negCurser--;
		}
	}
	
	for (int i = SIZE_OF_DATA - 1; i > negCurser; i--) {
		std::cout << data[i] << " ";
	}

	for (int i = 0; i < posCurser; i++) {
		std::cout << data[i] << " ";
	}

	return 0;
}