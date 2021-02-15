#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <limits>
#include <queue>

int DFS(int in) {
	if (in == 1) { return 1; }
	else return in * DFS(in - 1);
}

int cc(int a, int b) {
	if (a < b) 
		return 0;
	
	if (b == 0)
		return 1;

	if (a == 1 && b == 1)
		return 1;

	return cc(a - 1, b - 1) + cc(a - 1, b);
}

int main(void) {
	int a, b;

	std::cin >> a;
	std::cin >> b;

	std::cout << cc(a, b);

	return 0;
}