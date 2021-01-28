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
	int direction[] = {1, -1, 5};

	int hPos;
	int sPos;

	std::cin >> hPos;
	std::cin >> sPos;
	
	int ch[10001] = {0, };

	push(hPos);
	ch[hPos] = 1;

	while (1) {
		int x = pop();
		for (int i = 0; i < 3; i++) {
			if (x + direction[i] < 0 || x + direction[i] > 10000)
				continue;

			if (x + direction[i] == sPos) {
				std::cout << ch[x];
				return 0;
			}

			if (ch[x + direction[i]] == 0) {
				ch[x + direction[i]] = ch[x] + 1;
				push(x + direction[i]);
			}

		}
	}

	return 0;
}