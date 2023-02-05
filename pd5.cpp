
#include <iostream>
using namespace std ;
main ()
{
    string words[4];

    for (int i=0 ; i < 4 ; i++)
    {
        cout <<"enter :";
        cin>>words[i];
    }
    if (words[0]==words[1]&& words[1]==words[2]&& words[2]== words[3]&& words[3]== words[0])
    {
        cout << "true ";
    }
    else 
    {
        cout << "false";
    }

    
}