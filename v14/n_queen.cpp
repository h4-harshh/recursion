#include <bits/stdc++.h>
using namespace std;

bool isSafe(int Row, int Col, vector<string> &board, int n)
{
    int row = Row;
    int col = Col;

    // upper left diagonal
    while (row >= 0 && col >= 0)
    {
        if (board[row][col] == 'Q')
        {
            return false;
        }
        row--;
        col--;
    }

    row = Row;
    col = Col;

    // left col
    while (col >= 0)
    {
        if (board[row][col] == 'Q')
        {
            return false;
        }
        col--;
    }

    row = Row;
    col = Col;

    // lower left diagonal
    while (row <= n - 1 && col >= 0)
    {
        if (board[row][col] == 'Q')
        {
            return false;
        }
        row++;
        col--;
    }

    return true;
}

void solve(int col, vector<string> &board, vector<vector<string>> &result, int n)
{
    if (col >= n)
    {
        result.push_back(board);
        return;
    }

    for (int row = 0; row < n; row++)
    {
        if (isSafe(row, col, board, n))
        {
            board[row][col] = 'Q';
            solve(col + 1, board, result, n);
            board[row][col] = '.';
        }
    }
}

vector<vector<string>> find_valid(int n)
{
    vector<vector<string>> result;
    vector<string> board(n);
    string s(n, '.');

    for (int i = 0; i < n; i++)
    {
        board[i] = s;
    }

    solve(0, board, result, n);

    return result;
}
int main()
{
    int n = 4;
    vector<vector<string>> str = find_valid(n);
    for (auto temp : str)
    {
        for (auto x : temp)
        {
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}
