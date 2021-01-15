#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

const int SIZE_OF_DATA = 100;

int main(void) {
	int input, temp = 0, answer = 0, upper = 0, lower = 0;
	int numToFind;
	std::vector<int> data;

	std::cin >> input;
	std::cin >> numToFind;

	upper = input;

	for (int i = 0; i < input; i++) {
		std::cin >> temp;
		data.push_back(temp);
	}

	std::sort(data.begin(), data.end());

	while (true) {
		answer = (upper + lower) / 2;

		if (data[answer] > numToFind) {
			upper = answer;
		}
		else if (data[answer] == numToFind) {
			break;
		}
		else {
			lower = answer;
		}
	}

	std::cout << ++answer;

	return 0;
}