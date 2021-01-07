#include <iostream>

int main(void) {
	int loop = 0, answer = 0;
	int people[100];

	std::cin >> loop;
	for (int i = 0; i < loop; i++) {
		std::cin >> people[i];
	}

	for (int i = 0; i < loop - 1; i++) {
		for (int j = i + 1; j < loop; j++) {
			if (people[i] <= people[j])
				break;
			else if(j == loop - 1) {
				answer++;
			}
		}
	}

	std::cout << answer;

	return 0;
}