
#include <iostream>
using namespace std ;
main ()
{
            string name ;
        
           cout << "enter name : ";
    getline (cin , name);

    int count = name.length ();
    if (count%2 == 0 )
    {
        cout <<"even ";
    }
    else 
    {
        cout << "odd ";
    }
}