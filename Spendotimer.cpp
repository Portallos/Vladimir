#include <iostream>
#include <ctime>

using namespace std;

int main ()
{
   
  float n, a, total=50;
  int times=0;
  char response;
  int understand = 0;

  while (understand == 0)
    {

      while (understand = 1)
	{
	  cout << endl << endl <<
	    "Do you want to continue? (Type Y for Yes and N for No)" << endl
	    << endl;
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
		  cout << "Ok" << endl << endl;
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

    cout << endl << "    Newest:";
    cout << endl <<"    _______";
    cout << endl <<"   |       |";
    cout << endl <<"   | "<< n <<" |" ;
    cout << endl <<"   |_______|";
    if(n<50)
    {
        total+=n;
    }

    if(n>50)
    {
        total-=n;
    }

    if(total < 0)
    {
        total=0;
    }
    
    if(total > 100)
    {
        total=100;
    }
    
    if(total>=10)
    {
        if(total<=99.9)
        {
    cout << endl << endl <<  endl <<  endl <<  endl <<  endl << "    Total:";
    cout << endl <<"    _______";
    cout << endl <<"   |       |";
    cout << endl <<"   | "<< total <<" |" ;
    cout << endl <<"   |_______|";
        }
    }
    
    if(total==0)
    {
        cout << endl << endl <<  endl <<  endl <<  endl <<  endl << "    Total:";
    cout << endl <<"    _______";
    cout << endl <<"   |       |";
    cout << endl <<"   | "<< total <<"     |" ;
    cout << endl <<"   |_______|";
    
    }
    understand--;
    times++;
    if(total == 50)
        {
            cout << endl << endl << "-----You Won!-----" << endl << endl;

            cout <<"It took you "<< times <<" to win!";
            return 0;
        }
        
    cout << "   Times:" <<times;
    }
    
  return 0;
  
}
