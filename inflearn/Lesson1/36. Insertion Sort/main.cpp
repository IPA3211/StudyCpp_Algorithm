#include <iostream>

const int SIZE_OF_DATA = 100;

int main(void) {
	int loop = 0, temp = 0;
	int data[SIZE_OF_DATA];

	std::cin >> loop;

	for (int i = 0; i < loop; i++) {
		std::cin >> data[i];
	}

	for (int i = 1; i < loop; i++) {
		temp = data[i];
		for (int j = i - 1; j >= 0; j--) {
			if (data[j] > temp) {
				data[j + 1] = data[j];
				data[j] = temp;
			}
			else {
				break;
			}
		}
	}

	for (int i = 0; i < loop; i++) {
		std::cout << data[i] << " ";
	}

	return 0;
}