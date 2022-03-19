#include <iostream>
using namespace std;

bool isPossible(int arr[], int n, int m, int mid){
    int stdCount=1;
    int pagesum=0;
    for(int i=0; i<n; i++){
        if(pagesum+ arr[i]<= mid){
            pagesum+=arr[i];
        }
        else{
            stdCount++;
            pagesum=arr[i];
            if(stdCount>m || pagesum > mid){
                return false;
            }
        }
    }
    return true;
}

int bookAll(int arr[], int n, int m){
    int s=0;
    int sum=0;
    int ans=-1;
    for(int i=0; i<n; i++){
        sum=sum+arr[n];
    }
    int e=sum;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(isPossible(arr,n,m,mid)){
            ans=mid;
            e=mid-1;
        }
        else{
            s=mid+1;
        }
         mid=s+(e-s)/2;
    }
    return ans;
}

int main(){
    int arr[4]={10,20,30,40};
    cout<< "Book Allocation=>"<< bookAll(arr,4,2);
    return 0;
}
