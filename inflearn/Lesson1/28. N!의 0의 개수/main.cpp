#include <iostream>

const int ANSWER_SIZE = 1000;

int main(void) {
	int loop = 0, top = 0;;
	int max = 0, temp = 0;


	long long answer[ANSWER_SIZE];

	for (int i = 0; i < ANSWER_SIZE; i++) {
		answer[i] = 0;
	}

	answer[0]++;

	std::cin >> loop;

	for (int i = 2; i <= loop; i++) {
		for (int j = 0; j < ANSWER_SIZE; j++) {
			answer[j] *= i;
		}

		for (int j = 0; j < ANSWER_SIZE; j++) {
			if (answer[j] > 99999) {
				answer[j + 1] += answer[j] / 100000;
				answer[j] %= 100000;
			}

			if (answer[j] != 0)
				top = j;
		}
	}
	
	for (int i = 0; i < top; i++) {
		for (int j = 0; j < 5; j++) {
			if (answer[i] % 10 == 0) {
				temp++;
			}
			else {
				if (temp > max)
					max = temp;

				temp = 0;
			}

			answer[i] /= 10;
		}
	}

	std::cout << max;

	return 0;
}