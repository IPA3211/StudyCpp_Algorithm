#include <iostream>
#include <string>

using namespace std;

int main(void){
    string input, temp;
    int num = 0, ans = 0;

    cin >> input;

    for(int i = 0; i < input.size(); i++){
        if(input[i] >= '0' && input[i] <= '9'){
            temp.push_back(input[i]);
        }
    }

    num = stoi(temp);

    cout << num << endl;

    for(int i = 1; i * i <= num; i++){
        if(num % i == 0){
            ans += 2;
        }
    }

    cout << ans << endl;

    return 0;
}