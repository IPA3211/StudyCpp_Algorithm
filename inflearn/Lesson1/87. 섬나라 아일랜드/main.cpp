#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <limits>
#include <queue>

std::queue<std::pair<int, int>> q;

int map[20][20];
int mapSize = 0;

int dir[3] = { -1, 0, 1};
int answer = 0;

int main(void) {	
	std::cin >> mapSize;

	for (int i = 0; i < mapSize; i++) {
		for (int j = 0; j < mapSize; j++) {
			std::cin >> map[i][j];
		}
	}

	for (int i = 0; i < mapSize; i++) {
		for (int j = 0; j < mapSize; j++) {
			if (map[i][j] == 1) {
				q.push(std::make_pair(i, j));
				answer++;
			}

			while (q.size() != 0) {
				map[q.front().first][q.front().second] = 0;

				for (int a = 0; a < 3; a++) {
					for (int b = 0; b < 3; b++) {
						int x = q.front().first + dir[a];
						int y = q.front().second + dir[b];
						if (x > -1 && y > -1 && x < mapSize &&  y < mapSize) {
							if (map[x][y] == 1)
								q.push(std::make_pair(x, y));
						}
					}
				}

				q.pop();
			}
		}
	}

	std::cout << answer;
	return 0;
}