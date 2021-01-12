#include <iostream>

int main(void) {
	int loop = 0, temp = 0, grade = 0;
	int data[100];

	std::cin >> loop;

	for (int i = 0; i < loop; i++) {
		std::cin >> data[i];
	}

	for (int i = loop; i > 0; i--) {
		for (int j = 1; j < i; j++) {
			if (data[j - 1] > data[j]) {
				temp = data[j - 1];
				data[j - 1] = data[j];
				data[j] = temp;
			}
		}
	}
	
	for (int i = 0; i < loop; i++) {
		std::cout << data[i] << " ";
	}

	return 0;
}