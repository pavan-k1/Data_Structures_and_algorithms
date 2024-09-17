#include<iostream>
#include<vector>
using namespace std;


class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int count=0;
        int row=matrix.size();
        int col=matrix[0].size();
        int total=row*col;
        int startingRow=0;
        int startingCol=0;
        int endingRow=row-1;
        int endingCol=col-1;
         while(count<total){
        for(int i=startingCol;i<=endingCol&&count<total;i++){
        
          ans.push_back(matrix[startingRow][i]);
 count++;
        }
        startingRow++;
      
        for(int i=startingRow;i<=endingRow&&count<total;i++){
            
                 ans.push_back(matrix[i][endingCol]);
count++;
        }
        endingCol--;

        for(int i=endingCol;i>=startingCol&&count<total;i--){
            
                 ans.push_back(matrix[endingRow][i]);
count++;
        }
        endingRow--;

        for(int i=endingRow;i>=startingRow&&count<total;i--){
            
                 ans.push_back(matrix[i][startingCol]);
count++;
        }
        startingCol++;

    }
    return ans;
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
    vector<int> ans;
 
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
    
    for (int i=0;i<rows;i++){
for(int j=0;j<cols;j++){
cout<<matrix[i][j];
cout<<" ";
}
cout<<endl;
}

   
   
    Solution o;

   ans =o.spiralOrder(matrix);
    cout<<"THE SPIRAL PRINT OF THE MATRIX IS:"<<endl;
     for(int i = 0; i < rows*cols; ++i) {
        
            cout << ans[i] << " ";
        cout << "\n";
    }
    
    return 0;


}
