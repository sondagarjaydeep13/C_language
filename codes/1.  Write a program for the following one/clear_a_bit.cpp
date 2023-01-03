
#include<iostream>
using namespace std;

int main(){

    
int num, pos;

cout<<"enter the number.."<<endl;

cin>>num;

cout<<"enter the position..,"<<endl;

cin>>pos;

cout<<"Before Number = " << num <<endl;                      
 
num = num &~ (1<<pos);

cout<<"after number = " << num <<endl;       


return 0;
}

