#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
    int a, b, c;
    srand(time(0));
    a = (rand() % 9 );
    b = (rand() % 9 );
    c = (rand() % 9 );

    

    cout << "   ";
    cout << "  _";
    cout << "_";
    cout << "_ _";
    cout << "_";
    cout << "_ _";
    cout << "_";
    cout << "_  ";
    
    
    cout<< endl;
    
    
    cout << "   ";
    cout << " | ";
    cout << " ";
    cout << " | ";
    cout << " ";
    cout << " | ";
    cout << " ";
    cout << " | ";
    
    
    cout << endl;
    
    
    cout << "   ";
    cout << " | ";
    cout << a;
    cout << " | ";
    cout << b;
    cout << " | ";
    cout << c;
    cout << " | ";
    
    
    cout << endl;
    
    
    cout << "   ";
    cout << " |_";
    cout << "_";
    cout << "_|_";
    cout << "_";
    cout << "_|_";
    cout << "_";
    cout << "_| ";
    
    
    
    
    return 0;
}
