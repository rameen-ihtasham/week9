
#include<iostream>
using namespace std ;
main ()
{   
    int size ;
    cout <<"enter the size of array : ";
    cin >>size ;
     float cgpa [size ];
    for (int index = 0 ; index <size  ; index++)
    {
        cout << "enter value : ";
        cin >>cgpa [index ];
    }
    for (int i = 0 ; i<size  ; i++)
    {
        cout <<  cgpa [i]<< "  " ;
    }

}