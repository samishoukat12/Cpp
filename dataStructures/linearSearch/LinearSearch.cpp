#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
  int val;
  cout << "how much value you want to add in array"
       << " ";
  cin >> val;
  int arr[val], n;

  for (int j = 0; j < val; j++)
  {
    cout << "enter value for index" << j << endl;
    cin >> arr[j];
  }
  int arrSize = sizeof(arr) / sizeof(arr[0]);
  cout << "enter value to be search";
  cin >> n;
  for (int i = 0; i <= arrSize; i++)
  {
    if (n == arr[i])
    {
      cout << "Value Found at index" << i;
      break;
    }
  }
}