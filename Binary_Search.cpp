#include<iostream>
using namespace std;

int main(){
    int n,a[n],i,e;
    cout<<"Enter no of elements:";
    cin>>n;
    cout<<"Enter elements:";
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Enter element to search:";
    cin>>e;
    int l = 0;
    int r = n-1;
    int mid;
    while(l<=r){
        mid = (l+r)/2;
        if(e==a[mid]){
            cout<<"Element found at "<<mid<<" position.";
            break;
        }
        else if (e>a[mid]){
            l = mid+1;
        }
        else if (e<a[mid]){
            r=mid-1;
        }
        else
           cout<<"Element not found!";
    }
    return 0;
}