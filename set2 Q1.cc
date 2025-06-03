#include <bits/stdc++.h>
using namespace std;

bool canPlaceQueen(int currRow, int currCol, vector<string>& chessBoard, int size) {
    for(int i = 0; i < size; i++) {
        if(chessBoard[i][currCol] == 'Q') return false;
    }
    for(int j = 0; j < size; j++) {
        if(chessBoard[currRow][j] == 'Q') return false;
    }
    for(int i = currRow, j = currCol; i >= 0 && j >= 0; i--, j--) {
        if(chessBoard[i][j] == 'Q') return false;
    }
    for(int i = currRow, j = currCol; i >= 0 && j < size; i--, j++) {
        if(chessBoard[i][j] == 'Q') return false;
    }
    return true;
}

void solveNQueens(int rowIndex, vector<string>& chessBoard, int size, vector<vector<string>>& allSolutions) {
    if(rowIndex == size) {
        allSolutions.push_back(chessBoard);
        return;
    }

    for(int colIndex = 0; colIndex < size; colIndex++) {
        if(canPlaceQueen(rowIndex, colIndex, chessBoard, size)) {
            chessBoard[rowIndex][colIndex] = 'Q';
            solveNQueens(rowIndex + 1, chessBoard, size, allSolutions);
            chessBoard[rowIndex][colIndex] = '.';
        }
    }
}

int main() {
    int boardSize;
    cin >> boardSize;
    vector<string> chessBoard(boardSize, string(boardSize, '.'));
    vector<vector<string>> result;

    solveNQueens(0, chessBoard, boardSize, result);

    if(result.empty()) {
        cout << "No solution exists!!!";
    } else {
        cout << "[";
        for(int sol = 0; sol < result.size(); sol++) {
            cout << "[";
            for(int i = 0; i < boardSize; i++) {
                cout << "'";
                for(int j = 0; j < boardSize; j++) {
                    cout << result[sol][i][j];
                }
                cout << "'";
                if(i != boardSize - 1) {
                    cout << ", ";
                }
            }
            cout << "]";
            if(sol != result.size() - 1) {
                cout << ", ";
            }
        }
        cout << "]";
    }
}
