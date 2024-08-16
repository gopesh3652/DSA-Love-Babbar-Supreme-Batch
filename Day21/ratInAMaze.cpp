#include<iostream>
#include<vector>
using namespace std;

bool isSafe(int srcx, int srcy, int newx, int newy, int maze[][4], int row, int col, vector<vector<bool>>& visited) {
    // path closed
    // out of bound
    // already visited

    if ((newx >= 0 && newx < row) &&
        (newy >= 0 && newy < col) &&
        maze[newx][newy] == 1 &&
        visited[newx][newy] == false) {
        return true;
    }
    return false;
}

void printAllPath(int maze[][4], int row, int col, int srcx, int srcy, string output, vector<vector<bool>>& visited) {
    //  base case
    if (srcx == row - 1 && srcy == col - 1) {
        cout << output << endl;
        return;
    }

    // UP
    int newx = srcx - 1;
    int newy = srcy;
    if (isSafe(srcx, srcy, newx, newy, maze, row, col, visited)) {
        // mark visited
        visited[newx][newy] = true;
        // recursion
        printAllPath(maze, row, col, newx, newy, output + " U ", visited);
        // backtracking
        visited[newx][newy] = false;
    }

    // DOWN
    newx = srcx + 1;
    newy = srcy;
    if (isSafe(srcx, srcy, newx, newy, maze, row, col, visited)) {
        // mark visited
        visited[newx][newy] = true;
        // recursion
        printAllPath(maze, row, col, newx, newy, output + " D ", visited);
        // backtracking
        visited[newx][newy] = false;
    }

    // LEFT
    newx = srcx;
    newy = srcy - 1;
    if (isSafe(srcx, srcy, newx, newy, maze, row, col, visited)) {
        // mark visited
        visited[newx][newy] = true;
        // recursion
        printAllPath(maze, row, col, newx, newy, output + " L ", visited);
        // backtracking
        visited[newx][newy] = false;
    }

    // RIGHT
    newx = srcx;
    newy = srcy + 1;
    if (isSafe(srcx, srcy, newx, newy, maze, row, col, visited)) {
        // mark visited
        visited[newx][newy] = true;
        // recursion
        printAllPath(maze, row, col, newx, newy, output + " R ", visited);
        // backtracking
        visited[newx][newy] = false;
    }

}

int main() {
    int maze[4][4] = {
        {1, 0, 0, 0},
        {1, 1, 0, 1},
        {1, 1, 1, 0},
        {1, 1, 1, 1}
    };

    int row = 4, col = 4;
    int srcx = 0, srcy = 0;
    string output = "";

    vector<vector<bool>> visited(row, vector<bool>(col, false));

    if (maze[0][0] == 0) cout << "No path exitx." << endl;
    else {
        printAllPath(maze, row, col, srcx, srcy, output, visited);
        visited[srcx][srcy] == true;
    }
    return 0;
}