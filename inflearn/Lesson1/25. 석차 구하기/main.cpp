#include <iostream>

int main(void) {
	int loop = 0;
	int last = 0, temp = 0;
	int student[2][100];

	std::cin >> loop;

	for (int i = 0; i < loop; i++) {
		std::cin >> student[0][i];
	}

	for (int i = 0; i < loop; i++) {
		student[1][i] = 1;

		for (int j = 0; j < loop; j++) {
			if (student[0][i] < student[0][j]) {
				student[1][i]++;
			}
		}

		std::cout << student[1][i] << std::endl;
	}

	return 0;
}