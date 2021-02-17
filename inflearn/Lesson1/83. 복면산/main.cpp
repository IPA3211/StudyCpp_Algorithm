#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <limits>
#include <queue>


int data[8] = {}; //S E N D M O R Y 
int ch[10] = {};

int send() { return 1000 * data[0] + 100 * data[1] + 10 * data[2] + data[3]; }
int more() { return 1000 * data[4] + 100 * data[5] + 10 * data[6] + data[1]; }
int money(){ return 10000 * data[4] + 1000 * data[5] + 100 * data[2] + 10 * data[1] + data[7]; }
void DFS(int L) {
	if (L == 8) {
		if (send() + more() == money() && data[4] != 0) {
			printf("    %d %d %d %d\n", data[0], data[1], data[2], data[3]);
			printf(" +  %d %d %d %d\n", data[4], data[5], data[6], data[1]);
			printf("---------------\n");
			printf("   %d %d %d %d %d\n", data[4], data[5], data[2], data[1], data[7]);
		}
		return;
	}
	for (int i = 0; i < 10; i++) {
		if (ch[i] == 0) {
			ch[i] = 1;
			data[L] = i;
			DFS(L + 1);
			ch[i] = 0;
		}

	}

}


int main(void) {	
	DFS(0);
	return 0;
}