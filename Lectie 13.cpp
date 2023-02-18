#include <iostream>

using namespace std;

int main()
{
    
    //1.citire si afisare elemente vector
    
    int a[100], n;
    cout << "Cate elemente are vectorul: ";
    cin >> n;
    cout << endl;
    
    for(int i=0; i<n; i++)
    {
        cout << "a["<< i << "]=";
        
        cin >> a[i];
        
    
    }
    
    cout << endl << "Elementele vectorului: ";
    
        for(int i=0; i<n; i++)
    {
        cout  << a[i] <<" ";
        
    }
    
    //2.adaugarea unui element in vector
    
    int poz;
    int element_adaugat;
    cout<< endl<< endl <<"Pozitia pe care se adauga un element: ";
    cin >> poz;
    cout << endl;
    cout<<"Element adaugat: ";
    cin >> element_adaugat;
    cout << endl;
    
    for(int i = n; i > poz ; i--)
    {
        
        a[i]=a[i-1];
        
    }
    
    a[poz] = element_adaugat;
    
    
    for(int i=0; i <= n; i++)
    {
        
        cout  << a[i] <<" ";
        
    }
    
    //3.stergerea unui element in vector
    
    int poz2;
    cout<< endl<< endl <<"Pozitia pe care se sterge un element: ";
    cin >> poz2;
    cout << endl;

    for(int i = poz2 ; i <= n ; i++)
    {
        
        a[i]=a[i+1];
        
    }

    for(int i=0; i < n; i++)
    {
        
        cout  << a[i] <<" ";
        
    }





    return 0;
}