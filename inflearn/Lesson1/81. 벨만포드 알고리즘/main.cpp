#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <limits>
#include <queue>

std::vector<std::pair<int, int>> road[101];
int citis[101];

int main(void) {
	int cityNum, roadNum;
	int f, t, dis;
	int from, to;

	std::cin >> cityNum >> roadNum;
	for (int i = 1; i <= cityNum; i++) {
		citis[i] = INT_MAX;
	}

	for (int i = 0; i < roadNum; i++) {
		std::cin >> f >> t >> dis;
		road[f].push_back(std::make_pair(t, dis));
	}

	std::cin >> from >> to;

	citis[from] = 0;

	for (int i = 0; i < roadNum; i++) {
		for (int j = 1; j <= roadNum; j++) {
			for (int k = 0; k < road[j].size(); k++) {
				if(citis[j] != INT_MAX && citis[road[j][k].first] > citis[j] + road[j][k].second)
					citis[road[j][k].first] = citis[j] + road[j][k].second;
			}
		}
	}

	for (int j = 1; j <= roadNum; j++) {
		for (int k = 0; k < road[j].size(); k++) {
			if (citis[j] != INT_MAX && citis[road[j][k].first] > citis[j] + road[j][k].second)
				if (citis[road[j][k].first] != citis[j] + road[j][k].second) {
					std::cout << "-1" << std::endl;
					return 0;
				}
		}
	}

	std::cout << citis[to] << std::endl;


	return 0;
}