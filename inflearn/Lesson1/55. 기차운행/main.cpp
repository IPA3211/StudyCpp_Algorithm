#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

int stack[30];
std::string answer;
int _top = -1;

void push(int input) {
	stack[++_top] = input;
	answer.push_back('P');
}

int top() {
	if (_top == -1) {
		return -1;
	}

	return stack[_top];
}

int pop() {
	if (_top == -1)
		return -1;

	answer.push_back('O');
	return stack[_top--];
}

int main(void) {
	int loop = 0, temp = 0;
	int order = 1;
	std::cin >> loop;
	
	for (int i = 0; i < loop; i++) {
		std::cin >> temp;

		push(temp);

		while (top() == order) {
			pop();
			order++;
		}
	}

	if (top() != -1) {
		std::cout << "impossible";
	}
	else {
		std::cout << answer;
	}

	return 0;
}