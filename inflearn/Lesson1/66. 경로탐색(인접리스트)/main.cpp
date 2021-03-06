#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <limits>

int Inputnum = 0;
int answer = 0;
std::vector<int> data[20];

void search(int in, std::vector<int> root) {
	if (in == Inputnum - 1) {
		answer++;
		return;
	}

	for (int i = 0; i < root.size(); i++) {
		if (in == root[i])
			return;
	}

	root.push_back(in);

	for (int i = 0; i < data[in].size(); i++) {
		search(data[in].at(i), root);
	}

}

int main(void) {
	int inputLine = 0;

	std::cin >> Inputnum;
	std::cin >> inputLine;

	int tempFrom;
	int tempTo;

	for (int i = 0; i < inputLine; i++) {
		std::cin >> tempFrom;
		std::cin >> tempTo;

		data[tempFrom - 1].push_back(tempTo - 1);
	}
	
	std::vector<int> root;

	search(0, root);

	std::cout << answer;

	return 0;
}