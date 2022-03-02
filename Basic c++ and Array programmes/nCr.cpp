#include <iostream>
using namespace std;

int fact(int n){
int temp=1;
for(int i=1;i<=n;i++){
    temp=temp*i;
}
return temp;
}


int nCr(int n, int r, int a){
int num= fact(n);
int den = fact(r) * fact(a);
int ans= num/den;
return ans;
}

int main(){
int n,r;
cout<< "Enter the value of n=>";
cin>>n;
cout<< "Enter the value of r=>";
cin>>r;
int a=n-r;
cout<< "Answer is =>"<<nCr(n,r,a);
}
