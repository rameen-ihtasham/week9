
#include<iostream>
using namespace std ;
main ()
{
    string fruit[4]= {"peach", "apple", "guava", "watermelon"};
    int price[4] ={60 , 70 , 40 ,30};
    string name ;
    int bill;
    int quantity ;
    cout << "enter the name of fruit :";
    cin >> name ;
    cout << "enter the quantity in kgs : ";
    cin >> quantity;
    for (int i=0 ; i<4 ; i++)
    {
        if (name  == fruit[i])
        {
           bill = quantity * price [i];
        }
    }
    cout << bill;
}
