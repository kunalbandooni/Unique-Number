# Unique-Number
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;     //no of elements to be entered, MUST BE ODD
    int a;
    int unique=0;
    for(int i=0;i<n;i++){
        cin>>a;
        unique=unique^a;
    }
    cout<<"Unique number is : "<<unique;
    return 0;
}
