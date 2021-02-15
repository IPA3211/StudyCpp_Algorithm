#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <limits>
#include <queue>
//UNION & FIND
int data[1001];

int find(int a) {
	if (data[a] == a) return a;
	else return find(data[a]);
}

void uni(int a, int b) {
	a = find(a);
	b = find(b);

	if (a != b) data[a] = b;
}

int main(void) {
	int studentNum;
	int loop;

	int a, b;

	std::cin >> studentNum >> loop;

	for (int i = 1; i < studentNum; i++)
		data[i] = i;

	for (int i = 0; i < loop; i++) {
		std::cin >> a >> b;
		uni(a, b);
	}

	std::cin >> a >> b;

	if (find(a) == find(b))
		std::cout << "YES";
	else
		std::cout << "NO";

	return 0;
}