#include <iostream>
#include <clocale>

bool f(int x, int y, int p){
    if(x+y >= 77 && p==3){
        return true;
    }
    else if(x+y < 77 && p==3){
        return false;
    }
    else if(x+y >= 77 && p<3){
        return false;
    }
    else{
        if(p%2 == 0){
            return f(x+1, y, p+1) || f(x, y+1, p+1) || f(x*2, y, p+1) || f(x, y*2, p+1); //Вышли победителями!
        }
        else{
            return f(x+1, y, p+1) || f(x, y+1, p+1) || f(x*2, y, p+1) || f(x, y*2, p+1); //Проиграли...
        }
    }
}

int main(){
    setlocale(LC_ALL, "ru_RU"); 
    std::cout << "Program started!\n";
    for(int i=1; i<70; i++){
        if(f(i,7,1) == true){
            std::cout << "Ответ к 19 задаче: " << i << "\n";
            break;
        }
    }
    return 0;
}