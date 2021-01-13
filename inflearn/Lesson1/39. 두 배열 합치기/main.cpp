#include <iostream>

const int SIZE_OF_DATA = 100;

int main(void) {
	int aSize = 0, bSize = 0, aCurser = 0, bCurser = 0;
	int data[2][SIZE_OF_DATA];

	std::cin >> aSize;

	for (int i = 0; i < aSize; i++) {
		std::cin >> data[0][i];
	}

	std::cin >> bSize;

	for (int i = 0; i < bSize; i++) {
		std::cin >> data[1][i];
	}

	for (int i = 0; i < aSize + bSize; i++) {
		if (bCurser == bSize || ((data[0][aCurser] <= data[1][bCurser]) && aCurser < aSize)) {
			std::cout << data[0][aCurser] << " ";
			aCurser++;
		}
		else {
			std::cout << data[1][bCurser] << " ";
			bCurser++;
		}
	}


	return 0;
}