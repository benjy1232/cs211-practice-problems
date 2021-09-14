//Rotate a matrix clockwise 90-degrees
//Works on 3 by 3 matrices
#include<iostream>
using namespace std;
const int ROWS=3;
const int COL=3;

int main(void){
    //Note matrix[x][y] will have x be the number of rows and y be number of columns
    //Couldn't think of a better solution
    int matrix[ROWS][COL]={{1,2,3},{4,5,6},{7,8,9}};
    int newMatrix[ROWS][COL];
    newMatrix[0][0]=matrix[1][0];
    newMatrix[0][1]=matrix[0][0];
    newMatrix[0][2]=matrix[0][1];
    newMatrix[1][0]=matrix[2][0];
    newMatrix[1][1]=matrix[1][1];
    newMatrix[1][2]=matrix[0][2];
    newMatrix[2][0]=matrix[2][1];
    newMatrix[2][1]=matrix[2][2];
    newMatrix[2][2]=matrix[1][2];
    for(int i=0; i<ROWS; i++){
        for(int j=0; j<COL; j++){
            cout << newMatrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}