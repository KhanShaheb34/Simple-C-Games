#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<ctime>
using namespace std;

int main(){
    int c=0, g;
    srand(time(NULL));
    int num = rand() % 100 + 1;
    cout<<"--------------------------------------------------\n";
    cout<<"=================GUESS THE NUMBER=================\n";
    cout<<"--------------------------------------------------";
    cout<<"\n\nGuess a number (1-100): ";
    while(1){
        cin>>g;
        if(num==g) {
            cout<<"\n****************CONGRATULATIONS****************\n";
            printf("\n**YOU'VE SOLVED GUESSED THE NUMBER AT %d ATTEMPS**\n", c);
            cout<<"Your Point: "<<100-c;
            break;
        }
        else if(num>=g+20) {
            cout<<"\nToo Fucking Low\n";
            c++;
        }
        else if(num>=g+10 && num<g+15) {
            cout<<"\nToo Low\n";
            c++;
        }
        else if(num>g) {
            cout<<"\nLow\n";
            c++;
        }
        else if(num<=g-20) {
            cout<<"\nToo Fucking High\n";
            c++;
        }
        else if(num<=g-10 && num>g-20) {
            cout<<"\nToo High\n";
            c++;
        }
        else if(num<g) {
            cout<<"\nHigh\n";
            c++;
        }
        if(c<=3)        cout<<"\nAnother Guess: ";
        else if(c<=6)   cout<<"\nTry Harder: ";
        else if(c<=9)   cout<<"\nYour Guessing Power is Damn Low\nAnyway Try Again: ";
        else if(c<=12)  cout<<"\nAre You Fucking Dumb?\nTry Again Harder: ";
        else if(c<=15)  cout<<"\nWhat Kind of Creature are You?\nStill Wanna Guess: ";
        else if(c<=18)  cout<<"\nWhat The Fuck are You Doing in This Earth?\nGuess Something That Makes Sense: ";
        else if(c<=21)  cout<<"\nWhat The Fuck are You Doing in This Earth?\nGuess Something That Makes Sense: ";
        else            cout<<"\nOK! You're Not a Human\nNow, Guess Something That Makes Sense: ";
    }
    return 0;
}
