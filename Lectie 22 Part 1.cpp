#include <iostream>

using namespace std;

int a[1000];
int n, sumap, sumai;


void citire()
{
    
    cout<<"Marimea vectorului: ";
    cin>>n;
    cout<<endl<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<"a["<<i<<"]=";
        cin>>a[i];
        
    }

}


void afisare()
{
    
    cout<<endl<<endl<<endl<<"Numerele vectorului: ";
    
    cout<<a[0];
    
    for(int i=1; i<n; i++)
    {
    cout<<" - "<<a[i];
    
    }

}


void sumapare()
{
    
    cout<<endl<<endl<<endl<<"Suma numerelor pare: ";
    
    for(int i=0; i<n; i++)
    {
    
        if(a[i]%2==0)
        {
            sumap+=a[i];
        }
    
    }
    cout<<sumap;
}


void sumaimpare()
{
    
    cout<<endl<<endl<<endl<<"Suma numerelor impare: ";
    
    for(int i=0; i<n; i++)
    {
    
        if(a[i]%2!=0)
        {
            sumai+=a[i]
        }
    
    }
    cout<<sumai;
}


int main()
{
    


    citire();
    
    afisare();
    
    sumapare();
    
    sumaimpare();
    
    
    
    
    return 0;
}