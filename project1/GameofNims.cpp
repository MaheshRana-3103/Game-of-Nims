#include<iostream>
#include<cstdlib>
#include<ctime>
#include<cctype>
using namespace std;
string findplayername(string names[],bool player1turn );
int main()
{  string playernames[2];
  cout<<"Player1,please enter your name"<<endl;
  cin>>playernames[0];
  cout<<"Thanks and Good luck!\n";
   cout<<"Player2,please enter your name"<<endl;
  cin>>playernames[1];
  cout<<"Thanks and Good luck!\n";
  char userchoice;
  int ChipsInPiles=0;
  int piles=0;
  int Chips_Taken=0;
  srand(time(0));
  do
  {  bool gameover=false;bool player1turn=true;
  ChipsInPiles=(rand()%100+1);
  cout<<"This round will start with"<<" "<<ChipsInPiles<<" "<<"chips in the pile\n";
  while(gameover==false)
  {
  do
  {cout<<findplayername(playernames,player1turn)<<" "<<"how many chips would you like ?\n";
  cout<<"you can take up to:";
  if((static_cast<int>(ChipsInPiles*0.5))==0)
  {
    cout<<"1"<<"\n";
  }
  else
  {
    cout<<static_cast<int>(ChipsInPiles*0.5)<<"\n";
  }
  
  cin>>Chips_Taken;
  }while(Chips_Taken>(static_cast<int>(ChipsInPiles*0.5))&&(ChipsInPiles>1));
  ChipsInPiles=ChipsInPiles-Chips_Taken;
  cout<<"There are"<<" "<<ChipsInPiles<<" "<<"left in the pile"<<endl;
 if(ChipsInPiles==0)
 {
  gameover=true;
  cout<<findplayername(playernames,player1turn)<<" "<<",Congratulation,you won\n";
 }
 else
 {
    player1turn = !player1turn;
 }
 
}cout<<"do you wish to play again ?(y/n)"<<endl;
 cin>>userchoice;
 userchoice=toupper(userchoice);
  }while(userchoice=='Y');
  }
  string findplayername(string names[],bool playerturn)
  {if(playerturn==true)
   { return names[0];}
    else
    {return names[1];}}