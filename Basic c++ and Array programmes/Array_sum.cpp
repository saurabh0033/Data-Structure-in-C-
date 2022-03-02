#include <iostream>
using namespace std;

int sum(int arr[],int n){
    int add=0;
    for(int i=0; i<n; i++){
        add=add+arr[i];
    }
    return add;
}

int main(){
int n;
cout<< "Enter the size of An Array=>";
cin>>n;
int arr[n];
cout<< "Enter the value of Array=>";
for(int i=0; i<n; i++){
    cin>> arr[i];
}
cout<< "sum of the Array is=>"<< sum(arr,n);
}
