#include <iostream>

int main(void) {
	int loop = 0;
	int last = 0, temp = 0;
	bool jolly[100];

	for (int i = 0; i < 100; i++) {
		jolly[i] = false;
	}

	std::cin >> loop;
	
	std::cin >> last;

	for (int i = 0; i < loop - 1; i++) {

		std::cin >> temp;

		if (temp - last < 0) {
			if (jolly[last - temp - 1] || temp - last > 100) {
				std::cout << "NO";
				return 0;
			}
			else {
				jolly[last - temp - 1] = true;
			}
		}
		else {
			if (jolly[temp - last - 1] || temp - last > 100) {
				std::cout << "NO";
				return 0;
			}
			else {
				jolly[temp - last - 1] = true;
			}
		}

		last = temp;
	}

	std::cout << "YES";

	return 0;
}