#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <limits>
#include <queue>

int data[16] = {};
int ch[16] = {};
int res[16] = {};

int n, r;
int count = 0;

void DFS(int L) {
	if (L == r) {
		for (int i = 0; i < r; i++) {
			std::cout << res[i] << " ";
		}
		count++;
		std::cout << std::endl;
		return;
	}

	for (int i = 1; i <= n; i++) {
		if (ch[i] == 0)
		{
			res[L] = data[i];
			ch[i] = 1;
			DFS(L + 1);
			ch[i] = 0;
		}
	}

}


int main(void) {	
	std::cin >> n >> r;

	for (int i = 1; i <= n; i++) {
		std::cin >> data[i];
	}

	DFS(0);
	std::cout << count << std::endl;

	return 0;
}