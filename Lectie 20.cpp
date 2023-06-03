#include <iostream>

using namespace std;

int a[1000];
int n;
void citire_vector()
{
    cout<<"cate sa aba";
    cin >> n;
    
    for(int i=0; i<n; i++)
    {
        cout<<"a["<<i<<"]=";
        
        cin>> a[i];
    }
    
}


void afisare_vector()
{

    for(int i=0; i<n; i++)
    {
       cout<< a[i]<<"  ";
    }

}

void afisare_prime()
{
    
    for(int i=0; i<n; i++)
    {
        for(int j=2; j<a[i]; j++)
        {
            
        }
    }
}
       
    




int main () 
{
    
    
citire_vector();
    
afisare_vector();

afisare_prime();



return 0;

} 