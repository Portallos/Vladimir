#include <iostream> //default

#include <thread> //ignore cin

#include <cstdlib> //wait
#include <unistd.h>

#include <ctime> //random

#include <chrono> //sleep_for

#include <vector> //piste

using namespace std;

int main()
{
int linewait=0;
int menuchoice;
int exit=0;
//intro


while(linewait<32)
{
cout<<endl;

linewait++;
}

linewait = 0;


usleep (1500000);

cout<< " ___ "<<endl;
cout<< "/ __|"<<endl;
cout<< "\\__ \\"<<endl;
cout<< "|___/"<<endl;


while(linewait<30)
{
cout<<endl;

linewait++;
}

linewait = 0;


usleep (750000);

cout<< " ___    ___ "<<endl;
cout<< "/ __|  / __|"<<endl;
cout<< "\\__ \\ | (__"<<endl;
cout<< "|___/  \\___|"<<endl;


while(linewait<30)
{
cout<<endl;

linewait++;
}

linewait = 0;


usleep (750000);

cout<< " ___    ___   ____"<<endl;
cout<< "/ __|  / __| |  __|"<<endl;
cout<< "\\__ \\ | (__  | |"<<endl;
cout<< "|___/  \\___| |_|"<<endl;


while(linewait<30)
{
cout<<endl;

linewait++;
}

linewait = 0;


usleep (750000);

cout<< "                     _"<<endl;
cout<< "                    (_)"<<endl;
cout<< " ___    ___   ____   _"<<endl;
cout<< "/ __|  / __| |  __| | |"<<endl;
cout<< "\\__ \\ | (__  | |    | |"<<endl;
cout<< "|___/  \\___| |_|    |_|"<<endl;


while(linewait<30)
{
cout<<endl;

linewait++;
}

linewait = 0;


usleep (750000);

cout<< "                     _"<<endl;
cout<< "                    (_)"<<endl;
cout<< " ___    ___   ____   _   ________"<<endl;
cout<< "/ __|  / __| |  __| | | |  _   _ \\"<<endl;
cout<< "\\__ \\ | (__  | |    | | | | | | | |"<<endl;
cout<< "|___/  \\___| |_|    |_| |_| |_| |_|"<<endl;

while(linewait<30)
{
cout<<endl;

linewait++;
}

linewait = 0;


usleep (750000);

cout<< "                     _                       _ "<<endl;
cout<< "                    (_)                     | |"<<endl;
cout<< " ___    ___   ____   _   ________     ____  | |"<<endl;
cout<< "/ __|  / __| |  __| | | |  _   _ \\   / _  | | |"<<endl;
cout<< "\\__ \\ | (__  | |    | | | | | | | | | (_| | |_|"<<endl;
cout<< "|___/  \\___| |_|    |_| |_| |_| |_|  \\__,_| (_)"<<endl;


while(linewait<30)
{
cout<<endl;

linewait++;
}

linewait = 0;
sleep (2);

//Menu

cout<< "MAIN MENU"<<endl<<endl;
cout<< "1.Campaign"<<endl;
cout<< "2.Custom"<<endl;
cout<< "3.COMING SOON"<<endl;
cout<< "4.Exit"<<endl;
cout<< "Choice:";
cin>>menuchoice;

while(exit==0)
{
    
//Menu error

if(menuchoice<1)
{
    
    cout<< "                     _                       _ "<<endl;
    cout<< "                    (_)                     | |"<<endl;
    cout<< " ___    ___   ____   _   ________     ____  | |"<<endl;
    cout<< "/ __|  / __| |  __| | | |  _   _ \\   / _  | | |"<<endl;
    cout<< "\\__ \\ | (__  | |    | | | | | | | | | (_| | |_|"<<endl;
    cout<< "|___/  \\___| |_|    |_| |_| |_| |_|  \\__,_| (_)"<<endl;
        
        
        while(linewait<30)
        {
        cout<<endl;
        
        linewait++;
        }
        
        linewait = 0;
        
    cout<< "MAIN MENU"<<endl<<endl;
    cout<< "1.Campaign"<<endl;
    cout<< "2.Custom"<<endl;
    cout<< "3.COMING SOON"<<endl;
    cout<< "4.Exit"<<endl;
    cout<< "Choice:";
    cin>>menuchoice;
}

    

        if(menuchoice==1)
        {
            return 0;
        }
        
        if(menuchoice==2)
        {
            return 0;
        }
        
        if(menuchoice==3)
        {
            return 0;
        }
        
        if(menuchoice==4)
        {
            return 0;
        }
        
if(menuchoice>4)
{
    
    cout<< "                     _                       _ "<<endl;
    cout<< "                    (_)                     | |"<<endl;
    cout<< " ___    ___   ____   _   ________     ____  | |"<<endl;
    cout<< "/ __|  / __| |  __| | | |  _   _ \\   / _  | | |"<<endl;
    cout<< "\\__ \\ | (__  | |    | | | | | | | | | (_| | |_|"<<endl;
    cout<< "|___/  \\___| |_|    |_| |_| |_| |_|  \\__,_| (_)"<<endl;
    
    
        while(linewait<30)
        {
        cout<<endl;
        
        linewait++;
        }
        
        linewait = 0;
    
    cout<< "MAIN MENU"<<endl<<endl;
    cout<< "1.Campaign"<<endl;
    cout<< "2.Custom"<<endl;
    cout<< "3.COMING SOON"<<endl;
    cout<< "4.Exit"<<endl;
    cout<< "Choice:";
    cin>>menuchoice;
}
    

}

return 0;
}
