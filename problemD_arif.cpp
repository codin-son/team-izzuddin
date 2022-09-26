#include <iostream>
#include <limits.h>
using namespace std;
 
int maxTripletSum(int arr[], int n)
{
    // Initialize sum with INT_MIN
    int sum = INT_MIN;
 
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            for (int k = j + 1; k < n; k++)
                if (sum < arr[i] + arr[j] + arr[k])
                    sum = arr[i] + arr[j] + arr[k];               
    return sum;        
}
 
// Driven code
int main()
{
    
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout << maxTripletSum(arr, n);
    return 0;
}