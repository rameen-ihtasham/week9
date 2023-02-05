
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
    for (int j = sum ; j >= 0 ; j--)
    {
        cout << name [j]<<endl ;
    }
}