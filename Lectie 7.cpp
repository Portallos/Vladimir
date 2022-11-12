
#include <iostream>

using namespace std;

int main()
{
    /*
    
    int a, b;
    cin >> a >> b;
    int i;
    for(i=a; i<=b; i++)
    {
        cout <<" "<< i;
    }
    
    */
    
    //Ex:1----------------------------------------------------------------------
    
    /*
    
    int a, b;
    cin >> a >> b;
    int i;
    
    if(a-b>=0)
    
    {
        
        for(i=a; i>=b; i++)
        {
            
            cout <<" "<< i;
            
        }
    
    }
    
    else(b-a>=0);
    
    {
        
        for(i=b; i>=a; i++)
        {
        
            cout <<" "<< i;
            
        }
    
    }
    
    */
    
    //Ex:2----------------------------------------------------------------------
    
    /*
    
    int a, b;
    cin >> a >> b;
    int i;
    
    if(a-b>=0)
    
    {
        
        for(i=a; i>=b; i++)
        {
            if(i%2==0)
            {
                cout <<" "<< i;
            }
        }
    
    }
    
    else(b-a>=0);
    
    {
        
        for(i=b; i>=a; i++)
        {
            if(i%2==0)
            {
                cout <<" "<< i;
            }
        }
    
    }
    
    */
    
    
    //Ex:3----------------------------------------------------------------------
    
    /*
    
    int a, b;
    cin >> a >> b;
    int i;
    
    if(b<a)
    
    {
        int aux;
        aux = a;
        a=b;
        b=aux;
    
    }
    
        for(i=a; i<=b; i++)
        {
            cout <<" "<< i;
        }
        
    */   
        
    //Ex:4----------------------------------------------------------------------
    
    
    /*
    
    int a, ;
    cout <<"a = ";
    cin >> a;
    
    if(i=0,1=a%i)
    {
        
            cout <<"a este prim";
        
    }
        
    else
    {
      
            cout <<"a nu este prim";
        
    }
    
    */
    
    //Ex:5----------------------------------------------------------------------
    
    /*
    
    int n, cifra, intrus, nr_aparitii=0;
    cin >> n >> intrus;
    
    
    
    while(n!=0)
    {
        cifra = n % 10;
        if(cifra==intrus)
        {
            
        (nr_aparitii++);
        
        }
        
        n/=10;
    }
    
    */
    
    //Ex:6----------------------------------------------------------------------
    
    /*
    
    int n, i, m=0, flag=0;  
  cout << "Enter the Number to check Prime: ";  
  cin >> n;  
  m=n/2;  
  for(i = 2; i <= m; i++)  
  {  
      if(n % i == 0)  
      {  
          cout<<"Number is not Prime."<<endl;  
          flag=1;  
          break;  
      }  
  }  
  if (flag==0)  
      cout << "Number is Prime."<<endl;  
    
    
    */
    
    return 0;
}
