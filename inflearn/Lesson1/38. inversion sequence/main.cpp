#include <iostream>

const int SIZE_OF_DATA = 100;

int main(void) {
	int loop = 0, cacheSize = 0, input = 0, temp = 0;
	int answer[SIZE_OF_DATA];

	std::cin >> loop;

	for (int i = 0; i < loop; i++) {
		answer[i] = 0;
	}

	for (int i = 0; i < loop; i++) {
		std::cin >> input;
		temp = 0;
		for (int j = 0; j < loop; j++) {
			if (temp == input && answer[j] == 0) {
				answer[j] = i + 1;
				break;
			}

			if (answer[j] == 0)
				temp++;
		}
	}

	for (int i = 0; i < loop; i++) {
		std::cout << answer[i] << " ";
	}

	return 0;
}