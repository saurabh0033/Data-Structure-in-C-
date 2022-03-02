#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter the number=>";
cin>>n;
int product=1;
int sum=0;
while(n>0){
    int rem=n%10;
    product=product*rem;
    sum=sum+rem;
    n=n/10;
}
cout<<"output is=>"<<product-sum<<endl;
return 0;

}
