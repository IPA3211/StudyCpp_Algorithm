#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

int stack[10];
int top = -1;

void push(int input) {
	stack[++top] = input;
}

int pop() {
	if (top == -1)
		return -1;

	return stack[top--];
}

int main(void) {
	std::string input;

	std::cin >> input;

	for (auto a : input) {
		if (a == '(')
			push(1);
		else
			if (pop() == -1) {
				std::cout << "NO";
				return 0;
			}
	}

	if (pop() != -1) {
		std::cout << "NO";
	}
	else
		std::cout << "YES";

	
	return 0;
}