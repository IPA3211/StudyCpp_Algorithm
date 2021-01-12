#include <iostream>
#include <string>

int main(void) {
	
	std::string input;
	bool isCarbon;
	int num = 0;
	int answer = 0;


	std::cin >> input;

	for (int i = 0; i < input.size(); i++) {
		if (input.at(i) == 'C') {
			isCarbon = true;
			num = 0;
		}
		else if (input.at(i) == 'H') {
			if (num != 0)
				answer += 12 * num;
			else
				answer += 12;

			isCarbon = false;
			num = 0;
		}
		else {
			num = num * 10;
			num += input.at(i) - '0';
		}
	}

	if (num != 0)
		answer += num;
	else
		answer += 1;

	std::cout << answer;

	return 0;
}