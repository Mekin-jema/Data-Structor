#include<iostream>
#include <ctime>
int main(){
    std::cout<<"hello wold"<<std::endl;
    // pseudo-=random= NOT truly random (but close)
    // srand(time(NULL));
    srand(time(0));
    int num=(rand()%6)+1;
    switch (num)
    {
    case 1 : std::cout<<"you win  GOLD";
        break;
    case 2 : std::cout<<"you win  money";
        break;
    case 3 : std::cout<<"you win   book";
        break;
    case 4 : std::cout<<"you win  GOLD";
        break;
    case 5: std::cout<<"you win  GOLD";
        break;
    case 6: std::cout<<"you win  GOLD";
        break;
    
    default:std::cout<<"I don't want any award";
        break;
    }
    std::cout<<num;
    int guess;
    ///Guess game 
    int chance=3;

    while ( chance){
    int  num =rand();
     std::cout<<"enter number between 1-99:  ";
     std::cin>>guess;
     if (num==guess){
        std::cout<<"Well come to our Channel";
        break;
     }
     else if(num>guess){
        std::cout<<"Too low!";
     }
     else if (num<guess){
        std::cout<<"To high!";
     }
    //  chance--;
    }
    std::cout<<"Game over!!";


}