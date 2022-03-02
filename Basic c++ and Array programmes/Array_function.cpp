#include <iostream>
using namespace std;

getArray(int n){
    int arr[n];
    int a;
    cout<< "Enter the Array=>"<<" ";
    for(int i=0;i<n;i++){
        cin>>a;
        arr[i]=a;
    }
    cout<<"yours array is=> [";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<"]";
}
int main(){
int n;
cout<< " Enter the size of array that have you want to create=>";
cin>>n;
getArray(n);
}
