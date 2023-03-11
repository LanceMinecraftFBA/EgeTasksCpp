#include<iostream>
#include<string>

int main(){
    std::string s = "1";
    s += std::string(98, '9');
    size_t position;
    while((position = s.find("19")) != std::string::npos || (position = s.find("299")) != std::string::npos || (position = s.find("3999")) != std::string::npos){
        if((position = s.find("19")) != std::string::npos){
            s.replace(position, 2, "2");
        }
        if((position = s.find("299")) != std::string::npos){
            s.replace(position, 3, "3");
        }
        if((position = s.find("3999")) != std::string::npos){
            s.replace(position, 4, "1");
        }
    }
    std::cout << "Ответ к задании 12: " << s;
    return 0;
}