#include <iostream>

using namespace std;

int a[1000][1000], x, y, x1, y1;

void citire()
{
    
    cout<<"Marimea X: ";
    cin>>x;
    cout<<"Marimea Y: ";
    cin>>y;
    cout<<endl;
    
    for(int i=0; i<x; i++)
    {    
        for(int j=0; j<y; j++)
        {
            cout<<"a["<<i<<"]["<<j<<"]= ";
            cin>>a[i][j];
        }
        
    }
    
}

void afisare()
{
    
    cout<<endl<<"Afisare: "<<endl<<endl;
    for(int i=0; i<x; i++)
    {    
        for(int j=0; j<y; j++)
        {
            cout<<"  "<<a[i][j];
        }
        cout << endl << endl;
    }
    
}

void stergere()
{
    cout<<"Coordonata X: ";
    cin >> x1;
    cout<<"Coordonata Y: ";
    cin >> y1;
    cout<<"Vrei sa schimbi in: ";;
    cin>>a[x1][y1];
    
}

int main()
{
    
    citire();

    afisare();
    
    stergere();
    
    afisare();
    
    return 0;
}