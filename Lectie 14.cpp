#include <iostream>

using namespace std;

int main()
{
    
    /*
    
    //Media Aritmetica ale elemntului unui vector
    
    
    int a[100], n, s=0;
    cout << "Marimea vectorului: ";
    cin >> n;
    cout << endl;
    
    cout << "Elementele vectorului: "<< endl; 
    
    for(int i=0; i < n; i++)
    {
        cin >> a[i];
    }
    
    for (int i = 0; i < n; i++)
    {
        
    s+=a[i];
    
    }
    
    cout<< endl << "Media aritmetica: " << s/n;
    
    */
    
    //Ex:1----------------------------------------------------------------------
    
    
    int a[100], n;
    cout << "Marimea vectorului: ";
    cin >> n;
    cout << endl;
    
    cout << "Elementele vectorului: "<< endl; 
    
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    
    for(int i=0; i < n-1; i++)
    {
        for(int j=1;j < n; j++)
        {
            if(a[i] > a[j])
            {
                int aux=a[i];
                
                a[i]=a[j];
                
                a[j]=aux;
            }
        }
    }
    
    for(int i = 0; i <n; i++) {
    cout << a[i] << " ";
}
    
    
    return 0;
}