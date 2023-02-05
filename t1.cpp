
#include <iostream>
using namespace std ;
main ()
{
    int size ;
    cout << "enter number of digits : ";
    cin >> size ;
    float arr[size ];
    float sum = 0;
    float avg ;
    for (int index = 0 ; index<size ; index ++ )
    {
        cout << "enter number ";
        cin >> arr [index];
        sum = sum+ arr[index];
        avg = sum/ size;


    }
    cout <<"sum = "<< sum <<endl ;
    cout << "average = " << avg <<endl ;
}