#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <limits>

int queue[1001], front = -1, back = -1;
std::vector<int> data[20];

void push(int i) { 
	if (++back >= 1001) {
		back = 0;
	}
	queue[back] = i; 
}
int pop() {
	
	if (++front >= 1001) {
		front = 0;
	}
	
	return queue[front];
}

int main(void) {
	int direction[] = {1, -1, 5};
	int answer;
	int inputNum;
	int inputKill;

	std::cin >> inputNum;
	std::cin >> inputKill;

	for (int i = 0; i < inputNum; i++) {
		push(i + 1);
	}

	for (int i = 1; front != back; i++) {
		if (i == inputKill) {
			answer = pop();
			i = 0;
			continue;
		}
		push(pop());
	}

	std::cout << answer;
	return 0;
}