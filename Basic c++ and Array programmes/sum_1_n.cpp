#include<iostream>
using namespace std;
int main(){
int n;
cout<< "ENter the value of n =>";
cin>>n;
int sum=0;
for(int i=1;i<=n;i++){
    sum=sum+i;
}
cout<< " the sum of the number 1 to ${n} is ="<<sum;
return 0;
}
