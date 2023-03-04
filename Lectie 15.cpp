#include <iostream>

using namespace std;

int main()
{
    
    
    int a[100], n, poz, add;
    
    cin >> n;
    
    for(int i=0; i<n; i++)
    {
       cin >> a[i]; 
    }
    
    cout << endl << endl;
    
    cout<<"elemente: ";
    for(int i=0; i<n; i++)
    {
        cout <<" "<<a[i];
    }
    

    // cout << endl;
    
    // cout <<"poz: ";
    
    // cin >> poz;
    
    // cout << endl<< "add: ";
    
    // cin >> add;

    
    // for(int i = n; i > poz ; i--)
    // {
        
    //     a[i]=a[i-1];
        
    // }
    
    // a[poz] = add;
    
    
    // for(int i=0; i <= n; i++)
    // {
        
    //     cout <<" "<<a[i];
        
    // }
    
    int poz2;
    cout<< endl<< endl <<"Poz sters: ";
    cin >> poz2;
    cout << endl;


    for(int i = poz2 ; i < n-1 ; i++)
    {
        
        a[i]=a[i+1];
        
    }

 for(int i=0; i < n-1; i++)
    {
        
        cout  << a[i] <<" ";
        
    }
    return 0;
}