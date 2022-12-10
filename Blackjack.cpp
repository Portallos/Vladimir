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
    while(num<=20){
    n = (rand() % 52+1 );


    //Ace

        if(n==1)
    {
        cout<< "Ace of Spades  "<< endl << endl;
        
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
        cout<< "Ace of Clubs  "<< endl << endl;
        
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
    
        if(n==3)
    {
        cout<< "Ace of Hearts  "<< endl << endl;
        
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
    
        if(n==4)
    {
        cout<< "Ace of Diamonds  "<< endl << endl;
        
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
    
    //Two
    
        if(n==5)
    {
        cout<< "Two of Spades  "<< "(" << num << ")" << endl << endl;
        num+=2;
    }
    
        if(n==6)
    {
        cout<< "Two of Clubs  "<< "(" << num << ")" << endl << endl;
        num+=2;
    }
    
        if(n==7)
    {
        cout<< "Two of Hearts  "<< "(" << num << ")" << endl << endl;
        num+=2;
    }
    
        if(n==8)
    {
        cout<< "Two of Diamonds  "<< "(" << num << ")" << endl << endl;
        num+=2;
    }
    
    //Three
    
        if(n==9)
    {
        cout<< "Three of Spades  "<< "(" << num << ")" << endl << endl;
        num+=3;
    }
    
        if(n==10)
    {
        cout<< "Three of Clubs  "<< "(" << num << ")" << endl << endl;
        num+=3;
    }
    
        if(n==11)
    {
        cout<< "Three of Hearts  "<< "(" << num << ")" << endl << endl;
        num+=3;
    }
    
        if(n==12)
    {
        cout<< "Three of Diamonds  "<< "(" << num << ")" << endl << endl;
        num+=3;
    }
    
    //Four
    
        if(n==13)
    {
        cout<< "Four of Spades  "<< "(" << num << ")" << endl << endl;
        num+=4;
    }
    
        if(n==14)
    {
        cout<< "Four of Clubs  "<< "(" << num << ")" << endl << endl;
        num+=4;
    }
    
        if(n==15)
    {
        cout<< "Four of Hearts  "<< "(" << num << ")" << endl << endl;
        num+=4;
    }
    
        if(n==16)
    {
        cout<< "Four of Diamonds  "<< "(" << num << ")" << endl << endl;
        num+=4;
    }
    
    //Five
    
        if(n==17)
    {
        cout<< "Five of Spades  "<< "(" << num << ")" << endl << endl;
        num+=5;
    }
    
        if(n==18)
    {
        cout<< "Five of Clubs  "<< "(" << num << ")" << endl << endl;
        num+=5;
    }
    
        if(n==19)
    {
        cout<< "Five of Hearts  "<< "(" << num << ")" << endl << endl;
        num+=5;
    }
    
        if(n==20)
    {
        cout<< "Five of Diamonds  "<< "(" << num << ")" << endl << endl;
        num+=5;
    }
    
    //Six
    
        if(n==21)
    {
        cout<< "Six of Spades  "<< "(" << num << ")" << endl << endl;
        num+=6;
    }
    
        if(n==22)
    {
        cout<< "Six of Clubs  "<< "(" << num << ")" << endl << endl;
        num+=6;
    }
    
        if(n==23)
    {
        cout<< "Six of Hearts  "<< "(" << num << ")" << endl << endl;
        num+=6;
    }
    
        if(n==24)
    {
        cout<< "Six of Diamonds  "<< "(" << num << ")" << endl << endl;
        num+=6;
    }
    
    //Seven
    
        if(n==25)
    {
        cout<< "Seven of Spades  "<< "(" << num << ")" << endl << endl;
        num+=7;
    }
    
        if(n==26)
    {
        cout<< "Seven of Clubs  "<< "(" << num << ")" << endl << endl;
        num+=7;
    }
    
        if(n==27)
    {
        cout<< "Seven of Hearts  "<< "(" << num << ")" << endl << endl;
        num+=7;
    }
    
        if(n==28)
    {
        cout<< "Seven of Diamonds  "<< "(" << num << ")" << endl << endl;
        num+=7;
    }
    
    //Eight
    
        if(n==29)
    {
        cout<< "Eight of Spades  "<< "(" << num << ")" << endl << endl;
        num+=8;
    }
    
        if(n==30)
    {
        cout<< "Eight of Clubs  "<< "(" << num << ")" << endl << endl;
        num+=8;
    }
    
        if(n==31)
    {
        cout<< "Eight of Hearts  "<< "(" << num << ")" << endl << endl;
        num+=8;
    }
    
        if(n==32)
    {
        cout<< "Eight of Diamonds  "<< "(" << num << ")" << endl << endl;
        num+=8;
    }
    
    //Nine
    
        if(n==33)
    {
        cout<< "Nine of Spades  "<< "(" << num << ")" << endl << endl;
        num+=9;
    }
    
        if(n==34)
    {
        cout<< "Nine of Clubs  "<< "(" << num << ")" << endl << endl;
        num+=9;
    }
    
        if(n==35)
    {
        cout<< "Nine of Hearts  "<< "(" << num << ")" << endl << endl;
        num+=9;
    }
    
        if(n==36)
    {
        cout<< "Nine of Diamonds  "<< "(" << num << ")" << endl << endl;
        num+=9;
    }
    
    //Ten
    
        if(n==37)
    {
        cout<< "Ten of Spades  "<< "(" << num << ")" << endl << endl;
        num+=10;
    }
    
        if(n==38)
    {
        cout<< "Ten of Clubs  "<< "(" << num << ")" << endl << endl;
        num+=10;
    }
    
        if(n==39)
    {
        cout<< "Ten of Hearts  "<< "(" << num << ")" << endl << endl;
        num+=10;
    }
    
        if(n==40)
    {
        cout<< "Ten of Diamonds  "<< "(" << num << ")" << endl << endl;
        num+=10;
    }
    
    //King
    
        if(n==41)
    {
        cout<< "King of Spades  "<< "(" << num << ")" << endl << endl;
        num+=10;
    }
    
        if(n==42)
    {
        cout<< "King of Clubs  "<< "(" << num << ")" << endl << endl;
        num+=10;
    }
    
        if(n==43)
    {
        cout<< "King of Hearts  "<< "(" << num << ")" << endl << endl;
        num+=10;
    }
    
        if(n==44)
    {
        cout<< "King of Diamonds  "<< "(" << num << ")" << endl << endl;
        num+=10;
    }
    
    //Queen
    
        if(n==45)
    {
        cout<< "Queen of Spades  "<< "(" << num << ")" << endl << endl;
        num+=10;
    }
    
        if(n==46)
    {
        cout<< "Queen of Clubs  "<< "(" << num << ")" << endl << endl;
        num+=10;
    }
    
        if(n==47)
    {
        cout<< "Queen of Hearts  "<< "(" << num << ")" << endl << endl;
        num+=10;
    }
    
        if(n==48)
    {
        cout<< "Queen of Diamonds  "<< "(" << num << ")" << endl << endl;
        num+=10;
    }
    
    //Jack
    
        if(n==49)
    {
        cout<< "Jack of Spades  "<< "(" << num << ")" << endl << endl;
        num+=10;
    }
    
        if(n==50)
    {
        cout<< "Jack of Clubs  "<< "(" << num << ")" << endl << endl;
        num+=10;
    }
    
        if(n==51)
    {
        cout<< "Jack of Hearts  "<< "(" << num << ")" << endl << endl;
        num+=10;
    }
    
        if(n==52)
    {
        cout<< "Jack of Diamonds  " << "(" << num << ")" << endl << endl;
        num+=10;
    }
    
    }
    
    if(num<=21)
    {
        cout<<"You won!";
    }
    else
    {
        cout<<"You lost!";
    }
    
    cout << endl << "Total:" << num;
    
    


    return 0;
}
