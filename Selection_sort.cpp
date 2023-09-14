#include <iostream>
using namespace std;
int main()
{
    int n,i,j;
    cout<<"\n\nEnter number of element : ";
    cin>>n;
    cout<<"\nEnter "<<n<<" elements : ";
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    for( i = 0 ; i<n-1;i++)
    {
        int min =i;
        
        for(j=i+1;j<n;j++)
        {
            if(arr[min]>arr[j])
            {
                min = j;
            }
        }
        if (min != i)
        {
            
            int temp=arr[i];
            arr[i]=arr[min];
            arr[min]=temp;
        }
    }
    
    cout<<"\nSorted Array is : \n";
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\n\n";
    return 0;
}