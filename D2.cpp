#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int j = 0; j<n; j++) cin>>arr[j];
    int l = 0, r = n-1;

    int sol[2];
    int count = 0;
    while(r >= l)
    {
        if(arr[r] > arr[l]){
            sol[count%2] += arr[r];
            r--;
        }
        else 
        {   
            sol[count%2] += arr[l];
            l++;
        }
        count++;
    }

    cout<<sol[0]<<" "<<sol[1];
}