using namespace std;
#include <iostream>
#include <fstream>
#include <bits/stdc++.h>
#include <stdlib.h>

int main() {
  string s;
  ifstream numFile ("aoc22day8inputset.txt");
  vector<vector<int>> grid;
  vector<int> row;
  for (int i=0; i<99; i++) {
    getline(numFile, s);
    for (int j=0; j<99; j++) {
      row.push_back(stoi(s.substr(j, 1)));
    }
    grid.push_back(row);
    row = {};
  }
  vector<int> up;
  vector<int> down;
  vector<int> right;
  vector<int> left;
  vector<int> scenic_scores;
  for (int i=1; i<98; i++) {
    for (int j=1; j<98; j++) {
      int highest = grid[i][j];
      for (int k=j-1; k>=0; k--) {
        if (highest > grid[i][k]) {
          left.push_back(grid[i][k]);
        }
        if (highest <= grid[i][k]) {
          left.push_back(grid[i][k]);
          break;
        }
      }
      for (int k=j+1; k<=98; k++) {
        if (highest > grid[i][k]) {
          right.push_back(grid[i][k]);
        }
        if (highest <= grid[i][k]) {
          right.push_back(grid[i][k]);
          break;
        }
      }
      for (int k=i-1; k>=0; k--) {
        if (highest > grid[k][j]) {
          up.push_back(grid[k][j]);
        }
        if (highest <= grid[k][j]) {
          up.push_back(grid[k][j]);
          break;
        }
      }
      for (int k=i+1; k<=98; k++) {
        if (highest > grid[k][j]) {
          down.push_back(grid[k][j]);
        }
        if (highest <= grid[k][j]) {
          down.push_back(grid[k][j]);
          break;
        }
      }
      int scenic_score = left.size() * right.size() * up.size() * down.size();
      scenic_scores.push_back(scenic_score);
      left = {};
      right = {};
      up = {};
      down = {};
    }
  }
  int highest = 0;
  for (int i=0; i<scenic_scores.size(); i++) {
    if (highest < scenic_scores[i]) {
      highest = scenic_scores[i];
    }
    //cout << scenic_scores[i] << ", ";
  }
  cout << endl << highest;
}