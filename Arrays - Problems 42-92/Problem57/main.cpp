//Transpose a matrix
#include<iostream>
using namespace std;
const int ROW=3;
const int COL=2;

int main(void){
    int matrix[ROW][COL]={{0,1},{2,3},{4,5}};
    int newMatrix[COL][ROW];
    for(int x=0; x<ROW; x++){
        for(int y=0; y<COL; y++){
            cout << matrix[x][y] << " ";
        }
        cout << endl;
    }
    for(int i=0;i<COL;i++){
        for(int j=0; j<ROW; j++){
            newMatrix[i][j]=matrix[j][i];
        }
    }
    cout << "Transposed Matrix\n";
    for(int l=0;l<COL;l++){
        for(int k=0;k<ROW;k++){
            cout << newMatrix[l][k] << " ";
        }
        cout << endl;
    }
}