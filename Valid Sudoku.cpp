#include "vector"
#include <iostream>
#include <sstream>
using namespace std;
class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int column[9][9] = {0};
        int row[9][9] = {0};
        int subcell[9][9] = {0};
        for (int i = 0; i < board.size(); ++i) {
            for (int j = 0; j < board[i].size(); ++j) {
                if(board[i][j] == '.'){
                    continue;
                }
                else{
                    int number = board[i][j] - '0' -1;
                    int num_subcell = i/3*3 + j/3;
                    if(row[i][number] || column[j][number] || subcell[num_subcell][number]){
                        return false;
                    }
                    row[i][number] = column[j][number] = subcell[num_subcell][number] = 1;
                }
            }
        }
        return true;
    }
};