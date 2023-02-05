
#include <iostream>
using namespace std ;
main ()
{
  int arr[2] = {1 , 2 };
  int arr2 []={12,82,281,88,9,142};
  int count = sizeof(arr2)/4;
  cout << arr[0] << ",";
  for (int i =0 ; i<count ; i++)
  {
    cout << arr2[i]<< ",";
  }
  cout << arr[1] << ",";
  

}