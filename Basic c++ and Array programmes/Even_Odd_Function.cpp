#include <iostream>
using namespace std;

check(int a){
if(a%2==0){
    return 1;
}
else{
    return 0;
}
}

int main(){
int n;
cout<< "Enter the Number=>";
cin>>n;
if(check(n)){
    cout<< "It is Even Number";
}
else{
    cout<< "It is Odd Number";
}
return 0;
}
