#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <limits>
#include <queue>

std::vector<std::pair<int, int>> data[21];
std::pair<int, bool> scores[21]; // first = score
								 // second = isClosed

int main(void) {
	int n, loop;
	int a, b, dis;
	int min = INT_MAX;
	int temp = 0;

	std::cin >> n >> loop;
	
	scores[1] = std::make_pair(0, true);

	for (int i = 2; i <= n; i++) {
		scores[i] = std::make_pair(INT_MAX, true);
	}

	for (int i = 0; i < loop; i++) {
		std::cin >> a >> b >> dis;
		data[a].push_back(std::make_pair(b, dis));
	}

	for (;;) {
		min = INT_MAX;
		for (int i = 1; i <= n; i++) {
			if (scores[i].second) {
				if (min > scores[i].first) {
					min = scores[i].first;
					temp = i;
					scores[i].second = false;
				}
			}
		}

		if (min == INT_MAX)
			break;

		for (int i = 0; i < data[temp].size(); i++)
			scores[data[temp][i].first].first = min + data[temp][i].second;

	}

	for (int i = 1; i <= n; i++) {
		if (scores[i].second) {
			if (min > scores[i].first) {
				min = scores[i].first;
				temp = i;
			}
		}
	}

	for (int i = 2; i <= n; i++) {
		if(scores[i].second)
			std::cout << i << " : impossible" << std::endl;
		else
			std::cout << i << " : " << scores[i].first << std::endl;
	}


	return 0;
}