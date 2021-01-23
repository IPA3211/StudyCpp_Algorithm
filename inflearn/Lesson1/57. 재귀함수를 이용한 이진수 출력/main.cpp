#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

void func(int in) {
	if (in == 0)
		return;

	func(in / 2);

	std::cout << in % 2;
}

int main(void) {
	int input = 0;

	std::cin >> input;

	func(input);
}