#include <iostream>
#include <string>

using namespace std;

int main(void){
    
    string input;
    int n = 0;
    cin >> input;

    for(int i = 0; i < input.size(); i++){
        if(input[i] == '('){
            n++;
        }
        else{
            n--;
        }

        if(n < 0){
            cout << "NO" << endl;
            return 0;
        }
    }

    if(n == 0){
        cout << "YES" << endl;
    }
    else{
        cout << "NO2" << endl;
    }

    return 0;
}