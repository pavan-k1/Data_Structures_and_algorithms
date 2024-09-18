//Problem-->Given an m x n integer matrix matrix, if an element is 0, set its entire row and column to 0's.
//You must do it in place.


#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> setZeroes(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        int firstrow=0;
        int firstcol=0;
        for(int i=0;i<m;i++){
            if(matrix[i][0]==0){
firstrow=1;
            }
        }
        for(int j=0;j<n;j++){
            if(matrix[0][j]==0){
                firstcol=1;
            }
        }
        for(int i=1;i<m;i++){
            for(int j=1;j<n;j++){
                if(matrix[i][j]==0){
                    matrix[i][0]=0;
                    matrix[0][j]=0;
                }
            }
        }

        for(int i=1;i<m;i++){
            for(int j=1;j<n;j++){
                if(matrix[i][0]==0||matrix[0][j]==0){
                    matrix[i][j]=0;
                }
            }
        }

        if(firstrow){
            for(int i=0;i<m;i++){
                matrix[i][0]=0;
            }
        }
  if(firstcol){
            for(int i=0;i<n;i++){
                matrix[0][i]=0;
            }
        }
        return matrix;
    }
};


int main() {
    int rows, cols,target;
    

    cout << "Enter the number of rows: ";
    cin >> rows;
    
    cout << "Enter the number of columns: ";
    cin >> cols;
    
    
    vector<vector<int>> matrix;
    
   
 
    cout << "Enter the matrix elements:\n";
    for(int i = 0; i < rows; ++i) {
      
        vector<int> row;
        for(int j = 0; j < cols; ++j) {
            int element;
            cin >> element;
            row.push_back( element);  
        }
        matrix.push_back(row);  
    }
    
    for (int i=0;i<rows;i++){
for(int j=0;j<cols;j++){
cout<<matrix[i][j];
cout<<" ";
}
cout<<endl;
}

cout<<"enter the target element: "<<endl;
cin>>target;
   
   
    Solution o;

 matrix=o.setZeroes(matrix);

       for (int i=0;i<rows;i++){
for(int j=0;j<cols;j++){
cout<<matrix[i][j];
cout<<" ";
}
cout<<endl;
}
    
    return 0;


}