//Find the largest element using array
#include <iostream>
using namespace std;

int main(){
    int i ,n;
    double arr[5];
    cout<<"Enter 5 numbers: ";
    
    //store number
    for ( i = 0; i < 5; i++)
    {
        cin>>arr[i];
    }
    //loop to store the largest number to arr[0]
    for ( i = 1; i < 5; i++)
    {
        if (arr[0] < arr[i])
        {
            arr[0] = arr[i];
        }
        
    }
    cout<<"Largest number: "<<arr[0];
    return 0;
}