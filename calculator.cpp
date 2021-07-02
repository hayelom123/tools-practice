#include <iostream>
using namespace std;

float number1,number2;
float division(float x, float y){
if(y==0) return -1;
   else{
      return x/y;
}
int main(){
/*
Group 4
members name 	               ID
1.Hayelom Kiros		          0609/10 managing
2.Kaleab Daniel	              0649/10 multiplication
3.Habtemariam Wasihun        0582/10 addition
4.Hailegeorgis Kindie		  0592/10 division
5.KaluSeyoum			      0663/10 substraction
Note:each group must create branch 
and and complete their task.i will organize the merging
    */
    float result = 0;
    int choice;
    cout << "calculator\n";
    cout << "\nmenu\n";
    cout<< "\n 1.addition";
    cout<< "\n 2.multiplication";
    cout<< "\n 1.division";
    cout<< "\n 1.substraction";
    cin >>choice;
    cout<< "\nEnter the first number";
    cin>>number1;
    cout<< "\nEnter the second number";
    cin>>number2;
    switch(choice){
        case 1: //addition
         break;
        case 3: //division
          result=division(number1,number2);
                cout<< "result:"<<result<<endl;
         break;
         
    
        
}
