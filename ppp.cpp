#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;
char turn='X'; //declared global because used in both classes

bool draw=false;//shuru hote hy khtm

class Tictactoe{  // tictactoe game of 3 by 3 grid

private:
char board[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}}; //declared board

public:

void display_board() //displays the 3 by 3 board
{
 system("cls");//clears the screen
 cout<<"\t\t\t**TIC TAC TOE*"<<endl;
 cout<<" Player-1 [X]"<<endl<<" Player-2 [O]"<<endl;
 cout<<"\n\n\n";
 cout<<"\t\t\t      |      | "<<endl;
 cout<<"\t\t\t    "<<board[0][0]<<" |    "<<board[0][1]<<" |  "<<board[0][2]<< endl;
 cout<<"\t\t\t______|______|______"<<endl;
 cout<<"\t\t\t      |      | "<<endl;
 cout<<"\t\t\t    "<<board[1][0]<<" |    "<<board[1][1]<<" |  "<<board[1][2]<< endl;
 cout<<"\t\t\t______|______|_______"<<endl;
 cout<<"\t\t\t      |      | "<<endl;
 cout<<"\t\t\t    "<<board[2][0]<<" |    "<<board[2][1]<<" |  "<<board[2][2]<< endl;
 cout<<"\t\t\t      |      | "<<endl;
}
void player_turn() //takes turn for both players accordingly


{

 int row,column;
 c://label of goto statement
  
  char choice;
 if(turn=='X'){
 	cout<<"\n\tPlayer-1 [X] Turn : "<<endl;
	cin >> choice; 	
 }

 

 if(turn=='O'){
 	cout<<"\n\tPlayer-2 [O] Turn : "<<endl;
	 cin >> choice;	
 }

 switch(choice)
 {
  case '1':
  row=0; column=0;
  break;
  case '2':
  row=0; column=1;
  break;
  case '3':
  row=0; column=2;
  break;
  case '4':
  row=1; column=0;
  break;
  case '5':
  row=1; column=1;
  break;
  case '6':
  row=1; column=2;
  break;
  case '7':
  row=2; column=0;
  break;
  case '8':
  row=2; column=1;
  break;
  case '9':
  row=2; column=2;
  break;
  default:
  cout<<"Invalid Choice!!! Enter the Valid Choice!!\n"<<endl;
  goto c;//goto statement

 }
 display_board();
 if( turn=='X' && board[row][column]!='X' && board[row] [column]!='O') //checking if the board is empty
 {
  board[row][column]='X';
  turn='O';
 }
 else if(turn=='O' && board[row][column]!='X' && board[row] [column]!='O')
 {
 board[row][column]='O';
  turn='X';
 }
 else
 {
  cout<<"Box already Filled!!!\nPlease try Again...\n\n";
  player_turn();
 }
display_board();
}
bool game_over()
{
//check win
for (int i=0;i<3;i++)//row
{
if(board[i][0] == board[i][1] && board[i][0] == board[i][2] || board[0][i] == board[1][i] && board[0][i] == board[2][i])
return false;
if(board[0][0]==board[1][1]&&board[0][0]==board[2][2] || board[0][2]==board[1][1]&&board[0][2]==board[2][0])
return false;
}
//check game continue
for (int i=0;i<3;i++) //row
for (int j=0;j<3;j++) //columns
if(board[i][j]!='X' && board [i][j]!='O')
return true;
//draw
draw= true;
return false;
}
};



class Tic_Tac_Toe4{
private:
char board[4][4]={{'a','b','c','d'},{'e','f','g','h'},{'i','j','k','l'},{'m','n','o','p'}};
public:
void display_board()
{
system("cls");//clears the screen
cout<<"\t\t\t\t\t*TIC TAC TOE"<<endl;
cout<<"\t*Player-1 [X]"<<endl<<"\t*Player-2 [O]"<<endl;
cout<<"\n\n\n\n";
cout<<"\t\t\t      |      |      |"<<endl;
cout<<"\t\t\t    "<<board[0][0]<<" |    "<<board[0][1]<<" |  "<<board[0][2]<<"   |   "<<board[0][3] <<endl;
cout<<"\t\t\t______|______|______|_____"<<endl;
cout<<"\t\t\t      |      |      |"<<endl;
cout<<"\t\t\t    "<<board[1][0]<<" |    "<<board[1][1]<<" |  "<<board[1][2]<<"   |   "<<board[1][3] <<endl;
cout<<"\t\t\t______|______|______|______"<<endl;
cout<<"\t\t\t      |      |      |"<<endl;
cout<<"\t\t\t    "<<board[2][0]<<" |    "<<board[2][1]<<" |  "<<board[2][2]<<"   |   "<<board[2][3] <<endl;
cout<<"\t\t\t______|______|______|_______"<<endl;
cout<<"\t\t\t      |      |      |"<<endl;
cout<<"\t\t\t    "<<board[3][0]<<" |    "<<board[3][1]<<" |  "<<board[3][2]<<"   |   "<<board[3][3] <<endl;
cout<<"\t\t\t      |      |      |      "<<endl;
cout<<"\n\n";
}
void player_turn()
{
char choice;
 int row,column;
 c://label of goto statement
 if(turn=='X')

 cout<<"\n\tPlayer-1 [X] Turn : "<<endl;

 if(turn=='O')

  cout<<"\n\tPlayer-2 [O] Turn : "<<endl;

 cin>>choice;
 switch(choice)
 {
  case 'a':
  row=0; column=0;
  break;
  case 'b':
  row=0; column=1;
  break;
  case 'c':
  row=0; column=2;
  break;
  case 'd':
  row=0; column=3;
  break;
  case 'e':
  row=1; column=0;
  break;
  case 'f':
  row=1; column=1;
  break;
  case 'g':
  row=1; column=2;
  break;
  case 'h':
  row=1; column=3;
  break;
  case 'i':
  row=2; column=0;
  break;
  case 'j':
  row=2; column=1;
  break;
  case 'k':
  row=2; column=2;
  break;
  case 'l':
  row=2; column=3;
  break;
  case 'm':
  row=3; column=0;
  break;
  case 'n':
  row=3; column=1;
  break;
  case 'o':
  row=3; column=2;
  break;
  case 'p':
  row=3; column=3;
  break;
  default:
  cout<<"Invalid Choice!!! Enter the Valid Choice!!\n"<<endl;
  goto c;//goto statement
 }
 display_board();
  if( turn=='X' && board[row][column]!='X' && board[row] [column]!='O') //checking if the board is empty
 {
  board[row][column]='X';
  turn='O';
 }
 else if(turn=='O' && board[row][column]!='X' && board[row] [column]!='O')
 {
 board[row][column]='O';
  turn='X';
 }
 else
 {
  cout<<"Box already Filled!!!\nPlease try Again...\n\n";
  player_turn();
 }
display_board();
}
bool game_over()
{
//check win
for (int i=0;i<4;i++)//row
{
if(board[i][0] == board[i][1] && board[i][0] == board[i][2] && board[i][0] == board[i][3] || board[0][i] == board[1][i] && board[0][i] == board[2][i] && board[0][i] == board[3][i] )
return false;
if(board[0][0] == board[1][1] &&  board[0][0] == board[2][2] && board[0][0] == board[3][3]  || board[0][3]==board[1][2] && board[0][3] == board[2][1] && board[0][3]==board[3][0] )
return false;

}
//check game continue
for (int i=0;i<4;i++) //row
for (int j=0;j<4;j++) //columns
if(board[i][j]!='X' && board [i][j]!='O')
return true;
//draw
draw= true;
return false;
}


};





int main()
{

 a:
string choice="0";

cout<<"\t\t\t**TIC TAC TOE*"<<endl;
cout<<"\t*Player-1 [X]"<<endl<<"\t*Player-2 [O]"<<endl;
cout<<"\n\n\n\n";
cout<<"1. 3x3"<<endl;
cout<<"2. 4x4"<<endl;

cin >> choice;

if(choice=="1"){
	Tictactoe t1;


 while(t1.game_over()){
t1.display_board();
t1.player_turn();
t1.game_over();
}
if(turn=='X' && draw == false)
cout<<"Player-2 [O] Winner!!!\n";
else if(turn=='O' && draw == false)
cout<<"Player-1 [X] Winner!!!\n";
else
cout<<"Game Draw!!!\n";

}

else if(choice=="2")
{
	Tic_Tac_Toe4 t4;

while(t4.game_over()){
t4.display_board();
t4.player_turn();
t4.game_over();

}
if(turn=='X' && draw == false){

cout<<"Player-2 [O] Winner!!!\n";
}
else if(turn=='O' && draw == false)

{
cout<<"Player-1 [X] Winner!!!\n";

}
else
{
cout<<"Game Draw!!!\n";

}
}
else {
	cout<<"ENTER VALID CHOICE\n";
	goto a;
}
b:
cout<<"enter 1 if you want to play again and 0 to exit";
int rplay;
cin>>rplay;
if(rplay==1)
{ goto a;
}
else if(rplay==0) {

exit(0);
}
else{
cout<<"enter valid value!!";
goto b;
}
return 0;
}
