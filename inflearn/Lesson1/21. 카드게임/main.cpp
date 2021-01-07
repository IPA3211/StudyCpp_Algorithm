#include <iostream>

int main(void) {
	int playerA[10];
	int temp;
	int pointA = 0, pointB = 0;
	int isLastWinA = 0;
	
	for (int i = 0; i < 10; i++) {
		std::cin >> playerA[i];
	}
	for (int i = 0; i < 10; i++) {
		std::cin >> temp;
		if (temp > playerA[i]) {
			pointB += 3;
			isLastWinA = -1;
		}
		else if (temp == playerA[i]) {
			pointA++;
			pointB++;
		}
		else {
			pointA += 3;
			isLastWinA = 1;
		}
	}
	std::cout << pointA << " " << pointB << std::endl;

	if (pointA > pointB || (pointA == pointB && isLastWinA == 1)) {
		std::cout << "A" << std::endl;
	}
	else if (pointA == pointB && isLastWinA == 0) {
		std::cout << "D" << std::endl;
	}
	else
		std::cout << "B" << std::endl;

	return 0;
}