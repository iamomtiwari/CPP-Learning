/*If marks are less than 25, it prints "Grade: F."
If marks are between 25 and 44 (inclusive), it prints "Grade: E."
If marks are between 45 and 49 (inclusive), it prints "Grade: D."
If marks are between 50 and 59 (inclusive), it prints "Grade: C."
If marks are between 60 and 69 (inclusive), it prints "Grade: B."
If marks are 70 or higher, it prints "Grade: A."
If marks are outside the valid range, it prints "Invalid marks entered."*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int m;
    cout<<"Enter marks in between 0 to 100: ";
    cin>>m;
    if(m>=70 and m<=100){
        cout<<"Grade A"<<"\n";
    }
    else if(m>=60 and m<=69){
        cout<<"Grade B"<<"\n";
    }
    else if(m>50 and m<59){
        cout<<"Grade C"<<"\n";
    }
    else if(m>45 and m<49){
        cout<<"Grade D"<<"\n";
    }
    else if(m>25 and m<44){
        cout<<"Grade E"<<"\n";
    }
    else {
        cout<<"Invalid marks range"<<"\n";
    }
}