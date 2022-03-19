#include <iostream>
using namespace std;

int duplicate(int arr[], int n){
    for(int i=0; i<n; i++){
        int count=0;
        for(int j=0; j<n; j++){
            if(arr[j]==arr[i]){
                count++;
            }
        }
        if(count==2){
            return arr[i];
        }
    }
}

int main(){
    int  n;
    cout<< "Enter the size of an array=>";
    cin>>n;
    int arr[50];
    cout<< "Enter the Array=>";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<< "duplicate element is=>" <<duplicate(arr,n);
    return 0;
}
