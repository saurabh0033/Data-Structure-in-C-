#include <iostream>
using namespace std;

int fact(int n){
int temp=1;
for(int i=1;i<=n;i++){
    temp=temp*i;
}
return temp;
}

int main(){
int n;
cout<< "Enter the number=>";
cin>>n;
cout<<fact(n);
}
