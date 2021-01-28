#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <limits>

int Inputnum = 0;
int answer = INT_MAX;
std::vector<std::pair<int, int>> data[20];

void search(int in, int distance, std::vector<int> root) {
	if (in == Inputnum - 1) {
		if(answer > distance)
		answer = distance;
		return;
	}

	for (int i = 0; i < root.size(); i++) {
		if (in == root[i])
			return;
	}

	root.push_back(in);

	for (int i = 0; i < data[in].size(); i++) {
		search(data[in].at(i).first, distance + data[in].at(i).second, root);
	}

}

int main(void) {
	int inputLine = 0;

	std::cin >> Inputnum;
	std::cin >> inputLine;

	int tempFrom;
	int tempTo;
	int tempDis;

	for (int i = 0; i < inputLine; i++) {
		std::cin >> tempFrom;
		std::cin >> tempTo;
		std::cin >> tempDis;

		data[tempFrom - 1].push_back(std::make_pair(tempTo - 1, tempDis));
	}
	
	std::vector<int> root;

	search(0, 0, root);

	std::cout << answer;

	return 0;
}