#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>
using namespace std;

using namespace std;

int main()
{
    int n, a, b, c, d;
    int num=0;
    srand(time(0));
    n = (rand() % 52+1 );
n=1;


    //Ace

        if(n==1)
    {
        cout<< "Ace of Spades"<< endl << endl;
        
        cout <<"Dealer:- Do you want your Ace to be an Eleven or an One?(Type 11 or 1)"<<endl<<endl<<"You:- ";
        cin >> a;
        
        if(a==1)
        {
            num+=1;
        }
        else
        {
            num+=11;
        }
    }
    
        if(n==2)
    {
        cout<< "Ace of Clubs";
    }
    
        if(n==3)
    {
        cout<< "Ace of Hearts";
    }
    
        if(n==4)
    {
        cout<< "Ace of Diamonds";
    }
    
    //Two
    
        if(n==5)
    {
        cout<< "Two of Spades";
    }
    
        if(n==6)
    {
        cout<< "Two of Clubs";
    }
    
        if(n==7)
    {
        cout<< "Two of Hearts";
    }
    
        if(n==8)
    {
        cout<< "Two of Diamonds";
    }
    
    //Three
    
        if(n==9)
    {
        cout<< "Three of Spades";
    }
    
        if(n==10)
    {
        cout<< "Three of Clubs";
    }
    
        if(n==11)
    {
        cout<< "Three of Hearts";
    }
    
        if(n==12)
    {
        cout<< "Three of Diamonds";
    }
    
    //Four
    
        if(n==13)
    {
        cout<< "Four of Spades";
    }
    
        if(n==14)
    {
        cout<< "Four of Clubs";
    }
    
        if(n==15)
    {
        cout<< "Four of Hearts";
    }
    
        if(n==16)
    {
        cout<< "Four of Diamonds";
    }
    
    //Five
    
        if(n==17)
    {
        cout<< "Five of Spades";
    }
    
        if(n==18)
    {
        cout<< "Five of Clubs";
    }
    
        if(n==19)
    {
        cout<< "Five of Hearts";
    }
    
        if(n==20)
    {
        cout<< "Five of Diamonds";
    }
    
    //Six
    
        if(n==21)
    {
        cout<< "Six of Spades";
    }
    
        if(n==22)
    {
        cout<< "Six of Clubs";
    }
    
        if(n==23)
    {
        cout<< "Six of Hearts";
    }
    
        if(n==24)
    {
        cout<< "Six of Diamonds";
    }
    
    //Seven
    
        if(n==25)
    {
        cout<< "Seven of Spades";
    }
    
        if(n==26)
    {
        cout<< "Seven of Clubs";
    }
    
        if(n==27)
    {
        cout<< "Seven of Hearts";
    }
    
        if(n==28)
    {
        cout<< "Seven of Diamonds";
    }
    
    //Eight
    
        if(n==29)
    {
        cout<< "Eight of Spades";
    }
    
        if(n==30)
    {
        cout<< "Eight of Clubs";
    }
    
        if(n==31)
    {
        cout<< "Eight of Hearts";
    }
    
        if(n==32)
    {
        cout<< "Eight of Diamonds";
    }
    
    //Nine
    
        if(n==33)
    {
        cout<< "Nine of Spades";
    }
    
        if(n==34)
    {
        cout<< "Nine of Clubs";
    }
    
        if(n==35)
    {
        cout<< "Nine of Hearts";
    }
    
        if(n==36)
    {
        cout<< "Nine of Diamonds";
    }
    
    //Ten
    
        if(n==37)
    {
        cout<< "Ten of Spades";
    }
    
        if(n==38)
    {
        cout<< "Ten of Clubs";
    }
    
        if(n==39)
    {
        cout<< "Ten of Hearts";
    }
    
        if(n==40)
    {
        cout<< "Ten of Diamonds";
    }
    
    //King
    
        if(n==41)
    {
        cout<< "King of Spades";
    }
    
        if(n==42)
    {
        cout<< "King of Clubs";
    }
    
        if(n==43)
    {
        cout<< "King of Hearts";
    }
    
        if(n==44)
    {
        cout<< "King of Diamonds";
    }
    
    //Queen
    
        if(n==45)
    {
        cout<< "Queen of Spades";
    }
    
        if(n==46)
    {
        cout<< "Queen of Clubs";
    }
    
        if(n==47)
    {
        cout<< "Queen of Hearts";
    }
    
        if(n==48)
    {
        cout<< "Queen of Diamonds";
    }
    
    //Jack
    
        if(n==49)
    {
        cout<< "Jack of Spades";
    }
    
        if(n==50)
    {
        cout<< "Jack of Clubs";
    }
    
        if(n==51)
    {
        cout<< "Jack of Hearts";
    }
    
        if(n==52)
    {
        cout<< "Jack of Diamonds";
    }
    
    cout << num;
    
    


    return 0;
}