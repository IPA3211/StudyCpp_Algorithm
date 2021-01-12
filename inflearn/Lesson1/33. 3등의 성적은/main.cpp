#include <iostream>
#include <string>

// Use SelectionSort

void selectionSort(int *data, int size) {

	int temp = 0;

	for (int i = 0; i < size; i++) {
		for (int j = i; j < size; j++) {
			if (data[i] < data[j]) {
				temp = data[i];
				data[i] = data[j];
				data[j] = temp;
			}
		}
	}
}

int main(void) {
	int loop = 0, temp = 0, grade = 0;
	int data[100];

	std::cin >> loop;

	for (int i = 0; i < loop; i++) {
		std::cin >> data[i];
	}

	selectionSort(data, loop);
	
	for (int i = 0; i < loop; i++) {
		if (temp != data[i]) {
			temp = data[i];
			grade++;
		}

		if (grade == 3) {
			std::cout << temp;
			break;
		}
	}

	return 0;
}