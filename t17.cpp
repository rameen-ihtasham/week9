
#include <iostream>
using namespace std ;
main ()
{
    float arr[4];
    float sum;
    float price ;
    cout << "enter price :";
    cin>>price ;
    for (int i = 0 ; i<4 ; i++)
    {
        cout << "enter: ";
        cin >> arr[i];

    }
    arr[0]= arr[0]*0.25;
    arr[1]= arr[1]*0.10;
    arr[2]= arr[2]*0.05;
    arr[3]= arr[3]*0.01;
    sum = arr[0]+arr[1]+arr[2]+arr[3];
    if (sum>=price)
    {
        cout << "true";
    }
    else 
    {
        cout << "false";
    }

    
    

}