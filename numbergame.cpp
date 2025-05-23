#include <iostream>
#include <ctime>

int main(){

    int num;
    int guess;
    int tries = 0;

    srand(time(NULL));
    num = rand()%100 +1;

    std::cout << "******************NUMBER GAME****************** \n";

    do{
        std::cout << "Enter a guess between 1 and 100 ";
        std::cin >> guess;
        tries++;

        if(guess > num){
            std::cout << "Too high \n";
        }
        else if ( guess < num){
            std::cout << "Too low \n";
        }
        else{
            std::cout << "Correct after " << tries << " tries \n";
        }

    }while(guess != num);




    std::cout << "******************NUMBER GAME******************";

    return 0;
}