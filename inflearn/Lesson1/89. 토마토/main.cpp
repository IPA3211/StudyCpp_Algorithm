#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <limits>
#include <queue>

std::queue<std::pair<int, int>> q;

int m, n;
int map[1000][1000];

bool isDone = true;

int dirX[4] = { -1, 0, 1, 0 };
int dirY[4] = { 0, -1, 0, 1 };
int answer = 0;

int main(void) {

	std::cin >> n >> m;

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			std::cin >> map[i][j];
			if (map[i][j] == 1)
				q.push(std::make_pair(i, j));
			else if (map[i][j] == 0)
				isDone = false;
		}
	}

	if (isDone)
		return 0;


	while (q.size() != 0) {
		for (int i = 0; i < 4; i++) {
			int x = q.front().first + dirX[i];
			int y = q.front().second + dirY[i];
			if (x > -1 && y > -1 && x < m &&  y < n) {
				if (map[x][y] == 0) {
					q.push(std::make_pair(x, y));
					map[x][y] = map[q.front().first][q.front().second] + 1;
				}
			}
		}
		q.pop();
	}

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (map[i][j] == 0) {
				std::cout << "-1";
				return 0;
			}
			else
				if (answer < map[i][j])
				{
					answer = map[i][j];
				}
		}
	}


	std::cout << answer - 1;
	return 0;
}