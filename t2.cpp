
#include <iostream>
using namespace std;
main ()
{
    int size , number ;
    bool answer = false ;
    cout << "enter size of array : ";
    cin >> size ;
    int arr [size ];
    for (int index = 0 ; index <size ; index ++)
    {
        cout <<"enter number : ";
        cin >> arr[index ];
    }
    cout << "enter the number to search : ";
    cin >>number ;
    for (int i = 0 ; i< size ; i++)
    {
       
       if (arr[i ]== number )
       {
        answer = true ;
        
       }
    

    }
    if (answer == true )
    {
        cout << "present ";
    }
    else 
    {
        cout <<"not present ";
    }
    
}
