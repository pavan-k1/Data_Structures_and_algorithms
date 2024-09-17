//Write an efficient algorithm that searches for a value target in an m x n integer matrix matrix. This matrix has the following properties:

//integers in each row are sorted in ascending from left to right.
//Integers in each column are sorted in ascending from top to bottom.



#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int i=0;
        int j=matrix[0].size()-1;

        while(i<matrix.size()&&j>=0){
            if(matrix[i][j]==target){
                return 1;
            }
            else if(matrix[i][j]<target){
                i++;
            }
            else{
                j--;
            }
        }
        return 0;
        
    }
};

int main() {
    int rows, cols,target;
    
    // Get the number of rows and columns from the user
    cout << "Enter the number of rows: ";
    cin >> rows;
    
    cout << "Enter the number of columns: ";
    cin >> cols;
    
    
    vector<vector<int>> matrix;
   
 
    cout << "Enter the matrix elements:\n";
    for(int i = 0; i < rows; ++i) {
        // Resize the current row to have 'cols' columns
        vector<int> row;
        for(int j = 0; j < cols; ++j) {
            int element;
            cin >> element;
            row.push_back( element);  // Fill the row with input elements
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

cout<<"enter the target element: "<<endl;
cin>>target;
   
   
    Solution o;
int ans;
   ans= o.searchMatrix(matrix,target);
   if(ans){
    cout<<"The element is present"<<endl;
   }
   else{
    cout<<"The element is not present"<<endl;
   }
   
    
    return 0;


}