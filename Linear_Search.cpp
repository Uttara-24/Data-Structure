#include<iostream>
using namespace std;
int linear_search(int a[],int n,int e){
    for(int i=0;i<n;i++){
        if (e==a[i])
           return i+1;
    }
    return -1;
}
int main()
{
    int n, a[n],i,e;
    cout<<"Enter number of elements:";
    cin>>n;
    cout<<"Enter elements in array:";
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<endl;
    cout<<"Enter element to be searched:";
    cin>>e;
    int res = linear_search(a,n,e);
    cout<<"Element to be searched is "<<e<<" at index "<<a[i]<<endl;
    
    if (res == -1){
        cout<<"Element not present in array";
    }
    else{
        cout<<"Element is present in array";
    }
    return 0;
}