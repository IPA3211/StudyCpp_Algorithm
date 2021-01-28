#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <limits>

int queue[100], front = -1, back = -1;
std::vector<int> data[20];

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
	int tempFrom, tempTo, level = 0;

	int inputLoop;
	int inputLine;

	std::cin >> inputLoop;
	std::cin >> inputLine;

	for (int i = 0; i < inputLine; i++) {
		std::cin >> tempFrom;
		std::cin >> tempTo;

		data[tempFrom - 1].push_back(tempTo - 1);
	}
	
	int ch[20] = { 0, };

	push(0);
	ch[0] = 0;
	while (front < back) {
		int x = pop();
		for (int i = 0; i < data[x].size(); i++) {
			if (ch[data[x][i]] == 0) {
				ch[data[x][i]] = ch[x] + 1;
				push(data[x][i]);
			}
		}
	}

	for (int i = 1; i < inputLoop; i++) {
		std::cout << i + 1 << " : " << ch[i] << std::endl;
	}

	return 0;
}