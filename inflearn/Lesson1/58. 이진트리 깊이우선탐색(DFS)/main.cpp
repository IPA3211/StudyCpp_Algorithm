#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

/////////////////////////////////////////////
// 이진트리 깊이우선탐색(DFS)를				
// 전위순회, 중위순회, 후위순회를 하여 출력하기 
/////////////////////////////////////////////

void preorder(int in) { // 전위순회
	if (in < 8) {
		std::cout << in << " ";
		preorder(in * 2);
		preorder(in * 2 + 1);
	}
}

void inorder(int in) {// 중위순회
	if (in < 8) {
		inorder(in * 2);
		std::cout << in << " ";
		inorder(in * 2 + 1);
	}
}

void postorder(int in) {// 후위순회
	if (in < 8) {
		postorder(in * 2);
		postorder(in * 2 + 1);
		std::cout << in << " ";
	}
}

int main(void) {
	preorder(1);
	std::cout << std::endl;

	inorder(1);
	std::cout << std::endl;

	postorder(1);
	std::cout << std::endl;

	return 0;
}