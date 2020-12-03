/*

Find the unique number out of the following (odd elements inputted):-
Input:-
7
1 1 2 2 3 3 4
output:- 4
Input:- 
5
1 3 5 1 3 
Output:- 5

*/
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
