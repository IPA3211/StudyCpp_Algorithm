#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

const int SIZE_OF_DATA = 100;

int main(void) {
	int size = 0; 
	int temp = 0;
	int data[10][10] = { 10, };

	std::cin >> size;

	for (int i = 0; i < size; i++) {
		std::cin >> temp;
		for (int j = 0; j < size; j++) {
			data[j][i] = temp;
		}
	}

	for (int i = 0; i < size; i++) {
		std::cin >> temp;
		for (int j = 0; j < size; j++) {
			if (data[i][j] > temp) {
				data[i][j] = temp;
			}
		}
	}

	temp = 0;

	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			temp += data[i][j];
		}
	}

	std::cout << temp;
	
	return 0;
}