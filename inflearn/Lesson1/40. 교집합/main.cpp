#include <iostream>
#include <vector>
#include <algorithm>

const int SIZE_OF_DATA = 100;

int main(void) {
	int aSize = 0, bSize = 0, temp = 0,aCurser = 0, bCurser = 0;
	std::vector<int> aData, bData, answer;

	std::cin >> aSize;

	for (int i = 0; i < aSize; i++) {
		std::cin >> temp;
		aData.push_back(temp);
	}

	std::cin >> bSize;

	for (int i = 0; i < bSize; i++) {
		std::cin >> temp;
		bData.push_back(temp);
	}

	std::sort(aData.begin(), aData.end());
	std::sort(bData.begin(), bData.end());

	for (;;) {
		if (aCurser == aSize || bCurser == bSize)
			break;

		if (aData.at(aCurser) == bData.at(bCurser)) {
			answer.push_back(aData.at(aCurser));
			aCurser++;
			bCurser++;
		}
		else if (aData.at(aCurser) > bData.at(bCurser))
			bCurser++;
		else
			aCurser++;
	}


	for (auto a : answer) {
		std::cout << a << " ";
	}

	return 0;
}