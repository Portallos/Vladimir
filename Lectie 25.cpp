#include <iostream>

using namespace std;

int a[1000][1000];
int x, y;
void citire()
{
    cout << "Coordonata X: ";
    cin >> x;
    cout << "Coordonata Y: ";
    cin >> y;
    
    for(int i=0; i<x; i++)
    {
        for(int j=0; j<x; j++)
        {
            cout<<"a["<< i <<"]["<< j <<"]=";
            cin>>a[i][j];
        }
    }
    
    
}

void afisare()
{
    cout<<endl;
    for(int i=0; i<x; i++)
    {
        for(int j=0; j<x; j++)
        {
            cout<<"   "<<a[i][j];
            
        }
        cout<<endl<<endl;
    }
    
    
    
}

void diagprin()
{
    
int i1, j1;
cout<<"Diagonala Principala: ";
for(int i1=0; i1<x; i1++)
    {
        for(int j1=0; j1<x; j1++)
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
}


int main()
{
    
    citire();
    
    afisare();
    
    diagprin();
    
    
    
    return 0;
}