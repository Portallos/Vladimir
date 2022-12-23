#include <iostream>

using namespace std;

int main()
{   
    int num;
    int mum;
    int times = 0;
    char a = 'A'; 
    char b = 'B';
    char c = 'C';
    char d = 'D';
    char e = 'E';
    char f = 'F';
    char g = 'G';
    char h = 'H';
    char i = 'I';
    cout<< endl << endl;

    while(times<=8)
{

    cout<<"      "<< a <<" | "<< b <<" | "<< c <<" "<< endl;
    cout<<"     ---|---|---"<< endl;
    cout<<"      "<< d <<" | "<< e <<" | "<< f <<" "<< endl;
    cout<<"     ---|---|---"<< endl;
    cout<<"      "<< g <<" | "<< h <<" | "<< i <<" "<< endl;
    
    cin >> num;
    
    if(num==1)
    {
        a=='X';
    }
    if(num==2)
    {
        b=='X';
    }
    if(num==3)
    {
        c=='X';
    }
    if(num==4)
    {
        d=='X';
    }
    if(num==5)
    {
        e=='X';
    }
    if(num==6)
    {
        f=='X';
    }
    if(num==7)
    {
        g=='X';
    }
    if(num==8)
    {
        h=='X';
    }
    if(num==9)
    {
        i=='X';
    }
    
    cout<<"      "<< a <<" | "<< b <<" | "<< c <<" "<< endl;
    cout<<"     ---|---|---"<< endl;
    cout<<"      "<< d <<" | "<< e <<" | "<< f <<" "<< endl;
    cout<<"     ---|---|---"<< endl;
    cout<<"      "<< g <<" | "<< h <<" | "<< i <<" "<< endl;
    
    cin >> mum;
    if(mum==1)
    {
        a=='O';
    }
    if(mum==2)
    {
        b=='O';
    }
    if(mum==3)
    {
        c=='O';
    }
    if(mum==4)
    {
        d=='O';
    }
    if(mum==5)
    {
        e=='O';
    }
    if(mum==6)
    {
        f=='O';
    }
    if(mum==7)
    {
        g=='O';
    }
    if(mum==8)
    {
        h=='O';
    }
    if(mum==9)
    {
        i=='O';
    }
    
    cout << endl;
    
    times++;
}
    return 0;
    
}
