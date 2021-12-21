#include<iostream>
#include<cstdlib>
#include<ctime>
#include<string>
using namespace std;

int main()
{
    string A[9] = {" A "," B+ "," B "," C+ "," C "," D+ "," D "," F "," W "}, y;
    cout << "Press Enter 3 times to reveal your future.";
    int i;
    
    for ( i = 0; i < 3; i++)
    {
       cin.get();
    }
    
    if (i==3)
    {
        srand(time(0));
        int x = rand()%9;
        cout << "You will get" << A[x] <<"in this 261102.";
    }
    
    return 0;
}