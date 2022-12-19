#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

using namespace std;

int main()
{   
    char response;
    int cards=0;
    int n, a, b, c, d;
    int num=0;
    srand(time(0));
    
    
    while(cards<=1)
    {
    
        
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
            cout << endl;
        }
        else
        {
            num+=11;
            cout << endl;
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
            cout << endl;
        }
        else
        {
            num+=11;
            cout << endl;
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
            cout << endl;
        }
        else
        {
            num+=11;
            cout << endl;
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
            cout << endl;
        }
        else
        {
            num+=11;
            cout << endl;
        }
    }
    
    //Two
    
        if(n==5)
    {
        cout<< "Two of Spades  ";
        num+=2;
        cout << "(" << num << ")" << endl << endl;
    }
    
        if(n==6)
    {
        cout<< "Two of Clubs  ";
        num+=2;
        cout << "(" << num << ")" << endl << endl;
    }
    
        if(n==7)
    {
        cout<< "Two of Hearts  ";
        num+=2;
        cout << "(" << num << ")" << endl << endl;
    }
    
        if(n==8)
    {
        cout<< "Two of Diamonds  ";
        num+=2;
        cout << "(" << num << ")" << endl << endl;
    }
    
    //Three
    
        if(n==9)
    {
        cout<< "Three of Spades  ";
        num+=3;
        cout << "(" << num << ")" << endl << endl;
    }
    
        if(n==10)
    {
        cout<< "Three of Clubs  ";
        num+=3;
        cout << "(" << num << ")" << endl << endl;
    }
    
        if(n==11)
    {
        cout<< "Three of Hearts  ";
        num+=3;
        cout << "(" << num << ")" << endl << endl;
    }
    
        if(n==12)
    {
        cout<< "Three of Diamonds  ";
        num+=3;
        cout << "(" << num << ")" << endl << endl;
    }
    
    //Four
    
        if(n==13)
    {
        cout<< "Four of Spades  ";
        num+=4;
        cout << "(" << num << ")" << endl << endl;
    }
    
        if(n==14)
    {
        cout<< "Four of Clubs  ";
        num+=4;
        cout << "(" << num << ")" << endl << endl;
    }
    
        if(n==15)
    {
        cout<< "Four of Hearts  ";
        num+=4;
        cout << "(" << num << ")" << endl << endl;
    }
    
        if(n==16)
    {
        cout<< "Four of Diamonds  ";
        num+=4;
        cout << "(" << num << ")" << endl << endl;
    }
    
    //Five
    
        if(n==17)
    {
        cout<< "Five of Spades  ";
        num+=5;
        cout << "(" << num << ")" << endl << endl;
    }
    
        if(n==18)
    {
        cout<< "Five of Clubs  ";
        num+=5;
        cout << "(" << num << ")" << endl << endl;
    }
    
        if(n==19)
    {
        cout<< "Five of Hearts  ";
        num+=5;
        cout << "(" << num << ")" << endl << endl;
    }
    
        if(n==20)
    {
        cout<< "Five of Diamonds  ";
        num+=5;
        cout << "(" << num << ")" << endl << endl;
    }
    
    //Six
    
        if(n==21)
    {
        cout<< "Six of Spades  ";
        num+=6;
        cout << "(" << num << ")" << endl << endl;
    }
    
        if(n==22)
    {
        cout<< "Six of Clubs  ";
        num+=6;
        cout << "(" << num << ")" << endl << endl;
    }
    
        if(n==23)
    {
        cout<< "Six of Hearts  ";
        num+=6;
        cout << "(" << num << ")" << endl << endl;
    }
    
        if(n==24)
    {
        cout<< "Six of Diamonds  ";
        num+=6;
        cout << "(" << num << ")" << endl << endl;
    }
    
    //Seven
    
        if(n==25)
    {
        cout<< "Seven of Spades  ";
        num+=7;
        cout << "(" << num << ")" << endl << endl;
    }
    
        if(n==26)
    {
        cout<< "Seven of Clubs  ";
        num+=7;
        cout << "(" << num << ")" << endl << endl;
    }
    
        if(n==27)
    {
        cout<< "Seven of Hearts  ";
        num+=7;
        cout << "(" << num << ")" << endl << endl;
    }
    
        if(n==28)
    {
        cout<< "Seven of Diamonds  ";
        num+=7;
        cout << "(" << num << ")" << endl << endl;
    }
    
    //Eight
    
        if(n==29)
    {
        cout<< "Eight of Spades  ";
        num+=8;
        cout << "(" << num << ")" << endl << endl;
    }
    
        if(n==30)
    {
        cout<< "Eight of Clubs  ";
        num+=8;
        cout << "(" << num << ")" << endl << endl;
    }
    
        if(n==31)
    {
        cout<< "Eight of Hearts  ";
        num+=8;
        cout << "(" << num << ")" << endl << endl;
    }
    
        if(n==32)
    {
        cout<< "Eight of Diamonds  ";
        num+=8;
        cout << "(" << num << ")" << endl << endl;
    }
    
    //Nine
    
        if(n==33)
    {
        cout<< "Nine of Spades  ";
        num+=9;
        cout << "(" << num << ")" << endl << endl;
    }
    
        if(n==34)
    {
        cout<< "Nine of Clubs  ";
        num+=9;
        cout << "(" << num << ")" << endl << endl;
    }
    
        if(n==35)
    {
        cout<< "Nine of Hearts  ";
        num+=9;
        cout << "(" << num << ")" << endl << endl;
    }
    
        if(n==36)
    {
        cout<< "Nine of Diamonds  ";
        num+=9;
        cout << "(" << num << ")" << endl << endl;
    }
    
    //Ten
    
        if(n==37)
    {
        cout<< "Ten of Spades  ";
        num+=10;
        cout << "(" << num << ")" << endl << endl;
    }
    
        if(n==38)
    {
        cout<< "Ten of Clubs  ";
        num+=10;
        cout << "(" << num << ")" << endl << endl;
    }
    
        if(n==39)
    {
        cout<< "Ten of Hearts  ";
        num+=10;
        cout << "(" << num << ")" << endl << endl;
    }
    
        if(n==40)
    {
        cout<< "Ten of Diamonds  ";
        num+=10;
        cout << "(" << num << ")" << endl << endl;
    }
    
    //King
    
        if(n==41)
    {
        cout<< "King of Spades  ";
        num+=10;
        cout << "(" << num << ")" << endl << endl;
    }
    
        if(n==42)
    {
        cout<< "King of Clubs  ";
        num+=10;
        cout << "(" << num << ")" << endl << endl;
    }
    
        if(n==43)
    {
        cout<< "King of Hearts  ";
        num+=10;
        cout << "(" << num << ")" << endl << endl;
    }
    
        if(n==44)
    {
        cout<< "King of Diamonds  ";
        num+=10;
        cout << "(" << num << ")" << endl << endl;
    }
    
    //Queen
    
        if(n==45)
    {
        cout<< "Queen of Spades  ";
        num+=10;
        cout << "(" << num << ")" << endl << endl;
    }
    
        if(n==46)
    {
        cout<< "Queen of Clubs  ";
        num+=10;
        cout << "(" << num << ")" << endl << endl;
    }
    
        if(n==47)
    {
        cout<< "Queen of Hearts  ";
        num+=10;
        cout << "(" << num << ")" << endl << endl;
    }
    
        if(n==48)
    {
        cout<< "Queen of Diamonds  ";
        num+=10;
        cout << "(" << num << ")" << endl << endl;
    }
    
    //Jack
    
        if(n==49)
    {
        cout<< "Jack of Spades  ";
        num+=10;
        cout << "(" << num << ")" << endl << endl;
    }
    
        if(n==50)
    {
        cout<< "Jack of Clubs  ";
        num+=10;
        cout << "(" << num << ")" << endl << endl;
    }
    
        if(n==51)
    {
        cout<< "Jack of Hearts  ";
        num+=10;
        cout << "(" << num << ")" << endl << endl;
    }
    
        if(n==52)
    {
        cout<< "Jack of Diamonds  ";
        num+=10;
        cout << "(" << num << ")" << endl << endl;
    }
        cards++;
    }
    
    cout << "Dealer:- Do you want another card? (Type Y for Yes and N for No)" <<endl << endl;
    cout<<"You:- ";
    cin >> response;
    
    if (response == 'Y') 
    {     
        cout << endl << endl;
          cout << "Dealer:- Another card then" << endl << endl;
          cards--;
    }
    else     
        {                  
            if (response == 'N')         
            {   
                cout << endl << endl;
                cout << "Dealer:- My turn then" << endl << endl;         
            }         
            else         
            {   
                cout << endl << endl;
                cout <<"Dealer:- I don't think I understand" << endl << endl;  
                
            }               
            
        }
    
    
    if(num<=21)
    {
        cout << endl << endl << "-----You won!-----";
    }
    else
    {
        cout << endl << endl << "-----You lost!-----";
    }
    
    cout << endl << endl << "    Total:" << num;
    
    


    return 0;
}
