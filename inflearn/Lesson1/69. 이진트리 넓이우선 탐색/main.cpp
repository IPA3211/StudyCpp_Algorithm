#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <limits>

int queue[100], front = -1, back = -1;
std::vector<int> data[10];

void push(int i) { 
	if (++back >= 100) {
		back = 0;
	}
	queue[back] = i; 
}
int pop() {
	
	if (++front >= 100) {
		front = 0;
	}
	
	return queue[front];
}

int main(void) {
	int tempFrom, tempTo;

	for (int i = 0; i < 6; i++) {
		std::cin >> tempFrom;
		std::cin >> tempTo;

		data[tempFrom - 1].push_back(tempTo - 1);
	}
	
	int ch[10] = { 0, };

	push(0);
	ch[0] = 0;
	while (front < back) {
		int x = pop();
		std::cout << x + 1 << " ";
		for (int i = 0; i < data[x].size(); i++) {
			if (ch[data[x][i]] == 0) {
				ch[data[x][i]] = 1;
				push(data[x][i]);
			}
		}
	}

	return 0;
}