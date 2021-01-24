#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

int flag = 0;
int data[10] = { 0, };
int total = 0;
int input = 0;


void func(int in, int sum) {
	if (flag == 1) {
		return;
	}

	int temp = 0;
	if (in + 1 == input) {
		if (sum == (total - sum)) {
			flag = 1;
		}
		return;
	}

	sum += data[in];
	func(in + 1, sum);

	sum -= data[in];
	func(in + 1, sum);
}

int main(void) {
	std::cin >> input;
	
	for (int i = 0; i < input; i++) {
		std::cin >> data[i];
		total += data[i];
	}
	func(0, 0);
	
	(flag == 1) ? std::cout << "YES" : std::cout << "NO";
	
	return 0;
}