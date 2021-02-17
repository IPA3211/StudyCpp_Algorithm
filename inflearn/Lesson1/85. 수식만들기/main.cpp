#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <limits>
#include <queue>

int data[10];
int oper[4]; // + - * /
int N = 0;

int max = INT_MIN;
int min = INT_MAX;

void DFS(int L, int sum) {
	if (L == N) {
		if (max < sum) max = sum;
		if (min > sum) min = sum;

		return;
	}

	if (oper[0] != 0) {
		oper[0]--;
		DFS(L + 1, sum + data[L]);
		oper[0]++;
	}

	if (oper[1] != 0) {
		oper[1]--;
		DFS(L + 1, sum - data[L]);
		oper[1]++;
	}

	if (oper[2] != 0) {
		oper[2]--;
		DFS(L + 1, sum * data[L]);
		oper[2]++;
	}

	if (oper[3] != 0) {
		oper[3]--;
		DFS(L + 1, sum / data[L]);
		oper[3]++;
	}
}


int main(void) {	
	
	std::cin >> N;

	for (int i = 0; i < N; i++) {
		std::cin >> data[i];
	}

	for (int i = 0; i < 4; i++) 
		std::cin >> oper[i];

	DFS(1, data[0]);

	std::cout << max << std::endl;
	std::cout << min << std::endl;

	return 0;
}