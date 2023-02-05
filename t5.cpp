
#include <iostream>
using namespace std ;
main ()
{
    int size , number ,result;
    

    cout << "enter the size of array : ";
    cin >> size ;
    int arr[size ];
    for (int index = 0 ; index<size ; index++)
    {
        cout << "enter number : ";
        cin >> arr[index];
    }
    number = arr[0];
    for (int i = 0 ; i<size ; i++)
    {
     
    
     
        if (number >arr[i])
        {
             result = arr[i] ;
        }
        else
        {
            result = number;
        }
        

       
    }
    cout << result;
}