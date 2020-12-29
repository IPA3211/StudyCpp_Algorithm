	#include <iostream>
	#include <string>
	#include <algorithm>
	
	/* run this program using the console pauser or add your own getch, system("pause") or input loop */
	
	int main(int argc, char** argv) {
		std::string a, b;
		
		std::cin >> a;
		std::cin >> b;
		
		std::sort(a.begin(), a.end());
		std::sort(b.begin(), b.end());
		
		if(a == b)
			std::cout << "YES";
		else
			std::cout << "NO";
		
		return 0;
	}

