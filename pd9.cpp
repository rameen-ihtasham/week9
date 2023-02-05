
#include <iostream>
using namespace std;
main()
{
    int value;
    
    string moves[10] = {"Shimmy", "Shake", "Pirouette", "Slide", "Box Step", "Headspin", "Dosado",
                        "Pop", "Lock", "Arabesque"};
    string pin;
    cout << "enter the pincode : ";
    cin >> pin;
    bool flag = false ;
    for (int i = 0; pin[i] != '\0'; i++)
    {
        if (pin[i]== '1' || pin[i]== '2' ||  pin[i]== '3' ||  pin[i]== '4' ||  pin[i]== '5' || pin[i]== '6' || pin[i]== '7' || pin[i]== '8' || pin[i]== '9'|| pin[i]== '0')
        {
            flag = true ;
            
        }
        else 
        {
            flag = false ;
            cout << "invalid";
            break;
            
        }
    }
  
     if (flag == true)
    {
        for (int i = 0; pin[i] != '\0'; i++)
        {
            

            {
                if (pin[i] == '0')
                {
                    value = i + 0;
                    if (value >= 10)
                    {
                        value = value - 10;
                    }
                    cout << moves[value] << ",";
                }
                else if (pin[i] == '1')
                {
                    value = i + 1;
                    if (value >= 10)
                    {
                        value = value - 10;
                    }
                    cout << moves[value] << ",";
                }
                else if (pin[i] == '2')
                {
                    value = i + 2;
                    if (value >= 10)
                    {
                        value = value - 10;
                    }
                    cout << moves[value] << ",";
                }
                else if (pin[i] == '3')
                {
                    value = i + 3;
                    if (value >= 10)
                    {
                        value = value - 10;
                    }
                    cout << moves[value] << ",";
                }
                else if (pin[i] == '4')
                {
                    value = i + 4;
                    if (value >= 10)
                    {
                        value = value - 10;
                    }
                    cout << moves[value] << ",";
                }
                else if (pin[i] == '5')
                {
                    value = i + 5;
                    if (value >= 10)
                    {
                        value = value - 10;
                    }
                    cout << moves[value] << ",";
                }
                else if (pin[i] == '6')
                {
                    value = i + 6;
                    if (value >= 10)
                    {
                        value = value - 10;
                    }
                    cout << moves[value] << ",";
                }
                else if (pin[i] == '7')
                {
                    value = i + 7;
                    if (value >= 10)
                    {
                        value = value - 10;
                    }
                    cout << moves[value] << ",";
                }
                else if (pin[i] == '8')
                {
                    value = i + 8;
                    if (value >= 10)
                    {
                        value = value - 10;
                    }
                    cout << moves[value] << ",";
                }
                else if (pin[i] == '9')
                {
                    value = i + 9;
                    if (value >= 10)
                    {
                        value = value - 10;
                    }
                    cout << moves[value] << ",";
                }
            }
        }
    }
}
