class Solution {
public:

    bool issafe(vector<vector<char>>& board, int row, int col, int dig) {

        char ch = '0' + dig;

        // Check row
        for(int j = 0; j < 9; j++) {
            if(board[row][j] == ch) {
                return false;
            }
        }

        // Check column
        for(int i = 0; i < 9; i++) {
            if(board[i][col] == ch) {
                return false;
            }
        }

        // Check 3x3 box
        int srow = (row / 3) * 3;
        int scol = (col / 3) * 3;

        for(int i = srow; i < srow + 3; i++) {
            for(int j = scol; j < scol + 3; j++) {
                if(board[i][j] == ch) {
                    return false;
                }
            }
        }

        return true;
    }

    bool helper(vector<vector<char>>& board, int row, int col) {

        // All cells filled
        if(row == 9) {
            return true;
        }

        int nextrow = row;
        int nextcol = col + 1;

        // Move to next row
        if(nextcol == 9) {
            nextrow = row + 1;
            nextcol = 0;
        }

        // Already filled cell
        if(board[row][col] != '.') {
            return helper(board, nextrow, nextcol);
        }

        // Try digits 1 to 9
        for(int dig = 1; dig <= 9; dig++) {

            if(issafe(board, row, col, dig)) {

                // PICK
                board[row][col] = '0' + dig;

                // EXPLORE
                if(helper(board, nextrow, nextcol)) {
                    return true;
                }

                // UNDO
                board[row][col] = '.';
            }
        }

        return false;
    }

    void solveSudoku(vector<vector<char>>& board) {
        helper(board, 0, 0);
    }
};