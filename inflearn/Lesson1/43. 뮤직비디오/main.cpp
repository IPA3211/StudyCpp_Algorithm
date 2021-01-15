#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

const int SIZE_OF_DATA = 100;

int main(void) {
	int temp = 0, answer = 0;
	int upper = 0, lower = 0;
	int sum = 0;
	int input, splitSize;
	std::vector<int> data;

	std::cin >> input;
	std::cin >> splitSize;

	for (int i = 0; i < input; i++) {
		std::cin >> temp;
		data.push_back(temp);
		sum += temp;
	}

	lower = sum / splitSize;
	upper = sum;

	while (upper != lower) {
		sum = 0;
		temp = 1;
		answer = (upper + lower) / 2;
		
		for (int i = 0; i < input; i++) {
			if (sum + data[i] > answer) {
				sum = 0;
				temp++;
			}

			if (temp > splitSize)
				break;

			sum += data[i];
		}

		if (temp > splitSize) {
			lower = answer;
		}
		else {
			upper = answer;
		}

		if (upper - lower == 1) {
			break;
		}
	}

	std::cout << upper;

	return 0;
}