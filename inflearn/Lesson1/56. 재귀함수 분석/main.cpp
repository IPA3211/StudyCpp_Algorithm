#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

void func(int in) {
	if(in > 1)
		func(in - 1);

	std::cout << in << " ";
}

int main(void) {
	int input = 0;

	std::cin >> input;

	func(input);
}