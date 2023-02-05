
#include <iostream>
using  namespace std ;
main ()
{
            string name ;
        
           cout << "enter name : ";
    getline (cin , name);
    char letter ;
    cout << "enter the letter to search : ";
    cin >> letter ;
    int count = name.length ();
    if (name [count-1] == letter)
    {
        cout << "true";
    }
    else 
    { 
        cout << "false";
    }


}