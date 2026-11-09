#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    void mazePath(vector<vector<int>> &maze, vector<vector<int>> &visited, vector<string> &ans,
                  int row, int col, string path) {

        int n = maze.size();

        // 1. Check invalid positions
        if (row < 0 || col < 0 || row >= n || col >= n || maze[row][col] == 0 ||
            visited[row][col] == 1) {
            return;
        }

        // 2. Destination reached
        if (row == n - 1 && col == n - 1) {
            ans.push_back(path);
            return;
        }

        // 3. Mark current cell as visited
        visited[row][col] = 1;

        // 4. Explore all four directions
        mazePath(maze, visited, ans, row + 1, col, path + "D"); // Down

        mazePath(maze, visited, ans, row, col - 1, path + "L"); // Left

        mazePath(maze, visited, ans, row, col + 1, path + "R"); // Right

        mazePath(maze, visited, ans, row - 1, col, path + "U"); // Up

        // 5. Backtracking: unmark current cell
        visited[row][col] = 0;
    }
    vector<string> ratInMaze(vector<vector<int>> &maze) {

        int n = maze.size();

        vector<vector<int>> visited(n, vector<int>(n, 0));
        vector<string> ans;

        mazePath(maze, visited, ans, 0, 0, "");

        return ans;
    }
};

int main() {
    Solution sol;

    vector<vector<int>> maze = {{1, 0, 0, 0}, {1, 1, 0, 1}, {1, 1, 0, 0}, {0, 1, 1, 1}};

    vector<string> ans = sol.ratInMaze(maze);

    for (string s : ans) {
        cout << s << '\n';
    }

    return 0;
}