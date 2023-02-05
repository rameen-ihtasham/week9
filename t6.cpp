
#include <iostream>
using namespace std ;
main()
{
    string name ;
    cout << "enter name : ";
    getline (cin , name);
    for (int i = 0 ;name[i] !='\0'  ; i++ )
    {
        cout << name [i]<<" is on "<< i+1 << " position "<<endl;
    }
}
