#include <iostream>
using namespace std;

void pairSum(int arr[], int n, int m){
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
           for(int k=j+1; k<n; k++){
                 if((arr[i]+arr[j]+arr[k])==m){
                    cout<< "pair is=>" << arr[i] << " " <<arr[j]<< " " <<arr[k]<< endl;
                    break;
                }
           }
        }
    }
}

int main(){
    int n, arr[50],m;
    cout<< "Enter the size of an array=>";
    cin>> n;
    cout<< "Enter the Elements=>";
    for(int i=0; i<n; i++){
        cin>> arr[i];
    }
    cout<< "Enter the Number=>";
    cin>> m;

    pairSum(arr,n,m);
    return 0;

}

