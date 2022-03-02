#include<iostream>;
using namespace std;
int main(){
int n;
cout<< "Enter the percentage=>";
cin>> n;
switch(n){
case 90:
    cout<< "Congratulation you get Distinction....!"<<endl;
    break;
case 70:
    cout<< "Congratulation you get First Class....!"<<endl;
    break;
case 60:
    cout<< "Congratulation you get Second Class....!"<<endl;
    break;
case 50:
    cout<< "Congratulation you get Third Class....!"<<endl;
    break;
case 34:
    cout<< "you are Failed....!"<<endl;
    break;
}
}
