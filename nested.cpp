#include <bits/stdc++.h>
using namespace std;
int main(){
    int age;
    cout<<"Enter ur age to see if u r eligible for the job: ";
    cin>>age;
    if(age<18){
        cout<<"You're too young,not eligible.";
    }
    else if(age>=18 && age<=55){
        cout<<"You're eligible!!";
    }
    else if(age>=56 && age <=100){
        cout<<"You're not eligible";
    }
    else{
        cout<<"Enter valid age!!";
    }
    return 0;
}