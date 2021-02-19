#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <limits>
#include <queue>

std::vector<std::pair<int, int>> houses;
std::vector<std::pair<int, int>> pizzas;
int ch[12];

int mapSize = 0;
int pizzaNum = 0;
int min = INT_MAX;

void DFS(int s, int level) {
	if (level == pizzaNum) {
		int sum = 0;
		int tempMin = INT_MAX;
		int temp = 0;
		for (auto house : houses) {
			tempMin = INT_MAX;
			for (int i = 0; i < pizzaNum; i++) {
				temp = abs(house.first - pizzas[ch[i]].first) + abs(house.second - pizzas[ch[i]].second);
				if (temp < tempMin) { tempMin = temp; }
			}
			sum += tempMin;
		}
		if (sum < min) {
			min = sum;
		}
	}

	else {
		for (int i = s; i < pizzas.size(); i++) {
			ch[level] = i;
			DFS(i + 1, level + 1);
		}
	}
}

int main(void) {	
	
	int temp;

	std::cin >> mapSize >> pizzaNum;

	for (int i = 0; i < mapSize; i++) {
		for (int j = 0; j < mapSize; j++) {
			std::cin >> temp;
			if (temp == 1) { houses.push_back(std::make_pair(i, j)); }
			else if (temp == 2) { 
				pizzas.push_back(std::make_pair(i, j)); 
			}
		}
	}
	
	DFS(0, 0);

	std::cout << min;

	return 0;
}