#include <iostream>

int main(void) {
	int loop = 0, last = 100001, answer = 1, max = 0;
	int temp = 0;

	std::cin >> loop;

	for (int i = 0; i < loop; i++) {
		std::cin >> temp;
		if (last <= temp) {
			answer++;
			if (max < answer)
				max = answer;
		}
		else
			answer = 1;

		last = temp;
	}

	std::cout << max;

	return 0;
}