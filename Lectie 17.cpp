#include <iostream>

using namespace std;

int main()
{
    int matrice[100][100];
    int n, m;
    
    cout<<"nr linii=";
    cin >> n;
    cout<<"nr coloane=";
    
    cin>>m;
    
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
        {
            cout<<"matrice["<<i<<"]["<<j<<"]=";
            cin>>matrice[i][j];
        }
    }
    
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
        {
            cout<<matrice[i][j]<<"   ";
        }
        
        cout<<endl;
    }

    bool patratica;
    if(n==m)
    {
        patratica=true;
    }
    else
    {
        patratica=false;
    }
    
    if(patratica==false)
    {
        cout<<"Matricea nu e patratica";
    }
    else
    {
        cout<<"elementele diagonalei sunt: ";
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=n; j++)
            {
                if(i==j)
                {
                cout<<matrice[i][j]<<"   ";
                }
            }
        }
    }
    
    
    
    //Ex:1----------------------------------------------------------------------



    return 0;
}
