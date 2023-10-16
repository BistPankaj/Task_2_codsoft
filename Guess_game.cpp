#include<iostream>
#include<time.h>
using namespace std;
int main()
{
    srand(time(0));
    int guess_num,random,tries=0;
    random=rand()%100+1;
    cout<<"--------------Welcome to the Guessing game--------------"<<endl;
    cout<<"\tEnter the number between 1 to 100 :"<<endl;

    do
    {
    cout<<"\t\tEnter your guess number:\t";
    cin>>guess_num;
    tries++;
    if(random>guess_num)
        {
            cout<<"\tYou Entered very small number! Try again"<<endl;
            cout<<"                 Please enter large number"<<endl;
        }
    else if(random<guess_num)
        {
            cout<<"\tYou Entered very large number! Try again"<<endl;
            cout<<"\t\tPlease enter small number"<<endl;
        }
    else
        {
        cout<<"\tCongratulations! You guessed the correct number"<<endl<<endl;
        cout<<"You win!"<<endl;
        cout<<"Your attempts:-- "<<tries<<endl;
        }
    }
    while(guess_num!=random);
    {
        return 0;
    }
}
