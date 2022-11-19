#include <iostream>

using namespace std;

int main()
{
    
    //Suma numerelor mai mici sau egale decat n sunt primele 3 exercitii
    
    /*
    
    int n;
    cout<<"n = ";
    cin>>n;

    int suma=0;
    
    for (int i=0 ; i<=n ; i++)
    {

        suma = suma + i;
    }
    
    cout << "Suma numerelor mai mici sau egale decat n = "<< suma;
    
    */
    
    //Ex:1----------------------------------------------------------------------
    
    /*
    
    int n;
    cin>>n;
    cout<<"n = ";
    
    int suma=0;
    int i=0;
    
    while (i<=n);
    {
        suma=suma+i;
        i++;
    }
    
    cout<<suma;
    
    */
    
    //Ex:2----------------------------------------------------------------------
    
    /*
    
    int n;
    cin>>n;
    cout<<"n = ";
    
    int suma=0;
    int i=0;
    
    do
    {
        
        suma= suma+i;
        i++;
    
    }
    
    while(i<=n);
    cout<<suma;
    
    */
        
    //Ex:3----------------------------------------------------------------------
    
    /*
    
    int a, b;
    cin >> a, b;
    
    while (a!=b)
    
        if (a>b)
        {
        a=a-b;    
        }
        else
        {
        b=b-a;    
        }
        
    */
    
    //Ex:4----------------------------------------------------------------------
    
    /*
    
    int n, oglinda=0, cifra;
    cin >> n;
    
    while(n!=0)
    {
        
        cifra = n % 10;
        oglinda = oglinda * 10 + cifra;
        n/=10;
    
    }
    
    cout << oglinda;
    
    */
    
    
    
    return 0;
    
    
    
}