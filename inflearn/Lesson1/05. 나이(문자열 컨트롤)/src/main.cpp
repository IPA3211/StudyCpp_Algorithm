#include <iostream>
#include <string>

int main(void){
    int loop, temp = 0;

    std::string str;

    std::getline(std::cin, str);

    if(str[7] - '0' > 2){
        std::cout << 20 - atoi(str.substr(0, 2).c_str()) << " ";
    }
    else
        std::cout << 120 - atoi(str.substr(0, 2).c_str()) << " ";

    if((str[7] - '0') % 2){
        std::cout << "M";
    }
    else
        std::cout << "W";

    return 0;
}