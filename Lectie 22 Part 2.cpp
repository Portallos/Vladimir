#include <iostream>

using namespace std;

int a[100][100];
int x, y;


void citire()
    {
        cout<<"Coordonata X: ";
        cin>>x;
        cout<<"Coordonata Y: ";
        cin>>y;
        
        for(int i=0; i<x; i++)
        {
            for(int j=0; j<y; j++)
            {
                cout<<"a["<<i<<"]["<<j<<"]=";
                cin>>a[i][j];
                
            }
                
        }
    
    }
    
    
void afisare()
{
    cout<<endl<<endl<<"Matrice: "<<endl<<endl;
    for(int i=0; i<x; i++)
        {
            for(int j=0; j<y; j++)
            {
                cout<<"  "<<a[i][j];
                
                
            }
            cout<<endl<<endl;
        }
}

void diagonala_principala()
{
    int i1=0;
    int j1=0;
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
            cout<<"Nu este patratica";
        }
}

void diagonala_secundara()
{
    int i2;
    int j2;
    cout<<"Diagonala secundara: ";
    for(i2=x; i2>=0; i2--)
        {
            for(j2=y; j2>=0; j2--)
            {
               if(x==y)
               {
                    if(i2==j2)
                    {
                        cout<<"  "<<a[i2][j2];
                    }
               }
            }
        }
        
        if(x!=y)
        {
            cout<<"Nu este patratica";
        }
}




int main()
{
    
    citire();
    
    afisare();

    diagonala_principala();

    diagonala_secundara();
    
    
    return 0;
}