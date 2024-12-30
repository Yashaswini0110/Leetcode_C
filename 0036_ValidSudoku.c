#include<stdbool.h>
bool isValidSudoku(char** board, int boardSize, int* boardColSize){
    // Row check
    for (int i = 0; i < 9; i++){
        int row[10] = {0};
        for (int j = 0; j < 9; j++){
            if (board[i][j] != '.'){
                int num = board[i][j] - '0';
                if (row[num] == 1)
                    return false;
                row[num] = 1;
            }
        }
    }

    // Column check
    for (int j = 0; j < 9; j++){
        int col[10] = {0};
        for (int i = 0; i < 9; i++){
            if (board[i][j] != '.'){
                int num = board[i][j] - '0';
                if (col[num] == 1)
                    return false;
                col[num] = 1;
            }
        }
    }

    // Subgrid check
    for (int block = 0; block < 9; block++){
        int subgrid[10] = {0};
        for (int i = block / 3 * 3; i < block / 3 * 3 + 3; i++){
            for (int j = block % 3 * 3; j < block % 3 * 3 + 3; j++){
                if (board[i][j] != '.'){
                    int num = board[i][j] - '0';
                    if (subgrid[num] == 1)
                        return false;
                    subgrid[num] = 1;
                }
            }
        }
    }

    return true;
}
