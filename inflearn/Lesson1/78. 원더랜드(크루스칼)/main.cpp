#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <limits>
#include <queue>

//UNION & FIND

int data[101];
std::priority_queue<std::pair<int, std::pair<int, int>>, std::vector<std::pair<int, std::pair<int, int>>>, std::greater<std::pair<int, std::pair<int, int>>>> roads;

int find(int a) {
	if (data[a] == a) return a;
	else return find(data[a]);
}

int uni(int a, int b) {
	a = find(a);
	b = find(b);

	if (a != b) data[a] = b;
	else return -1;
	return 0;
}

int main(void) {
	int placeNum;
	int loop;
	int sum = 0;

	int a, b, cost;

	std::cin >> placeNum >> loop;

	for (int i = 1; i < placeNum; i++)
		data[i] = i;

	for (int i = 0; i < loop; i++) {
		std::cin >> a >> b >> cost;
		roads.push(std::make_pair(cost, std::make_pair(a, b)));
	}

	for (; roads.size() > 0;) {
		if (uni(roads.top().second.first, roads.top().second.second) == 0){
			sum += roads.top().first;
		}
		roads.pop();
	}

	std::cout << sum;

	return 0;
}