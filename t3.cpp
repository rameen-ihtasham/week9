
#include <iostream>
using namespace std;
main()
{
    int size ;
    cout << "enter the size of array : ";
    cin >> size ;
    int arr[size ];
    for (int index = 0 ; index<size ; index++)
    {
        cout << "enter number : ";
        cin >> arr[index];
    }
    for (int i = size-1 ; i>=0 ; i -- )
    {
        cout << arr[i]<<endl;;
    }
}