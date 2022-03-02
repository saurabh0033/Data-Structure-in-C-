#include<iostream>
using namespace std;
int main(){
int n;
cout<< "Enter the number=>";
cin>> n;
while(n!=0){
    if(n%2==0 || n==1){
        cout<< "true";
        break;
    }
    else{
        cout<< "false";
        break;
    }
}
}
