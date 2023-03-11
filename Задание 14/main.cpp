#include<iostream>
#include<cmath>

// Код может не везде сработать верно, исправления кидайте в Issues

int main(){
    setlocale(LC_ALL, "ru_RU");
    int x = pow(8, 2020) + pow(4, 2017) + 26 - 1;
    std::string s = "";
    while(x!=0){
        s += std::to_string(x%2);
        x /= 2;
    }
    reverse(s.begin(), s.end());
    std::cout << "Ответ к заданию 14: " << std::count(s.begin(), s.end(), '1');
    return 0;
}