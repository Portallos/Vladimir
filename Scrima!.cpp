#include <iostream> //default

#include <cstdlib> //wait
#include <unistd.h>

#include <ctime> //random
#include <cstdlib>

 using namespace std;

 
int main () 
{



int piste[16];
  
int precision, mental, chance, reaction, fitness, o_precision, o_mental, o_chance, o_reaction, o_fitness;

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

piste[1]=0;
piste[2]=0;
piste[3]=0;
piste[4]=0;
piste[5]=0;
piste[6]=2;
piste[7]=0;
piste[8]=0;
piste[9]=0;
piste[10]=0;
piste[11]=1;
piste[12]=0;
piste[13]=0;
piste[14]=0;
piste[15]=0;
piste[16]=0;

while(match_finish==0)
{
   if(score==5)
   {
       match_finish++;
   }
   
   if(o_score==5)
   {
       match_finish++;
   }
   //piste 1
   cout<<" ___"<<endl;
   if(piste[1]==2)
   {
   cout<<"|🤺  |  <-- Opponent"<<endl;
   }
   else
   {
   cout<<"|___|"<<endl;
   }
   
   
   //piste 2
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
       cout<<"|▧▧▧|"<<endl;
       }
   }
   
   //piste 3

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
       cout<<"|▧▧▧|"<<endl;
       }
   }
   
   //piste 4
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
       cout<<"|‾‾‾|"<<endl;
       }
   }
   
   
   //piste 5
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
       cout<<"|   |"<<endl;
       }
   }
   
   
   //piste 6
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
       cout<<"|___|"<<endl;
       }
   }
   
   
   //piste 7
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
   
   
   //piste 8
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
   
   
   //piste 9
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
   
   
   //piste 10
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
       cout<<"|   |"<<endl;
       }
   }
   
   
   //piste 11
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
       cout<<"|‾‾‾|"<<endl;
       }
   }
   
   
   //piste 12
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
       cout<<"|   |"<<endl;
       }
   }
   
   
   //piste 13
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
       cout<<"|___|"<<endl;
       }
   }
   
   
   //piste 14
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
       cout<<"|▧▧▧|"<<endl;
       }
   }
   
   
   //piste 15
   if(piste[15]==2)
   {
   cout<<"|🤺  |  <-- Opponent"<<endl; 
   }
   else
   {
       if(piste[15]==1)
       {
       cout<<"|🤺  |  <-- You"<<endl;
       }
       else
       {
       cout<<"|▧▧▧|"<<endl;
       }
   }
   
   //piste 16
   if(piste[16]==1)
   {
   cout<<"|🤺  |  <-- You"<<endl;
   }
   else
   {
   cout<<"|‾‾‾|"<<endl;
   }
   cout<<" ‾‾‾"<<endl<<endl<<endl<<endl<<endl;
   usleep (1000000);
}
match_finish=0;
o_score=0;
score=0;
 
 
 
return 0;

}
