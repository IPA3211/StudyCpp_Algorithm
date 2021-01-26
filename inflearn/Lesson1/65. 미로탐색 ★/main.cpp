#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

int Inputnum = 0;
int answer = 0;
int data[7][7] = { 0, };
int ch[7][7] = { 0, };

int dx[4] = { -1, 0, 1, 0 };
int dy[4] = { 0, 1, 0, -1 };

void search(int x, int y) {
	
	int tempX, tempY;

	if (x == 6 && y == 6) {
		answer++;
	}
	else {
		for (int i = 0; i < 4; i++) {
			tempX = x + dx[i];
			tempY = y + dy[i];
			if (tempX < 0 || tempY < 0 || tempY > 6 || tempX > 6)
				continue;
			else if (data[tempX][tempY] == 0 && ch[tempX][tempY] == 0) {
				ch[tempX][tempY] = 1;
				search(tempX, tempY);
				ch[tempX][tempY] = 0;
			}
		}
	}
}

int main(void) {

	for (int i = 0; i < 7; i++) {
		for(int j = 0; j < 7; j++)
		std::cin >>data[i][j];
	}
	ch[0][0] = 1;
	search(0, 0);

	std::cout << answer;

	return 0;
}