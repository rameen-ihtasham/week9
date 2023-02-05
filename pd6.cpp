
#include <iostream>
using namespace std ;
main ()
{
    int size, count ;
    cout << "enter the size of array : ";
    cin >> size ;
    int arr[size];
    cout << "enter number of tranformations : ";
    cin >> count ;
    count = count * 2 ;
    for (int i = 0 ; i < size ; i++)
    {
        cout << "enter number : ";
        cin >> arr[i];
        if (arr[i] %2 == 0 )
        {
            arr[i]= arr[i]-count ;
        }
        else
        {
            arr[i ]= arr[i]+count ;
        }
    }
    for (int j = 0 ; j < size ;j++)
    {
        cout << arr[j]<< ",";
    }
}