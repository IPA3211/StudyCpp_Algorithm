	#include <iostream>
	#include <string>
	#include <algorithm>
	
	/* run this program using the console pauser or add your own getch, system("pause") or input loop */
	
	int main(int argc, char** argv) {
		int h = 0, w = 0;
		int myH = 0, myW = 0;
		int temp = 0;
		int max = 0;
		int map[50][50];
		
		std::cin >> h;
		std::cin >> w;
		
		for(int i = 0; i < h; i++){
			for(int j = 0; j < w; j++){
				std::cin >> temp;
				map[i][j] = temp;
			}
		}
		
		std::cin >> myH;
		std::cin >> myW;
		
		for(int i = 0; i + myH <= h; i++){
			for(int j = 0; j + myW <= w; j++){
				temp = 0;
				for(int k = i; k - i < myH; k++){
					for(int k2 = j; k2 - j < myW; k2++){
						temp += map[k][k2];
					}
				}
				
				if(max < temp){
					max = temp;
				}
			}
		}
		
		std::cout << max;
		return 0;
	}

