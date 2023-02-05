
#include <iostream>
using namespace std ;
main ()
{
    int size ;
    float sum= 0;
    cout <<"enter the number of resistors :";
    cin >> size ;
    float arr[size ];
    for(int i = 0 ; i<size ; i++)
    {
        cout << "enter resistance : ";
        cin >> arr[i];
        sum = sum+arr[i];
    }
    cout << sum ;

}