#include<iostream>
using namespace std;

int main()
{

    int num,sum=0;
     cout << "enter a number :";
     cin >> num;

     for (int i = 1; i <= num; i++) // Changed condition to i <= num
     {
        if ( i % 2 !=0)
         {
            sum += i;
         }
     }
        cout << sum << endl;
         return 0;
}