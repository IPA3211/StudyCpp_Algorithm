#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

const int SIZE_OF_DATA = 100;

int main(void) {
	int loop = 0;
	int horses = 0;
	int temp = 0;
	int upper = 0, lower = 0, answer = 0;
	int curser = 0;

	std::vector<int> data;

	std::cin >> loop;
	std::cin >> horses;


	for (int i = 0; i < loop; i++) {
		std::cin >> temp;
		
		data.push_back(temp);
	}

	std::sort(data.begin(), data.end());

	lower = data.at(0);
	upper = data.at(loop - 1);

	while (true) {
		answer = (lower + upper) / 2;

		curser = data[0];
		temp = 1;

		for (int i = 1; i < loop; i++) {
			if ((data[i] - curser) > answer) {
				curser = data[i];
				temp++;
			}
		}

		if (temp < horses) {
			upper = answer;
		}
		else {
			lower = answer;
		}

		if (upper - lower == 1) {
			break;
		}
	}

	std::cout << upper << std::endl;

	return 0;
}