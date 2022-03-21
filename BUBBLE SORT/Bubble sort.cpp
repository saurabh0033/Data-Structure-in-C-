#include <iostream>

using namespace std;

int main(){
    int arr[6]={10,12,13,5,78,1};
    int n=6;
    for(int i=0; i<n; i++){
        for(int j=0; j<n-1; j++){
            for(int k=j+1; k<n; k++){
                if(arr[j]> arr[k]){
                    swap(arr[j], arr[k]);
                }
            }
        }

    }
}

