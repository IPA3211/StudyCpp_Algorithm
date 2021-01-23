#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

/////////////////////////////////////////////
// ����Ʈ�� ���̿켱Ž��(DFS)��				
// ������ȸ, ������ȸ, ������ȸ�� �Ͽ� ����ϱ� 
/////////////////////////////////////////////

void preorder(int in) { // ������ȸ
	if (in < 8) {
		std::cout << in << " ";
		preorder(in * 2);
		preorder(in * 2 + 1);
	}
}

void inorder(int in) {// ������ȸ
	if (in < 8) {
		inorder(in * 2);
		std::cout << in << " ";
		inorder(in * 2 + 1);
	}
}

void postorder(int in) {// ������ȸ
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