#include <iostream>
#include <fstream>
#include <string>
int main(void){
    std::ifstream readfile, readinput, readtemp;
    std::string input, answer;

    for(int i = 1; i <= 5; i++){

        // INPUT 파일 열기
        std::string temp = "./bin/in" + std::to_string(i) + ".txt";
        readinput.open(temp.c_str()); 

        //정답 파일 열기0
        temp = "./bin/out" + std::to_string(i) + ".txt";
        readfile.open(temp.c_str());
        
        //인풋 추출
        std::getline(readinput, input);

        //LINUX에 명령
        temp = "echo " + input + " | " + "./bin/main | cat > ./bin/temp";
        system(temp.c_str());

        //명령한 RETURN 을 읽음
        readtemp.open("./bin/temp");
        std::getline(readtemp, temp);
        std::getline(readfile, answer);

        //임시파일 삭제
        system("rm ./bin/temp");
        
        //출력
        if(temp == answer){
            std::cout << i << ". " <<"true : " << temp << " " << answer << std::endl;
        }
        else
            std::cout << i << ". "<< "false : " << temp << " " << answer << std::endl;

        readfile.close();
        readinput.close();
        readtemp.close();
    }
    
}