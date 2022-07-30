//Find the Transpose of a Matrix
#include <iostream>
using namespace std;

int main(){
    int rows, columns;
    int matrix[10][10], transpose[10][10];
    
    cout<<"enter the number of rows and columns: ";
    cin>>rows>>columns;

    cout<<"\nEnter elements of matrix: "<<endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cout<<"Enter element a"<<i+1<<j+1<<". ";
            cin>>matrix[i][j];
        }
        
    }
    
    cout<<"\nEnter the matrix: "<<endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cout<<matrix[i][j]<<"\t";
            if (j == columns-1)
            {
                cout<<endl;
            }
            
        }
        
    }
    
    cout<<"\n Transpose of matrix."<<endl;
    for (int i = 0; i < columns; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            transpose[i][j] = matrix[j][i];
            cout<<transpose[i][j]<<"\t";
            if (j == rows-1)
            {
                cout<<endl;
            }
            
        }
        
    }
    
    return 0;
}