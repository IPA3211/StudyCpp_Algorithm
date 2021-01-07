#include <iostream>

int main(void) {
	int loop = 0, answer = 0;
	int playerA[100];
	int playerB[100];

	std::cin >> loop;
	for (int i = 0; i < loop; i++) {
		std::cin >> playerA[i];
	}
	for (int i = 0; i < loop; i++) {
		std::cin >> playerB[i];
	}

	for (int i = 0; i < loop; i++) {
		if (playerA[i] == playerB[i]) {
			std::cout << "D" << std::endl;
			continue;
		}

		if (playerA[i] == 1 && playerB[i] == 3) 
			std::cout << "A" << std::endl;
		else if (playerA[i] == 2 && playerB[i] == 1) 
			std::cout << "A" << std::endl;
		else if (playerA[i] == 3 && playerB[i] == 2) 
			std::cout << "A" << std::endl;
		else
			std::cout << "B" << std::endl;
	}

	return 0;
}