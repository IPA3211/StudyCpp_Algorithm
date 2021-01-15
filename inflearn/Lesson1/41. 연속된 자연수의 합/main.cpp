#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

const int SIZE_OF_DATA = 100;

int main(void) {
	int input, sum = 0, answer = 0;
	std::string str;

	std::cin >> input;

	for (int i = input / 2; i > 0; i--) {
		sum = 0;
		str = "";
		for (int j = i; ; j++) {
			if (input < sum) {
				break;
			}
			else if (input == sum) {
				str = str + " = " + std::to_string(input);
				std::cout << str << std::endl;
				answer++;
				break;
			}
			else {
				if (sum != 0) {
					str = str + " + ";
				}
				str = str + std::to_string(j);
				sum += j;
			}
		}
	}

	std::cout << answer;

	return 0;
}