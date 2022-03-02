#include<iostream>
#include<math.h>
using namespace std;
int main(){
int n;
int ans=0;
int i=0;
cout<< "Enter the number=>";
cin>>n;
while(n!=0){
    int bit = n&1;
    ans = ans + ( bit * pow(10,i));
    n=n>>1;
    i++;
}
    cout<< "Answer is ="<<ans;
return 0;
}
