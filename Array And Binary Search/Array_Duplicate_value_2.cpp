#include <iostream>
using namespace std;

void duplicate(int arr[], int n){
    int ans;
    for(int i=0; i<n; i++){

        int count=0;
        for(int j=0; j<n; j++){
            if(arr[j]==arr[i]){
                count++;
            }
        }
        if(count==2){
             ans=arr[i];
        }
    }
    cout<< "duplicate element is=>" << ans<<endl;
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
   duplicate(arr,n);
    return 0;
}
