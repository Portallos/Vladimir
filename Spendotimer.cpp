#include <iostream>
#include <ctime>

using namespace std;

int main ()
{
    
    float n, a, total=50;
    int times=0;
    char response;
    int understand = 0;

    cout << endl <<"   Hello! In this game you have to reach 50.00 again, the exact number you had at the start.";

    while (understand == 0)
    {

      while (understand = 1)
	{
	  cout << endl << endl << "Do you want to continue? (Type Y for Yes and N for No)" << endl << endl;
	  
	  cout << "You:- ";
	  cin >> response;

	  if (response == 'Y')
	    {
	      cout << endl << endl << endl << endl;
	      break;

	    }
	  else
	    {
	      if (response == 'N')
		{
		  cout << endl << endl;
		  cout << "-----You Lost!-----" << endl << endl;
		  understand++;
		  break;
		  return 0;
		}
	      else
		{
		  cout << endl << endl;
		  cout << "I don't understand" << endl << endl;

		}

	    }

	}



    srand (time (0));
    a = (rand () % 10000 + 1);
    n = a / 100;



    if(n<50)
    {
        total-=n;
    }

    if(n>50)
    {
        total+=n;
    }

    if(total < 0)
    {
        total=0;
    }
    
    if(total > 100)
    {
        total=100;
    }
    
    cout << endl <<"   Total: " <<total;
    cout << "   Newest: " << n ;
    
    understand--;
    times++;
    if(total == 50)
        {
            cout << endl << endl << "-----You Won!-----" << endl << endl;

            cout <<"It took you "<< times <<" to win!";
            return 0;
        }
        
    cout << "   Times: " <<times;
    }
    
  return 0;
  
}
