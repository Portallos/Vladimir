#include <iostream>

using namespace std;


    int a[1000][1000];
    
    int x, y;
    
    int i1, j1;
    
    int i2, j2;
    
void citire()
{
    cout << "Coordonata x: ";
    cin >> x;
    cout << "Coordonata Y: ";
    cin >> y;
    
    for(int i=0; i<x; i++)
    {
        for(int j=0; j<y; j++)
        {
           cout << "a[" << i << "][" << j << "]= ";
           cin >> a[i][j];
        }
    }
    
}

void afisare()
{
    cout << endl;

    for(int i=0; i<x; i++)
    {
        for(int j=0; j<y; j++)
        {
           
           cout << "   " << a[i][j];
           
        }
        
        cout << endl << endl;
    }
    
}

void diagprin()
{
    
    cout<<"Diagonala principala: ";
    for(i1=0; i1<x; i1++)
        {
            for(j1=0; j1<y; j1++)
            {
               if(x==y)
               {
                    if(i1==j1)
                    {
                        cout<<"  "<<a[i1][j1];
                    }
               }
            }
        }
        
        if(x!=y)
        {
            cout<<"Nu e patratica";
        }
}

void diagsec()
{
    
    cout<<"Diagonala secundara: ";
    for(i2=0; i2<x; i2++)
        {
            for(j2=0; j2<y; j2++)
            {
               if(x==y)
               {
                    if(i2+j2==x-1)
                    {
                        cout<<"  "<<a[i2][j2];
                    }
               }
            }
        }
        
        if(x!=y)
        {
            cout<<"Nu e patratica";
        }
}


int main()
{
    
    citire();
    
    afisare();

    diagprin();
    
    diagsec();

    return 0;
}