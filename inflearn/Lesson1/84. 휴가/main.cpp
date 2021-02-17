#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <limits>
#include <queue>


std::pair<int, int> data[16];
int ch[16] = {};

int N;

int max = 0;

void DFS(int L, int sum) {
	if (L == N + 1) {
		if (max < sum ) {
			max = sum;
		}
		return;
	}

	if(L + data[L].first <= N + 1)
		DFS(L + data[L].first, sum + data[L].second);
	
	DFS(L + 1, sum);
}


int main(void) {	
	std::cin >> N;

	int a, b;
	for (int i = 1; i <= N; i++) {
		std::cin >> a >> b;
		data[i] = std::make_pair(a, b);
	}

	DFS(1, 0);

	std::cout << max << std::endl;
	return 0;
}