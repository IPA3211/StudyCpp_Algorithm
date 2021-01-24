#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

void mergeSort(int size, int* data) {
	if (size == 1) {
		return;
	}

	int* data1 = new int[size / 2];
	int* data2 = new int[size - size / 2];

	for (int i = 0; i < size; i++) {
		if (i < size / 2) {
			data1[i] = data[i];
		}
		else
			data2[i - size / 2] = data[i];
	}

	mergeSort(size / 2, data1);
	mergeSort(size - size / 2, data2);

	int curser1 = 0;
	int curser2 = 0;

	for (int i = 0; i < size; i++) {
		if (curser1 == size / 2) {
			data[i] = data2[curser2++];
			continue;
		}
		if (curser2 == size - size / 2) {
			data[i] = data1[curser1++];
			continue;
		}

		if (data1[curser1] <= data2[curser2])
			data[i] = data1[curser1++];
		else
			data[i] = data2[curser2++];
	}

	delete[] data1;
	delete[] data2;
}

int main(void) {
	int in = 0;

	std::cin >> in;

	int* data = new int[in];
	
	for (int i = 0; i < in; i++) {
		std::cin >> data[i];
	}

	mergeSort(in, data);

	for (int i = 0; i < in; i++) {
		std::cout << data[i] << " ";
	}
	
	delete[] data;

	return 0;
}