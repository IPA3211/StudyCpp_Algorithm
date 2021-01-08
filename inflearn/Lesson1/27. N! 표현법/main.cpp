#include <iostream>

bool isPrimeNumber(int in) {

	if (in == 1)
		return false;

	if (in == 2 || in == 3)
		return true;

	for (int i = 2; i * i <= in; i++) {
		if (in % i == 0)
			return false;
	}
	return true;
}

int main(void) {
	int loop = 0, tempCursor = 0;
	int primeCursor = 0;
	int prime[2][1000];

	std::cin >> loop;

	for (int i = 2; i <= loop; i++) {
		int temp = i;

		if (isPrimeNumber(temp)) {
			prime[0][primeCursor] = temp;
			prime[1][primeCursor] = 1;
			primeCursor++;
		}
		else {
			tempCursor = 0;
			while (temp > 1) {
				if (temp % prime[0][tempCursor] == 0) {
					temp /= prime[0][tempCursor];
					prime[1][tempCursor]++;
				}
				else
					tempCursor++;
			}
		}
	}

	std::cout << loop << "! = ";

	for (int i = 0; i < primeCursor; i++) {
		std::cout << prime[1][i] << " ";
	}


	return 0;
}