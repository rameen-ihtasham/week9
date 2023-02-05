
#include <iostream>
using namespace std ;
main ()
{
    int size ,num, mod;
    bool answer =  false ;
    cout <<"enter the number of digits : ";
    cin >> size ;
    int arr[size];
    for (int i = 0 ; i<size ; i++)
    {
        cout << "enter number : ";
        cin >> arr[i];
        if (arr[i] <= 9 )
        {
        
        if (arr[i]== 7 )
        {
            answer = true ;
            break;
        }  
        }
        else 
        {
            while (arr[i] != 0)
            {
            

            mod = arr[i]%10;
            
           
            if (mod == 7 )
        {
            answer = true ;
            break;
        } 
            arr[i] = arr[i]/10; ;
           
            }

        }
       
        
    }
    if (answer == true)
    {
        cout << "BOOOMMM!!!";
    
    }
    else 
    {
        cout << "there is no 7 in the array .";
    }
}