#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <limits>
#include <queue>

std::priority_queue<int> compare;
std::vector<int> data[10001];

int main(void) {
	int loop, money, day, sum = 0;

	std::cin >> loop;

	for (int i = 0; i < loop; i++) {
		std::cin >> money;
		std::cin >> day;

		data[day].push_back(money);
	}

	for (int i = 10000; i > 0; i--) {
		for (auto a : data[i])
			compare.push(a);

		if (compare.size() == 0)
			continue;

		sum += compare.top();
		compare.pop();
	}

	std::cout << sum;

	return 0;
}