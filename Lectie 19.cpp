#include <iostream>

using namespace std;
int a[100],b,n;

void afisare_linie();
{
    cout<<"-"<<a[i];
}


int main()
{
    
    //citire si afisare vector, suma nr pare
    
    cout<<"n=";
    cin>>n;
    for(int i=0; i<n ;i++)
    {cout<<"a["<<i<<"]=";
    cin>a[i];
    }
    
    for(int i=0; i=n; i++)
    {
        cout<<a[i];
    }

    return 0;
}