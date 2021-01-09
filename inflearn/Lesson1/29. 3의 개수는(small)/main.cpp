#include <iostream>


int main(void) {
	int loop = 0, temp = 0;
	int answer = 0;

	std::cin >> loop;

	for (int i = 1; i <= loop; i++) {
		temp = i;
		while (temp != 0) {
			if (temp % 10 == 3) {
				answer++;
			}

			temp /= 10;
		}
	}
	
	std::cout << answer;

	return 0;
}