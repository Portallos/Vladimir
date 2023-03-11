#include <iostream>

 using namespace std;

 
int main () 
{

int n;
cin >> n;
int a[10][10], j, i;
int sum=0;

for(int i=1; i<=n; i++)
{
    for(int j=1; j<=n; j++)
    {
    cout <<"a["<< i << "]" <<"a["<< j << "]=";
    
    cin>>a[i][j];
    
    }
}


for(int i=1; i<=n; i++)
{
    for(int j=1; j<=n; j++)
    {
        if (i==j)
        {
            cout<<a[i][j] << "  ";
            
            sum = sum + a[i][j];
        }
    
    }

cout <<"suma diagonalei principale este : "<< sum;

return 0;

}

} 