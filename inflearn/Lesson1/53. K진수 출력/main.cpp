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
	int num = 0;
	int k = 0;

	std::cin >> num;
	std::cin >> k;

	while (num != 0) {
		push(num % k);
		num /= k;
	}

	while (true) {
		int temp = pop();
		if (temp == -1) {
			break;
		}

		if (temp < 10)
			std::cout << temp;
		else
			std::cout << (char)('A' + temp - 10);
	}
	
	return 0;
}