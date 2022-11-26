
#include <iostream>

using namespace std;

int main()
{
    
    /*

int p=0;

int n;
cout << "Numarul este egal cu ";
cin >> n;


for(int i=2; i<=n/2; i++)
{
    if ( n % i == 0)
    {
        
        p++;
    
    }
    
}

    cout << " " << endl;

    if (p == 0 )
    {
        cout << "Numarul ales este prim";
    }
    else
    {
        cout << "Numarul ales nu este prim";
    }
    
    */
    
    //Ex:1----------------------------------------------------------------------

int i;

int n;
cout << "Numarul este egal cu ";
cin >> n;


    for(int i=2; i<=n/2; i++)
    {
        if ( n % i == 0)
        {
        
     i = n ; 
        cout << "Nr. nu este prim";
        }
        else if(i==n/2)
        {
        
            cout << "Nr. este prim";
        
        }

    }



    return 0;
}