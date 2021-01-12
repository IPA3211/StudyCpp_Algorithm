#include <iostream>

const int SIZE_OF_DATA = 10;

int main(void) {
	int loop = 0, cacheSize = 0, input = 0, temp = 0;
	int cache[SIZE_OF_DATA];

	for (int i = 0; i < SIZE_OF_DATA; i++)
		cache[i] = 0;

	std::cin >> cacheSize;
	std::cin >> loop;

	for (int i = 0; i < loop; i++) {
		std::cin >> input;

		for (int j = 0; j < cacheSize; j++) {
			if (cache[j] == input || j == cacheSize - 1 || cache[j] == 0) {
				for (int k = j; k >= 0; k--) {
					cache[k] = cache[k - 1];
				}
				cache[0] = input;
				break;
			}
		}
	}

	for (int i = 0; i < cacheSize; i++) {
		std::cout << cache[i] << " ";
	}

	return 0;
}