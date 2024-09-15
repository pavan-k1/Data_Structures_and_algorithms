#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    vector<vector<int>> rotate(vector<vector<int>>& matrix) {
        int row=matrix.size();
       
        for(int i=0;i<row;i++){//for transposing the matrix
            for(int j=0;j<=i;j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        for(int i=0;i<row;i++){
             int s=0;
        auto e=matrix[i].size()-1;
        while(s<e){
            swap(matrix[i][s],matrix[i][e]);
            s++;
            e--;
        }
        }
        return matrix;
    }
};


 

int main() {
    int rows, cols;
    
    // Get the number of rows and columns from the user
    cout << "Enter the number of rows: ";
    cin >> rows;
    
    cout << "Enter the number of columns: ";
    cin >> cols;
    
    
    vector<vector<int>> matrix;
    
 
    cout << "Enter the matrix elements:\n";
    for(int i = 0; i < rows; ++i) {
        // Resize the current row to have 'cols' columns
        vector<int> row(cols);
        for(int j = 0; j < cols; ++j) {
            int element;
            cin >> element;
            row[j] = element;  // Fill the row with input elements
        }
        matrix.push_back(row);  // Add the row to the matrix
    }
    
   
   
    Solution o;

    matrix=o.rotate(matrix);
    cout<<"THE ROTATED IMAGE IS:"<<endl;
     for(int i = 0; i < rows; ++i) {
        for(int j = 0; j < cols; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << "\n";
    }
    
    return 0;


}