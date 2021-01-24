#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

int ch[10] = { 0, };
int input = 0;

void func(int in) {
	if (in + 1 > input) {
		for (int i = 0; i < input; i++) {
			if (ch[i] == 1) {
				std::cout << i + 1 << " ";
			}
		}
		std::cout << std::endl;
		return;
	}

	ch[in] = 1;
	func(in + 1);

	ch[in] = 0;
	func(in + 1);
}

int main(void) {
	std::cin >> input;

	func(0);
	return 0;
}