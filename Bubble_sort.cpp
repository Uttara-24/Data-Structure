#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"\n\nEnter number of element : ";
    cin>>n;
    cout<<"\nEnter "<<n<<" elements : ";
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for(int i=0;i<n-1;i++) // outer passes 
    {   int swap=0;
        for(int j=0;j<n-1-i;j++)    // inner comperision
        {   
            if(arr[j+1]<arr[j]){
            int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
            swap=1;
            }
        }
        if(swap==0)
        break;
    }
    cout<<"\nSorted Array is : \n";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\n\n";
    return 0;
}