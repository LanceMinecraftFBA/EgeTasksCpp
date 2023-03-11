#include<iostream>

bool f(int x, int p){
    if(x >= 68 && p==4){
        return true;
    }
    else if(x < 68 && p==4){
        return false;
    }
    else if(x >= 68 && p<4){
        return false;
    }
    else{
        if(p%2 != 0){
            return f(x+1, p+1) || f(x+4, p+1) || f(x*5, p+1); //Вышли победителями!
        }
        else{
            return f(x+1, p+1) && f(x+4, p+1) && f(x*5, p+1); //Проиграли...
        }
    }
}

int main(){
    setlocale(LC_ALL, "Russian");
    std::cout << "Program started!\n";
    for(int i=1; i<70; i++){
        if(f(i,1) == true){
            std::cout << "Ответ к 20 задаче: " << i << "\n";
        }
    }
    return 0;
}