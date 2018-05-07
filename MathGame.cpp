#include<iostream>
#include<cstdio>
#include<ctime>
#include<cstdlib>
using namespace std;

char per='%';

void comm(int m){
    if(m<=5) cout<<"You're a DUMBASS!";
    else if(m>5 && m<=10) cout<<"You have a SHITHEAD!";
    else if(m>10 && m<=15) cout<<"Please learn some MATHS!";
    else if(m>15 && m<=20) cout<<"You could do it BETTER!";
    else if(m>20 && m<=25) cout<<"GOOD. But it's not enough!";
    else if(m>25 && m<=30) cout<<"GREAT!";
    else if(m>30 && m<=35) cout<<"Awesome!";
    else if(m>35 && m<=40) cout<<"You're GENIUS!";
    else if(m>40 && m<=45) cout<<"I'm IMPRESSED!";
    else if(m>45 && m<=50) cout<<"Nothing to say, You're BRILLLIANT!";
    else cout<<"You're MATHGOD!!!";

}

int main(){
    srand(time(NULL));
    int high=0, a, b, f, ans, mark;
    GAME:
    mark=0;
    cout<<"********************************************\n";
    cout<<"============WELCOME TO MATH GAME============\n";
    cout<<"********************************************\n";
    cout<<"\nSOLVE SIMPLE MATHS\nONE MISTAKE AND YOU'RE DEAD\n\n";
    while(1){
        a=rand()%29+1;
        b=rand()%23+1;
        if(a<b) swap(a,b);
        f=rand()%5;
        ans=0;
        if(f==0) {
            cout<<a<<"\t"<<per<<"\t"<<b<<"\t=\t";
            cin>>ans;
            if(ans==(a%b)) mark++;
            else {goto END;}
        }
        else if(f==1) {
            cout<<a<<"\t-\t"<<b<<"\t=\t";
            cin>>ans;
            if(ans==(a-b)) mark++;
            else {goto END;}
        }
        else if(f==2) {
            cout<<a<<"\tx\t"<<b<<"\t=\t";
            cin>>ans;
            if(ans==(a*b)) mark++;
            else {goto END;}
        }
        else if(f==3 && a%b==0) {
            cout<<a<<"\t/\t"<<b<<"\t=\t";
            cin>>ans;
            if(ans==(a/b)) mark++;
            else {goto END;}
        }
        else {
            cout<<a<<"\t+\t"<<b<<"\t=\t";
            cin>>ans;
            if(ans==(a+b)) mark++;
            else {goto END;}
        }
    }
    END:
    char en;
    cout<<"\nYour Score: "<<mark;
    if(mark>high) {
        high=mark;
        cout<<"\n\nCONGRATULATIONS!!!!\nYOU MADE A NEW HIGH SCORE!!!\n";
        cout<<"\nHighscore: "<<high<<"\n\n";
    }
    else {
        cout<<"\nHighscore: "<<high<<"\n\n";
        comm(mark);
    }
    cout<<"\n\nPress any key to play again!\nOr press 'Q' to quit!\n";
    cin>>en;
    cout<<"\n\n";
    if(en=='Q'||en=='q')
        return 0;
    else {goto GAME;}
}
