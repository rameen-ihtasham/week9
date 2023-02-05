
#include <iostream>
using namespace std ;
main ()
{
        string name ;
        int sum = 0;
           cout << "enter name : ";
    getline (cin , name);
    for (int i = 0 ;name[i] !='\0'  ; i++ )
    {
        sum ++;
    }
    cout << sum ;
}