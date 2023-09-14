#include <iostream>
using namespace std;
int main()
{
    int n,i,j;
    cout<<"\n\nEnter number of element : ";
    cin>>n;
    cout<<"\nEnter "<<n<<" elements : ";
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    for( i = 1 ; i<n;i++)
    {
        int key = arr[i];
        j = i-1;
        while((j>=0) && (arr[j]>key))
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1]=key;
    }
    
    cout<<"\nSorted Array is : \n";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\n\n";
    return 0;
}