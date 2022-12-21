#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{   
    char response;
    int understand=0;
    int num=0;
    
while(understand==0)
{
    
    while(understand=1)
    {
    cout << endl << endl << "Do you want to continue? (Type Y for Yes and N for No)" <<endl << endl;
    cout<<"You:- ";
    cin >> response;
    
    if (response == 'Y') 
    {     
        cout << endl << endl;
          cout << "Dealer:- Another card then" << endl << endl;
          break;
        
    }
    else     
        {                  
            if (response == 'N')         
            {   
                cout << endl << endl;
                cout << "Ok" << endl << endl;
                understand++;
                break;
                return 0;
            }         
            else         
            {   
                cout << endl << endl;
                cout <<"I don't understand" << endl << endl;  
                
            }       
    
    
    
        }  
        
    }
    int a, b, c;
    srand(time(0));
    a = (rand() % 9+1 );
    b = (rand() % 9+1 );
    c = (rand() % 9+1 );

    
    
    cout << "   ";
    cout << "  _";
    cout << "_";
    cout << "_ _";
    cout << "_";
    cout << "_ _";
    cout << "_";
    cout << "_  ";
    
    
    cout << endl;
    
    
    cout << "   ";
    cout << " | ";
    cout << " ";
    cout << " | ";
    cout << " ";
    cout << " | ";
    cout << " ";
    cout << " | ";
    
    
    cout << endl;
    

    cout << "   ";
    cout << " | ";
    cout << a;
    cout << " | ";
    cout << b;
    cout << " | ";
    cout << c;
    cout << " | ";
    
    
    cout << endl;
    
    
    cout << "   ";
    cout << " |_";
    cout << "_";
    cout << "_|_";
    cout << "_";
    cout << "_|_";
    cout << "_";
    cout << "_| ";
    
    
    
    if(a==1)
    {
        if(b==1)
        {
            if(c==1)
            {
                cout << endl << endl << "    JACKPOT!";
                num+=10;
            }
        }
        
    }


    if(a==2)
    {
        if(b==2)
        {
            if(c==2)
            {
                cout << endl << endl << "    JACKPOT!";
                num+=10;
            }
        }
    }

    
    if(a==3)
    {
        if(b==3)
        {
            if(c==3)
            {
                cout << endl << endl << "    JACKPOT!";
                num+=10;
            }
        }
    }

    
    if(a==4)
    {
        if(b==4)
        {
            if(c==4)
            {
                cout << endl << endl << "    JACKPOT!";
                num+=10;
            }
        }
    }

    
    if(a==5)
    {
        if(b==5)
        {
            if(c==5)
            {
                cout << endl << endl << "    JACKPOT!";
                num+=10;
            }
        }
    }

    
    if(a==6)
    {
        if(b==6)
        {
            if(c==6)
            {
                cout << endl << endl << "    JACKPOT STRAIGHT FROM HELL!";
                num+=15;
            }
        }
    }

    
    if(a==7)
    {
        if(b==7)
        {
            if(c==7)
            {
                cout << endl << endl << "    JACKPOT!";
                num+=10;
            }
        }
    }
    
    
    if(a==8)
    {
        if(b==8)
        {
            if(c==8)
            {
                cout << endl << endl << "    JACKPOT!";
                num+=10;
            }
        }
    }
    

    if(a==9)
    {
        if(b==9)
        {
            if(c==9)
            {
                cout << endl << endl << "    Basically a thousand!";
                num+=20;
            }
        }
    }
    
    
    if(a==0)
    {
        if(b==0)
        {
            if(c==7)
            {
                cout << endl << endl << "    My name is Bond, James Bond.";
                num+=5;
            }
        }
    }
    
    
    if(a==4)
    {
        if(b==2)
        {
            if(c==0)
            {
                cout << endl << endl << "    funni number, also don't do drugs!";
                num+=15;
            }
        }
    }
    
    
    if(a==6)
    {
        if(b==9)
        {
            if(c==0)
            {
                cout << endl << endl << "    Seems like 12 Year Old Humor";
                num+=10;
            }
        }
    }
    
    
    if(a==0)
    {
        if(b==6)
        {
            if(c==4)
            {
                cout << endl << endl << "    Minecraft";
                num+=20;
            }
        }
    }
    
    
    if(a==0)
    {
        if(b==2)
        {
            if(c==1)
            {
                cout << endl << endl << "    What's 9 + 10?";
                num+=10;
            }
        }
    }
    
    
    if(a==4)
    {
        if(b==5)
        {
            if(c==6)
            {
                cout << endl << endl << "    Uncle Ben what happened? SQUID GAMES!!!";
                num+=5;
            }
        }
    }
    
    
    if(a==1)
    {
        if(b==4)
        {
            if(c==1)
            {
                cout << endl << endl << "    Task force 141...";
                num+=15;
            }
        }
    }
    
    
    if(a==0)
    {
        if(b==0)
        {
            if(c==1)
            {
                cout << endl << endl << "    Yeah we got a, #1 Victory Royale, yeah Fortnite we 'bout to get down!";
                num+=20;
            }
        }
    }
    
    
    if(a==1)
    {
        if(b==2)
        {
            if(c==3)
            {
                cout << endl << endl << "    You know how to count to three, already better than Valve!";
                num+=5;
            }
        }
    }
    
    if(a==9)
    {
        if(b==8)
        {
            if(c==7)
            {
                cout << endl << endl << "    Rick Roll was realeased on 27 of July, 1987";
                num+=20;
            }
        }
    }
    
    
    if(a==3)
    {
        if(b==6)
        {
            if(c==5)
            {
                cout << endl << endl << "    There are ____ Days in A Year!";
                num+=10;
            }
        }
    }
    
    
    
    cout << endl << endl << "       SCORE:" << num;
    
    understand--;
    
}
    
    return 0;
}
