#include<iostream>
#include<cstdlib>
int main(){
    using namespace std;
    cout<<"NUMBER GUESSING GAME"<<endl;
    cout<<endl;
    int user_guess;
    srand((unsigned) time(NULL));
    int random_number = rand()%100 + 1 ;
    int a=0;
    while(a!=1){
        cout<<"Guess a number between 1 to 100 : ";
        cin>>user_guess;
        if (user_guess == random_number){
            cout<<"Congratulations , your guess is correct!"<<endl;
            a=1;
        }
        else if(user_guess < random_number){
            cout<<"Your guess is low . Try again..."<<endl;
            a=0;
        }
        else{
            cout<<"Your guess is high . Try again..."<<endl;
            a=0;
        }
    }
    return 0;
}