// calculate the average  using arrays.
#include <iostream>
using namespace std;

int main(){
    int n,i;
    double num[100], sum=0.0, average;
    cout<<"enter the number of data: ";
    cin>>n;

    //check the range
    while (n> 100 || n< 1)
    {
        cout<<"Error ! not in the range of 1-100.";
        cout<<"Enter the number again: ";
        cin>>n;
    }
    //loop to enter the array
    for ( i = 0; i < n; i++)
    {
        cout<<i+1<<". Enter the number: ";
        cin>>num[i];
        sum += num[i];
    }
    average = sum /2;
    cout<<"Average = "<<average;
    return 0;
}