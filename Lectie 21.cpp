#include <iostream>

using namespace std;

int a[100];

// Pentru Mediea Aritmetica
int n, suma, m;

// Pentru Mediea Aritmetica A Numerelor Pare Si Impare
int suma_p, suma_i, m_p=0, m_i=0, n_p=0, n_i=0;

// Citire

void citire()
{
    cout<<"Cat de mare sa fie vectorul: ";
    cin >> n;
    for(int i = 0; i<n; i++)
    {
        cout<<"a["<<i<<"]=";
        cin >> a[i];
    }
}

// Afisare

void afisare()
{
    cout << endl << "Elementele vectorului: ";
    cout<<a[0];
    
    for(int i=1; i<n; i++)
    {
        cout  <<" - "<< a[i];
        
    }
}

// Numere Impare

void impare()
{
    cout << endl << endl << "Elementele impare ale vectorului: ";
    
    for(int i=0; i<n; i++)
    {
        if(a[i] % 2 == 1)
        {
            cout<<" "<<a[i];
        }
        
    }
}

// Numere Pare

void pare()
{
    cout << endl << endl << "Elementele pare ale vectorului: ";
    
    for(int i=0; i<n; i++)
    {
        if(a[i] % 2 == 0)
        {
            cout<<" "<<a[i];
        }
        
    }
}

// Media Aritmetica

void medie()
{
    cout << endl << endl << "Media aritmetica: ";
    
    for(int i=0; i<n; i++)
    {

    suma+=a[i];
    
    }
    
    m=suma/n;
    
    cout<<m;
    
}

// Medie Numere Pare

void mediepare()
{
    cout << endl << endl << "Media aritmetica a numerelor pare ale vectorului: ";
    
    for(int i=0; i<n; i++)
    {
    
    if(a[i] % 2 == 0)
        {
            suma_p+=a[i];
            
            n_p++;
        }
    
    }
    
    m_p=suma_p/n_p;
    
    cout<<m_p;
}

// Medie Numere Impare

void medieimpare()
{
    cout << endl << endl << "Media aritmetica a numerelor impare ale vectorului: ";
    
    for(int i=0; i<n; i++)
    {
    
    if(a[i] % 2 == 1)
        {
            suma_i+=a[i];
            
            n_i++;
        }
    
    }
    
    m_i=suma_i/n_i;
    
    cout<<m_i;
}


int main()
{
    

    citire();
    
    afisare();

    impare();
    
    pare();
    
    medie();
    
    mediepare();
    
    medieimpare();

    return 0;
}
