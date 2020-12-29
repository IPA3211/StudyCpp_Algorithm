	#include <iostream>
	#include <string>
	
	/* run this program using the console pauser or add your own getch, system("pause") or input loop */
	
	int main(int argc, char** argv) {
		
		std::string in = "";
		int max = 0, maxIndex = 0;
		int data[10] = {0,0,0,0,0,0,0,0,0,0};
		
		std::cin >> in;
		
		for(int i = 0; i < in.length(); i++){
			data [in[i] - '0']++;
		}
		
		for(int i = 0; i < 10; i++){
			if(max < data[i]){
				maxIndex = i;
				max = data[i];
			}
			else if(max == data[i]){
				maxIndex = i;
			}
		}
		
		std::cout << maxIndex;
		return 0;
	}

