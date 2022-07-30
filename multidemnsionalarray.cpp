//Adding Two matrics Using Multi-demensional array
#include <iostream>
using namespace std;

int main(){
    int rows=2 , columns=3;

    //create 2D arrays
    int matrixA[rows][columns];
    int matrixB[rows][columns];
    int sum[rows][columns];

    cout<<"Enter elements of 1st matrix: "<<endl;

    //take input for matrix A
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cout<<"Enter element a: "<<i+1<<j+1<<": ";
            cin>>matrixA[i][j];
        }
        
    }
    
    //take input for matrix B
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cout<<"Enter element b: "<<i+1<<j+1<<": ";
            cin>>matrixB[i][j];
        }
        
    }
    //calculate nd print sum
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            sum[i][j] = matrixA[i][j]+matrixB[i][j];
            cout<<sum[i][j]<<"\t";

            if (j == columns-1)
            {
                cout<<endl;
            }
            
        }
        
    }
    return 0;
}