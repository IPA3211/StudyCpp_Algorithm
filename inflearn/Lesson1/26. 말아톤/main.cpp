#include <iostream>

int main(void) {
	int loop = 0, answer = 1;
	int player[10000];

	std::cin >> loop;

	for (int i = 0; i < loop; i++) {
		std::cin >> player[i];
		answer = 1;
		for (int j = 0; j < i; j++) {
			if (player[j] >= player[i])
				answer++;
		}

		std::cout << answer << " ";
	}


	return 0;
}