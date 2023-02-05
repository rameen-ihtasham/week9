
#include <iostream>
using namespace std ;
main ()
{
    int size,number  ;
    cout << "enter the size of array : ";
    cin >> size ;
    int arr[size ];
    int arr2 [size];
    for (int index = 0 ; index<size ; index++)
    {
        cout << "enter number : ";
        cin >> arr[index];
    }
    cout << "enter the number to multiply : ";
    cin >>number ;
    for (int i=0 ; i< size ; i++)
    {
         arr2[i] = arr[i]*number ;

    }
    for (int j = size-1 ;  j>=0 ; j-- )
    {
        cout << arr2 [j]<<endl;
    }
}
