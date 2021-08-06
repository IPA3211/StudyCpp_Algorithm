#include <iostream>
#include <string>

using namespace std;

int main(void){

    string input, temp;

    getline(cin, input);

    for(int i = 0; i < input.size(); i++){
        if(input[i] != ' '){
            if(input[i] >= 'A' && input[i] <= 'Z'){
                temp.push_back(input[i] - 'A' + 'a');
            }
            else{
                temp.push_back(input[i]);
            }
        }
    }

    cout << temp;

    return 0;
}