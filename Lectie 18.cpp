#include <iostream>

using namespace std;

int n_word, w_word, bossbaby2017=0, optiune;

    //citire si afisare
    void afisare_mesaj()
    {
        cout<<endl<<"Common gdb N = ";
        cin>>n_word;
        cout<<endl<<"Common gdb W = ";
        cin>>w_word;
        
    }


    //suma
    void rushb()
    {
        bossbaby2017 = n_word + w_word;
        
        cout<<endl<<"bossbaby2017 = "<<bossbaby2017;
    }

    int a[100],nibaheight, media=0;
    cin>>nibaheight;
    cout<<endl;
        
    //vectored
    void vectored()
    {
            for(int i=0; i<nibaheight; i++)
            {
                cout<<"a["<< i << "]=";
                cin>>a[i];
            }
        
        
        for(int i=0; i<nibaheight; i++)
        {
            cout<<a[i] <<" ";
        }
    }
    
    void vectorafis()
    {
    for(int i = 0; i < nibaheight; i++)
    {
    media+=a[i];
    }
    
    cout<< endl << "medie=" << media/nibaheight;
    }






int main()
{
    
    
    afisare_mesaj();
    rushb();
    
    bool stop = false;
    
    while(stop==false)
    {
        cout<<endl<<"optiunea aleasa este: ";
        cin>>optiune;
        if(optiune==0)
        {
            stop==true;  
        }
        else if(optiune==1)
        {
            afisare_mesaj();
        }
        else if(optiune==2)
        {
            rushb();
        }
        else if(optiune==3)
        {
            vectored();
        }
        else 
        {
            vectorafis();
        }
    
    
    return 0;
}