//Calculate standard Deviation.
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n,i;
    double data[10], sum=0.0;
    double mean, sd=0.0, avg_sd=0.0;
    cout<<"Enter 10 elements: ";

    for ( i = 0; i < 10; i++)
    {
        cin>>data[i];
        sum += data[i];
    }
    mean = sum/10;
    double mean_diff;
    for ( i = 0; i < 10; i++)
    {
        mean_diff = data[i]-mean;
        sd += pow(mean_diff,2);
    }
    avg_sd = sqrt(sd/10);
    cout<<endl<<"SD: "<<avg_sd;
    return 0;
}