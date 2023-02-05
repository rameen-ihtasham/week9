
#include <iostream>
using namespace std ;
main ()
{
    int size , count , total;
    int counter = 0;
    cout << "enter the number of color cols : ";
    cin >> size ;
    count =  size * 2;

    string arr[size];
    for (int i = 0 ; i <size ; i++)
    {
        cout << "enter colorr : ";
        cin >> arr[i];
        
    }
   for (int j = 0 ; j <size-1 ; j++ )
   {
    if (arr[j] != arr[j+1])
    {
        counter++;
    }
   }
   total =  count +counter ;
   cout<< total ;

}