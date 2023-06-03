//LEETCODE 74
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows = matrix.size();
        int cols = matrix[0].size();
        int row = 0;
        int col = cols - 1;
        //explore the matrix like a binary tree, using binary search!
        while(row < rows && col > -1){
            int current_node = matrix[row][col];
            if (current_node == target)
                return true;
            if (current_node < target)
                row++;
            else
                col--;
        }
    return false;
    }
};