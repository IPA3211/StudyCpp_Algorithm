#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

const int SIZE_OF_DATA = 100;

int main(void) {
	int loop = 0;
	int point = 0;
	int temp = -1;
	int upper = 0, lower = 0, answer = 0;
	int curser = 0;

	std::vector<int> data;

	std::cin >> loop;
	std::cin >> point;


	for (int i = 1; i <= loop; i++) {
		data.push_back(i);
	}

	for (int i = 1; data.size() > 1; i++) {
		temp++;
		if (temp == data.size()) {
			temp = 0;
		}

		if (i == point) {
			data.erase(data.begin() + temp);
			temp--;
			i = 0;
		}
	}

	std::cout << data[0] << std::endl;

	return 0;
}