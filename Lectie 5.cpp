#include <iostream>

using namespace std;

int main()
{
    int n;
    int Cifra;
    int nr_cifre=0;
    int s=0;
    
    cout<<"Numarul ales este ";
    cin>>n;
    
    int n_ajutor=n;
        
    while(n_ajutor!=0)
    {
    n_ajutor=n_ajutor/10;
    nr_cifre++;
    }
    
    for(int i=0; i<nr_cifre; i++)
    {
    
    Cifra = n % 10;
    s = s + Cifra;
    n = n / 10;
    }
    
    cout<<"Suma cifrelor este "<<s;
    
    //Ex:1----------------------------------------------------------------------
    
    return 0;
}