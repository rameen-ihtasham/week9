
#include <iostream>
using namespace std ;
main ()
{
    string movie[5]= {"gladiator", "starwars", "terminator", "talkinglives", "tombrider"};
    string name;
    cout <<"enter movie name : ";
    cin >> name ;
    float result ;
    
    float dis1 = 500 - (500*5.0)/100.0;
    float dis2 = 500 - (500*10.0)/100.0;
    for (int i = 0 ; i < 5 ; i ++)
    {
        if (name == movie[i] && i%2 == 0 )
        {
            result= dis2 ;
            
      }
      else if(name==movie[i]&& i%2 ==1 )
      {
        result =  dis1 ;
      }
  


    }
    cout << result;
}