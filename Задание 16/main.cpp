#include<iostream>

int F(int val){
    if(val <= 2){
        return 2;
    }
    else{
        return 3 * F(val - 1) - F(val - 2);
    }
}

int main(){
    setlocale(LC_ALL, "ru_RU");
    std::cout << "Ответ к заданию 16: " << F(6);
    return 0;
}