#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

const int SIZE_OF_DATA = 100;

int main(void) {
	int loop = 0;
	int count = 0;
	int data[52][52] = {0, };

	std::cin >> loop;

	for (int i = 1; i <= loop; i++) {
		for (int j = 1; j <= loop; j++) {
			std::cin >> data[i][j];
		}
	}

	for (int i = 1; i <= loop; i++) {
		for (int j = 1; j <= loop; j++) {
			if (data[i - 1][j] < data[i][j])
				if (data[i][j - 1] < data[i][j])
					if (data[i + 1][j] < data[i][j])
						if (data[i][j + 1] < data[i][j])
							count++;
		}
	}

	std::cout << count;

	return 0;
}