#include<iostream>

using namespace std;

int main()
{
    int n;
    cout<<"enter size of array";
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++)
    {
        cout<<"enter "<<i<<" element";
        cin>>arr[i];
    }
    //hash array
    int hash[10] = {0};
    for(int i = 0;i<n;i++)
    {
        hash[arr[i]] += 1;
    }
    cout<<hash[1];
    return 0;
}
