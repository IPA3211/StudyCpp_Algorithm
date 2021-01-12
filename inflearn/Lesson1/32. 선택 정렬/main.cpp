#include <iostream>
#include <string>

int main(void) {
	int loop = 0, temp = 0;
	int data[100];

	std::cin >> loop;

	for (int i = 0; i < loop; i++) {
		std::cin >> data[i];
	}

	for (int i = 0; i < loop; i++) {
		for (int j = i; j < loop; j++) {
			if (data[i] > data[j]) {
				temp = data[i];
				data[i] = data[j];
				data[j] = temp;
			}
		}
	}

	for (int i = 0; i < loop; i++) {
		std::cout << data[i] << " ";
	}

	return 0;
}