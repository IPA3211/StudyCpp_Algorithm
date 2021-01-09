#include <iostream>

int tenPower(int n) {

	if (n < 0) {
		return 0;
	}

	int answer = 1;

	for (; n != 0; n--) {
		answer *= 10;
	}
	return answer;
}


int main(void) {
	int num = 0, ciper = 0, top = 0;
	int save = 0;
	int answer = 0;

	std::cin >> num;

	int temp = num;

	while (temp != 0) {
		if (temp % 10 > 3) {
			answer += tenPower(ciper);
		}
		else if (temp % 10 == 3) {
			answer += save + 1;
		}

		for(int i = 0; i < temp % 10; i++)
			answer += ciper * tenPower(ciper - 1);

		save += temp % 10 * tenPower(ciper);

		temp /= 10;

		ciper++;
	}

	std::cout << answer;

	return 0;
}