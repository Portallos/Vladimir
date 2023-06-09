#include <iostream> //default

#include <thread> //ignore cin

#include <cstdlib> //wait
#include <unistd.h>

#include <ctime> //random

#include <chrono> //sleep_for

#include <vector> //piste

using namespace std;

void getInput(char& n)
{
    cin >> n; 
}

int main () 
{
  
int precision, mental, chance, reaction, fitness;
int o_precision, o_mental, o_chance, o_reaction, o_fitness;

int o_move;

int score, o_score, match_finish=0;

//intro

cout << endl << endl << endl << endl << endl << endl << endl << "S";
  
usleep (750000);
  
cout << endl << endl << endl << endl << endl << endl << endl << "Sc";
  
usleep (750000);
  
cout << endl << endl << endl << endl << endl << endl << endl << "Scr";
  
usleep (750000);
  
cout << endl << endl << endl << endl << endl << endl << endl << "Scri";
  
usleep (750000);
  
cout << endl << endl << endl << endl << endl << endl << endl << "Scrim";
  
usleep (750000);
  
cout << endl << endl << endl << endl << endl << endl << endl << "Scrima";
  
usleep (750000);
  
cout << endl << endl << endl << endl << endl << endl << endl << "Scrima!";

usleep (750000);

cout << endl << endl << endl << endl << endl << endl;
  
 
cout << "Precision: " << endl;
  
cin >> precision;
  
cout << "Mental: " << endl;
  
cin >> mental;
  
cout << "Chance: " << endl;
  
cin >> chance;
  
cout << "Reaction: " << endl;
  
cin >> reaction;
  
cout << "Fitness: " << endl;
  
cin >> fitness;

std::vector<int> piste(16, 0);



int o_position = 5;

piste[o_position] = 2;

int position = 10;

piste[position] = 1;



char input;

while(match_finish==0)
{
   cout << endl << endl << endl;
   //piste 1
   cout<<" ___"<<endl;
   if(piste[0]==2)
   {
   cout<<"|🤺  |  <-- Opponent"<<endl;
   }
   else
   {
   cout<<"|   |"<<endl;
   }
   
   
   //piste 2
   if(piste[1]==2)
   {
   cout<<"|🤺  |  <-- Opponent"<<endl; 
   }
   else
   {
       if(piste[1]==1)
       {
       cout<<"|🤺  |  <-- You"<<endl;
       }
       else
       {
       cout<<"|   |"<<endl;
       }
   }
   
   //piste 3

   if(piste[2]==2)
   {
   cout<<"|🤺  |  <-- Opponent"<<endl; 
   }
   else
   {
       if(piste[2]==1)
       {
       cout<<"|🤺  |  <-- You"<<endl;
       }
       else
       {
       cout<<"|   |"<<endl;
       }
   }
   
   //piste 4
   if(piste[3]==2)
   {
   cout<<"|🤺  |  <-- Opponent"<<endl; 
   }
   else
   {
       if(piste[3]==1)
       {
       cout<<"|🤺  |  <-- You"<<endl;
       }
       else
       {
       cout<<"|‾‾‾|"<<endl;
       }
   }
   
   
   //piste 5
   if(piste[4]==2)
   {
   cout<<"|🤺  |  <-- Opponent"<<endl; 
   }
   else
   {
       if(piste[4]==1)
       {
       cout<<"|🤺  |  <-- You"<<endl;
       }
       else
       {
       cout<<"|   |"<<endl;
       }
   }
   
   
   //piste 6
   if(piste[5]==2)
   {
   cout<<"|🤺  |  <-- Opponent"<<endl; 
   }
   else
   {
       if(piste[5]==1)
       {
       cout<<"|🤺  |  <-- You"<<endl;
       }
       else
       {
       cout<<"|___|"<<endl;
       }
   }
   
   
   //piste 7
   if(piste[6]==2)
   {
   cout<<"|🤺  |  <-- Opponent"<<endl; 
   }
   else
   {
       if(piste[6]==1)
       {
       cout<<"|🤺  |  <-- You"<<endl;
       }
       else
       {
       cout<<"|   |"<<endl;
       }
   }
   
   
   //piste 8
   if(piste[7]==2)
   {
   cout<<"|🤺  |  <-- Opponent"<<endl; 
   }
   else
   {
       if(piste[7]==1)
       {
       cout<<"|🤺  |  <-- You"<<endl;
       }
       else
       {
       cout<<"|   |"<<endl;
       }
   }
   
   
   //piste 9
   if(piste[8]==2)
   {
   cout<<"|🤺  |  <-- Opponent"<<endl; 
   }
   else
   {
       if(piste[8]==1)
       {
       cout<<"|🤺  |  <-- You"<<endl;
       }
       else
       {
       cout<<"|   |"<<endl;
       }
   }
   
   
   //piste 10
   if(piste[9]==2)
   {
   cout<<"|🤺  |  <-- Opponent"<<endl; 
   }
   else
   {
       if(piste[9]==1)
       {
       cout<<"|🤺  |  <-- You"<<endl;
       }
       else
       {
       cout<<"|   |"<<endl;
       }
   }
   
   
   //piste 11
   if(piste[10]==2)
   {
   cout<<"|🤺  |  <-- Opponent"<<endl; 
   }
   else
   {
       if(piste[10]==1)
       {
       cout<<"|🤺  |  <-- You"<<endl;
       }
       else
       {
       cout<<"|‾‾‾|"<<endl;
       }
   }
   
   
   //piste 12
   if(piste[11]==2)
   {
   cout<<"|🤺  |  <-- Opponent"<<endl; 
   }
   else
   {
       if(piste[11]==1)
       {
       cout<<"|🤺  |  <-- You"<<endl;
       }
       else
       {
       cout<<"|   |"<<endl;
       }
   }
   
   
   //piste 13
   if(piste[12]==2)
   {
   cout<<"|🤺  |  <-- Opponent"<<endl; 
   }
   else
   {
       if(piste[12]==1)
       {
       cout<<"|🤺  |  <-- You"<<endl;
       }
       else
       {
       cout<<"|___|"<<endl;
       }
   }
   
   
   //piste 14
   if(piste[13]==2)
   {
   cout<<"|🤺  |  <-- Opponent"<<endl; 
   }
   else
   {
       if(piste[13]==1)
       {
       cout<<"|🤺  |  <-- You"<<endl;
       }
       else
       {
       cout<<"|   |"<<endl;
       }
   }
   
   
   //piste 15
   if(piste[14]==2)
   {
   cout<<"|🤺  |  <-- Opponent"<<endl; 
   }
   else
   {
       if(piste[14]==1)
       {
       cout<<"|🤺  |  <-- You"<<endl;
       }
       else
       {
       cout<<"|   |"<<endl;
       }
   }
   
   //piste 16
   if(piste[15]==1)
   {
   cout<<"|🤺  |  <-- You"<<endl;
   }
   else
   {
   cout<<"|‾‾‾|"<<endl;
   }
   cout<<" ‾‾‾"<<endl<<endl<<endl<<endl<<endl;
   
   
   if(score==5)
   {
       match_finish++;
   }
   
   
   if(o_score==5)
   {
       match_finish++;
   }
   
   
   
   input = ' ';
   
   o_move =3;
   
   
   
   std::thread inputThread(getInput, std::ref(input));
   std::this_thread::sleep_for(std::chrono::seconds(1));
   
   if (inputThread.joinable()) {
        inputThread.detach(); 
   }
   
    srand(time(0));
    o_move = (rand() % 3+1 );
   
   //Your Movement
   
   if (input == 'w' && position > 0 && position - 1 != o_position)
   {

            piste[position] = 0; // Clear the current position
            position--; // Move the 1 up
            piste[position] = 1; // Update the new position with
    } 
    else
    {
        if (input == 's' && position < 15 && position + 1 != o_position)
        {
            piste[position] = 0; // Clear the current position
            position++; // Move the 1 down
            piste[position] = 1; // Update the new position with 1
        }
    }
   
   
    //Opponent Movement
   
    if (o_move == 1 && o_position > 0 && o_position - 1 != position)
    {

            piste[o_position] = 0; // Clear the current position
            o_position--; // Move the 1 up
            piste[o_position] = 2; // Update the new position with
    } 
    else
    {
        if (o_move == 2 && o_position < 15 && o_position + 1 != position)
        {
            piste[o_position] = 0; // Clear the current position
            o_position++; // Move the 1 down
            piste[o_position] = 2; // Update the new position with 1
        }
    }
   
   
   
    if(o_position==0)
    {
        score++;
    }
    
    if(position==15)
    {
        o_score++;
    }
    
    //Finish
    
    if(score==5)
   {
       match_finish++;
       cout<<"You Won!";
   }
   
   
   if(o_score==5)
   {
       match_finish++;
       cout<<"You Lost!";
   }
}

match_finish=0;
o_score=0;
score=0;
 
 
 
return 0;

}
