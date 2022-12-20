#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

using namespace std;

int main()
{
    char rps;
    int you, adv;
    srand(time(0));
    cout<<"Type R for Rock"<<endl;
    cout<<"Type P for Paper"<<endl;
    cout<<"Type S for Scissors"<<endl;
    
    cin >> rps;

    if (rps == 'R')
    {
        you=1;
    }
        if (rps == 'P')
    {
        you=2;
    }
        if (rps == 'S')
    {
        you=3;
    }
    
    adv = (rand() % 3+1 );
    
    
    //You
    
    if (you==1)
    {
        cout << endl << endl << "You have Rock!";
    }
    if (you==2)
    {
        cout << endl << endl << "You have Paper!";
    }
    if (you==3)
    {
        cout << endl << endl << "You have Scissors!";
    }
    
    //Adversary
    
    if (adv==1)
    {
        cout << endl << endl << "Adversary has Rock!";
    }
    if (adv==2)
    {
        cout << endl << endl << "Adversary has Paper!";
    }
    if (adv==3)
    {
        cout << endl << endl << "Adversary has Scissors!";
    }

    
    if(you==adv)
    {
        cout << endl << endl <<"-------It's a Tie!-------";
    }
    
    if(you==1)
    {
        if(adv==3)
    {
        cout << endl << endl <<"-------You Won!-------";
    }
    
    }
    
    if(you==2)
    {
        if(adv==1)
    {
        cout << endl << endl <<"-------You Won!-------";
    }
    
    }
    
    if(you==3)
    {
        if(adv==2)
    {
        cout << endl << endl <<"-------You Won!-------";
    }
    
    }
    
    if(adv==1)
    {
        if(you==3)
    {
        cout << endl << endl <<"-------You Lost!-------";
    }
    
    }
    
    if(adv==2)
    {
        if(you==1)
    {
        cout << endl << endl <<"-------You Lost!-------";
    }
    
    }
    
    if(adv==3)
    {
        if(you==2)
    {
        cout << endl << endl <<"-------You Lost!-------";
    }

}
    return 0;
}