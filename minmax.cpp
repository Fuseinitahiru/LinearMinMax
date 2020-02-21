#include<iostream>
using namespace std;
int main ()
{
  int arr[10];
	int m;
	int i; 
	int max; 
	int min;
    cout << "Enter the size of the array : "; //number of elements
    
    cin >> m;
    cout << "Enter the elements of the array : "; // the elements values
    
    for (i = 0; i < m; i++)
    	cin >> arr[i];
    max = arr[0];
    
    for (i = 0; i < m; i++)
    {
        if (max < arr[i])
            max = arr[i];
    }
    min = arr[0];
    for (i = 0; i < m; i++)
    {
        if (min > arr[i])
            min = arr[i];
    }
    cout << "Maximum  element : " << max;
    cout << " Minnimum  element : " << min;
    return 0;
}
