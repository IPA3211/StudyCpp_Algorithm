#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

int main(void) {
	int input = 0;
	int curser2 = 0, curser3 = 0, curser5 = 0;
	int temp2 = 0, temp3 = 0, temp5 = 0;
	int data[1500] = { 1, 0, };

	std::cin >> input;

	for (int i = 1; i < input; i++) {
		temp2 = data[curser2] * 2;
		temp3 = data[curser3] * 3;
		temp5 = data[curser5] * 5;

		if (temp2 <= temp3 && temp2 <= temp5) {
			data[i] = temp2;
			curser2++;
			if (temp2 == temp3) {
				curser3++;
			}
			if (temp2 == temp5) {
				curser5++;
			}
		}
		else if (temp3 < temp2 && temp3 < temp5) {
			data[i] = temp3;
			curser3++;
		}
		else {
			data[i] = temp5;
			curser5++;
		}
	}

	std::cout << data[input - 1];
	return 0;
}