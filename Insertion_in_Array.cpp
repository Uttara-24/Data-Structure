#include<iostream>
using namespace std;
int main()
{
    int n,a[n];
    int ele,pos,i;
    cout<<"Enter no of elements:";
    cin>>n;
    cout<<"Enter the element you want to insert:";
    cin>>ele;
    cout<<"Enter position:";
    cin>>pos;
    cout<<"Enter elements:";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=n-1;i<pos;i++)
    {
        a[i+1]=a[i];
    }
    a[pos]=ele;
    n=n+1;
    cout<<"After Insertion ---->>";
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }
}