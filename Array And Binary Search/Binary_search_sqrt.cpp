#include <iostream>
using namespace std;

long long int sqrt(int n){
    int s=0;
    int e=n;
    long long int m=s+(e-s)/2;
    long long int ans=-1;
    while(s<=e){
       long long int sq=m*m;
        if(sq==n){
            return m;
        }
        if(sq>n){
            ans=m;
            e=m-1;
        }
        else if(sq<n){
            s=m+1;
        }
        m=s+(e-s)/2;
    }
    return ans;
}

int main(){
    int n= 1225;
    cout<< "Square root of "<<n<< " is=>"<< sqrt(n);
    return 0;
}
