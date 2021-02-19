#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <limits>
#include <queue>

std::queue<std::pair<int, int>> q1, q2;

int map[20][20];
int mapSize = 7;

int dirX[4] = { -1, 0, 1, 0 };
int dirY[4] = { 0, -1, 0, 1 };
int answer = 0;

int main(void) {	

	for (int i = 0; i < mapSize; i++) {
		for (int j = 0; j < mapSize; j++) {
			std::cin >> map[i][j];
		}
	}

	q1.push(std::make_pair(0, 0));

	while (q1.size() != 0) {
		while (q1.size() != 0) {
			map[q1.front().first][q1.front().second] = 1;

			for (int a = 0; a < 4; a++) {
				int x = q1.front().first + dirX[a];
				int y = q1.front().second + dirY[a];
				if (x > -1 && y > -1 && x < mapSize &&  y < mapSize) {
					if (map[x][y] == 0)
						q2.push(std::make_pair(x, y));
				}
			}
			q1.pop();
		}

		if (map[6][6] == 1) { break; }

		answer++;

		while (q2.size() != 0) {
			map[q2.front().first][q2.front().second] = 1;

			for (int a = 0; a < 4; a++) {
				int x = q2.front().first + dirX[a];
				int y = q2.front().second + dirY[a];
				if (x > -1 && y > -1 && x < mapSize &&  y < mapSize) {
					if (map[x][y] == 0)
						q1.push(std::make_pair(x, y));
				}
			}

			q2.pop();
		}
		if (map[6][6] == 1) { break; }

		answer++;
	}


	std::cout << answer;
	return 0;
}