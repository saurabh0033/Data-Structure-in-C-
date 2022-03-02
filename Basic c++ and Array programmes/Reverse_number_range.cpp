#include<iostream>
using namespace std;
int main(){
int n;
cout<< "Enter the number=>";
cin>>n;
int ans=0;
if(n>INT_MAX/10 || n<INT_MIN/10){
    cout<<"0"<<endl;
}
else{
 while(n!=0){
    int digit = n%10;
    ans= (ans*10)+digit;
    n=n/10;
}
cout<<ans<<endl;

}
return 0;
}
