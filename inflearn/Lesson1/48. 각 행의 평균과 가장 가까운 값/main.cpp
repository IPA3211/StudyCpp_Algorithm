#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

const int SIZE_OF_DATA = 100;

int main(void) {
	int loop = 9;
	int sum = 0;
	int avg = 0;
	int answer =  -1;
	int data[9];

	for (int i = 0; i < loop; i++) {

		sum = 0;

		for (int j = 0; j < loop; j++) {
			std::cin >> data[j];

			sum += data[j];
		}

		avg = (sum / 9.0) * 10;

		if (avg % 10 > 4) {
			avg = avg / 10 + 1;
		}
		else
			avg /= 10;
		
		int min = 101;
		int temp = 0;

		for (int j = 0; j < loop; j++) {
			temp = data[j] - avg;
			if (temp < 0) {
				temp = -temp;
			}

			if (temp <= min) {
				if (temp == min && answer > data[j]) {
					continue;
				}
				else {
					answer = data[j];
				}
				min = temp;
			}
		}

		std::cout << avg << " " << answer << std::endl;
	}
	

	return 0;
}