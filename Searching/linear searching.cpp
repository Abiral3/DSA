#include <iostream>
using namespace std;

int search(int arr[], int n, int x)
{
    for (int i = 0; i < n; i++) 
        if (arr[i] == x)        
            return i;          
    return -1;
}


int main()
{
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];
  	cout<<"Enter the elements of array: "<<endl;
  	for(int i=0; i<n; i++){
  		cin>>arr[i];
	  }

    int x;
    cout << "Enter element to search: ";
    cin >> x;

    int result = search(arr, n, x);
    (result == -1)
        ? cout << "Element is not present in array"
        : cout << "Element is present at index: " << result;
    return 0;
}
