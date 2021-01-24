#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

int count = 0;
int data[10] = { 0, };
int total = 0;
int input = 0;


void func(int in, int sum) {
	if (in == input) {
		if (sum == total) {
			count++;
		}
		return;
	}

	sum += data[in];
	func(in + 1, sum);

	sum -= data[in];
	func(in + 1, sum);

	sum -= data[in];
	func(in + 1, sum);
	
}

int main(void) {
	std::cin >> input;
	std::cin >> total;

	for (int i = 0; i < input; i++) {
		std::cin >> data[i];
	}
	func(0, 0);
	
	std::cout << count;
	
	return 0;
}