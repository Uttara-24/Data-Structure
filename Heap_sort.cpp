#include<iostream>
using namespace std;

void heapify(int a[], int n, int i){
    int largest = i;
    int l = 2*i;
    int r = 2*i+1;
    while(l<=n && a[l] >= a[largest]){
        largest = l;
    }
    while(r<=n && a[r] >= a[largest]){
        largest = r;
    }
    if (largest != i){
        swap(a[i], a[largest]);
        heapify(a, n, largest);
    }
}
void heapsort(int a[],int n){
    int i;
    for( i = n/2;i>=1;i--){
        heapify(a,n,i);
    }
    for(i=n;i>=1;i--){
        swap(a[i],a[1]);
        heapify(a,n,1);
    }
}

void printArray(int a[], int n) {
    for (int i = 0; i < n; ++i)
      cout << a[i] << " ";
    cout << "\n";
}

int main() {
    int a[] = {1, 12, 9, 5, 6, 10};
    int n = sizeof(a) / sizeof(a[0]);
    heapsort(a, n);
  
    cout << "Sorted array is \n";
    printArray(a, n);
    return 0;
}