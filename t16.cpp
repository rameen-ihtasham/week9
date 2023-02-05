
#include <iostream>
using namespace std ;
main ()
{
            string name ;
        int count = 0;
           cout << "enter name : ";
    getline (cin , name);
    for (int i = 0 ;name[i] !='\0'  ; i++ )
    {
        if (name[i]== 'a'||name[i]== 'e'||name[i]== 'i'||name[i]== 'o'||name[i]== 'u' )
        {
            continue;
        }
        cout << name[i];
    }
   
}