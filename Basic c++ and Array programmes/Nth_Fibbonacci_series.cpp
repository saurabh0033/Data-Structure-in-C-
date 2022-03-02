#include <iostream>
using namespace std;
int fib(int n){
    int a=0;
    int b=1;
    int sum;
    for(int i=2;i<n;i++){
        sum=a+b;
        a=b;
        b=sum;
    }
    return sum;
}
int main(){
int n;
cout<< "Enter the number=>";
cin>>n;
cout<<"Answer is =>"<<fib(n);
}
//0 1 1 2 3 5 8 13 21 ......
