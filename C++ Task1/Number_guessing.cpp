#include<iostream>
#include<cstdlib>
int main(){
    using namespace std;
    cout<<endl;
    cout<<"***************************** NUMBER GUESSING GAME *****************************"<<endl;
    cout<<endl;
    int user_guess;
    char play_again='y';
    while(play_again=='y'){
    srand((unsigned) time(NULL));
    int random_number = rand()%100 + 1 ;
    int a=0;
    while(a!=1){
        cout<<"Guess a number between 1 to 100 : ";
        cin>>user_guess;
        if (user_guess == random_number){
            cout<<"Congratulations , your guess is correct! ...  Won the game."<<endl;
            cout<<endl;
            a=1;
            cout<<"Want to play again [y/n] : ";
            cin>>play_again;
        }
        else if((user_guess >= random_number-15)&&(user_guess < random_number)){
            cout<<"Your guess is a bit lower . Try again... guess a higher number "<<endl;
            cout<<endl;
            a=0;
        }
        else if((user_guess <= random_number+15)&&(user_guess > random_number)){
            cout<<"Your guess is a bit higher . Try again... guess a lower number "<<endl;
            cout<<endl;
            a=0;
        }
        else if(user_guess < random_number-15){
            cout<<"Your guess is too low . Try again... guess a higher number "<<endl;
            cout<<endl;
            a=0;
        }
        else if(user_guess > random_number+15){
            cout<<"Your guess is a too high . Try again... guess a lower number"<<endl;
            cout<<endl;
            a=0;
        }
        
    }
    }
    return 0;
}





