//rock paper scissors game
#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

int main()
{
  
    int choice;
    int randnumber;
    srand(time(0));
    randnumber = rand() % 3 + 1;

    cout<<" **** WELCOME TO ROCK PAPER SCIOSSOR GAME **** "<<endl;
    cout<<"1.Rock"<<endl;
    cout<<"2.Paper"<<endl;
    cout<<"3.scissor"<<endl;
    cout<<"Enter your chocie"<<endl;
    cin>>choice;
   if (choice < 1 || choice > 3) {
    cout << "Wrong input!" << endl;
    return 0;
}

if(choice == 1 && randnumber == 2){
    cout<<"You choice rock and The pc choice paper.\n You lose"<<endl;
 }
else if(choice == 2 && randnumber == 3){
    cout<<"You choice paper and The pc choice scissor.\n You lose"<<endl;
 }
if(choice == 3 && randnumber == 1){
    cout<<"You choice scissor and The pc choice rock.\n You lose"<<endl;
 }
else if(choice == 1 && randnumber == 3){
    cout<<"You choice rock and The pc choice scissor.\n You Won"<<endl;
 }
if(choice == 2 && randnumber == 1){
    cout<<"You choice paper and The pc choice rock.\n You Won"<<endl;
 }
else if(choice == 3 && randnumber == 2){
    cout<<"You choice scissor and The pc choice paper.\n You Won"<<endl;
 }
if(choice== randnumber){
    cout<<"It's draw"<<endl;
}

    return 0;
}