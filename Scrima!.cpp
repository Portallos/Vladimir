#include <iostream> //default

#include <cstdlib> //wait
#include <unistd.h>

#include <ctime> //random
#include <cstdlib>

 using namespace std;

 
int
main () 
{

//

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
  
cout << "mental: " << endl;
  
cin >> mental;
  
cout << "chance: " << endl;
  
cin >> chance;
  
cout << "reaction: " << endl;
  
cin >> reaction;
  
cout << "fitness: " << endl;
  
cin >> fitness;

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
   cout<<" ˍˍˍ"<<endl;
   cout<<"| " << piste[1] << " |"<<endl;
   cout<<"| " << piste[2] << " |"<<endl;
   cout<<"| " << piste[3] << " |"<<endl;
   cout<<"| " << piste[4] << " |"<<endl;
   cout<<"| " << piste[5] << " |"<<endl;
   cout<<"| " << piste[6] << " |"<<endl;
   cout<<"| " << piste[7] << " |"<<endl;
   cout<<"| " << piste[8] << " |"<<endl;
   cout<<"| " << piste[9] << " |"<<endl;
   cout<<"| " << piste[10] << " |"<<endl;
   cout<<"| " << piste[11] << " |"<<endl;
   cout<<"| " << piste[12] << " |"<<endl;
   cout<<"| " << piste[13] << " |"<<endl;
   cout<<"| " << piste[14] << " |"<<endl;
   cout<<"| " << piste[15] << " |"<<endl;
   cout<<"| " << piste[16] << " |"<<endl;
   cout<<" ‾‾‾"<<endl;
   usleep (500000);
}
match_finish==0;
 
 
 
return 0;

}
