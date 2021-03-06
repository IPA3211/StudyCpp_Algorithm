#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <limits>
#include <queue>

std::priority_queue<int, std::vector<int>, std::greater<int>> data;

int main(void) {
	int input;
	while (1) {
		std::cin >> input;

		if (input == 0) {
			std::cout << data.top() << std::endl;
			data.pop();
			continue;
		}

		if (input == -1)
			break;

		data.push(input);
	}

	return 0;
}