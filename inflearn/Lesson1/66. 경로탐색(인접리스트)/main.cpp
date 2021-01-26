#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

int Inputnum = 0;
int answer = 0;
int data[20][20] = { 0, };

void search(int in, std::vector<int> root) {
	if (Inputnum == in) {
		answer++;
		return;
	}

	for (int i = 0; i < root.size(); i++) {
		if (in == root[i])
			return;
	}

	root.push_back(in);

	for (int i = 0; i < Inputnum; i++) {
		if (data[in - 1][i] == 1) {
			search(i + 1, root);
		}
	}
}

int main(void) {
	int Inputline = 0;

	std::cin >> Inputnum;
	std::cin >> Inputline;

	int tempFrom;
	int tempTo;

	for (int i = 0; i < Inputline; i++) {
		std::cin >> tempFrom;
		std::cin >> tempTo;

		data[tempFrom - 1][tempTo - 1] = 1;
	}
	std::vector<int> root;
	search(1, root);

	std::cout << answer;

	return 0;
}