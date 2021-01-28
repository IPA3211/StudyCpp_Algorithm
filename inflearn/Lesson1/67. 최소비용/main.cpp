#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <limits>

int Inputnum = 0;
int answer = INT_MAX;
int data[20][20] = { 0, };

void search(int in, int distance, std::vector<int> root) {
	if (Inputnum == in) {
		if (answer > distance)
			answer = distance;
		return;
	}

	for (int i = 0; i < root.size(); i++) {
		if (in == root[i])
			return;
	}

	root.push_back(in);

	for (int i = 0; i < Inputnum; i++) {
		if (data[in - 1][i] != 0) {
			search(i + 1, distance + data[in - 1][i], root);
		}
	}
}

int main(void) {
	int Inputline = 0;

	std::cin >> Inputnum;
	std::cin >> Inputline;

	int tempFrom;
	int tempTo;
	int tempDistance;

	for (int i = 0; i < Inputline; i++) {
		std::cin >> tempFrom;
		std::cin >> tempTo;
		std::cin >> tempDistance;

		data[tempFrom - 1][tempTo - 1] = tempDistance;
	}

	std::vector<int> root;
	search(1, 0, root);

	std::cout << answer;

	return 0;
}