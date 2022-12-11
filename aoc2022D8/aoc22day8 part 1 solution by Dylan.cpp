using namespace std;
#include <iostream>
#include <fstream>
#include <bits/stdc++.h>
#include <stdlib.h>


int main() {
  //streaming the file so my code can read it and translate it into a string
  string s;
  ifstream numFile ("aoc22day8inputset.txt");
  
  //defining a grid space for the 4 different directions that are possible to be seen from, including the size of the grids, for grid_top and bottom, I rotated the grid_right by switching rows and columns
  vector<vector<int>> grid_right;
  vector<vector<int>> grid_left;
  vector<vector<int>> grid_top;
  vector<vector<int>> grid_bottom;
  grid_left.resize(99);
  for (int i=0; i<99; i++) {
    grid_left[i].resize(99);
  }
  grid_top.resize(99);
  for (int i=0; i<99; i++) {
    grid_top[i].resize(99);
  }
  grid_bottom.resize(99);
  for (int i=0; i<99; i++) {
    grid_bottom[i].resize(99);
  }

  //setting a vector known as visible to record the visible trees
  vector<int> visible;
  
  //changing the string of input text to numbers to be inputted into the grid
  vector<int> row;
  for (int i=0; i<99; i++) {
    getline(numFile, s);
    for (int j=0; j<99; j++) {
      row.push_back(stoi(s.substr(j, 1)));
    }
    grid_right.push_back(row);
    row = {};
  }

  //inputting values into the 3 other grids from the first grid
  for (int i=0; i<99; i++) {
    for (int j=0; j<99; j++) {
      grid_left[i][j] = grid_right[i][j]; 
    }
  }
  for (int i=0; i<99; i++) {
    for (int j=0; j<99; j++) {
      grid_top[i][j] = grid_right[i][j]; 
    }
  }
  for (int i=0; i<99; i++) {
    for (int j=0; j<99; j++) {
      grid_bottom[i][j] = grid_right[i][j]; 
    }
  }

  //iterating from top to bottom in the for loop with integer i, setting the leftmost value of the row to the highest number
  for (int i=1; i<98; i++) {
    int highest = grid_right[i][0];

    //iterating through the row, upon encountering higher value, replace, and push the higher value into the array of visible trees I set up
    for (int j=1; j<98; j++) {
      if (highest < grid_right[i][j]) {
        visible.push_back(grid_right[i][j]);
        highest = grid_right[i][j];

        //Replacing the tree that I recorded to 0 height so I don't repeat count
        grid_right[i].at(j)=0;
      }
    }
  }
  //Iterating from top to bottom again
  for (int i=1; i<98; i++) {
    int highest = grid_left[i][98];

    //Iterating from right values to left values
    for (int j=97; j>0; j--) {
      if (highest < grid_left[i][j]) {
        
        //this is the check to see if I have already recorded the tree that is visible
        if (grid_left[i][j]==grid_right[i][j]) {
          visible.push_back(grid_left[i][j]);
          highest = grid_left[i][j];
          grid_left[i].at(j)=0;
          grid_right[i].at(j)=0;
        }
        if (grid_left[i][j] != grid_right[i][j]) {
          highest = grid_left[i][j];
          grid_left[i].at(j)=0;
        }
      }
    }
  }
  for (int j=1; j<98; j++) {
    int highest = grid_top[0][j];
    for (int i=1; i<98; i++) {
      if (highest < grid_top[i][j]) {
        if (grid_right[i][j] == grid_top[i][j]) {
          visible.push_back(grid_top[i][j]);
          highest = grid_top[i][j];
          grid_top[i].at(j) = 0;
          grid_right[i].at(j) = 0;
        }
        if (grid_right[i][j] != grid_top[i][j]) {
          highest = grid_top[i][j];
          grid_top[i].at(j) = 0;
        }
      }
    }
  }
  for (int j=1; j<98; j++) {
    int highest = grid_bottom[98][j];
    for (int i=97; i>0; i--) {
      if (highest < grid_bottom[i][j]) {
        if (grid_right[i][j] == grid_bottom[i][j]) {
          visible.push_back(grid_bottom[i][j]);
          highest = grid_bottom[i][j];
          grid_bottom[i].at(j) = 0;
          grid_right[i].at(j) = 0;
        }
        if (grid_right[i][j] != grid_bottom[i][j]) {
          highest = grid_bottom[i][j];
          grid_bottom[i].at(j) = 0;
        }
      }
    }
  }
  /*for (int i=0; i<5; i++) {
    for (int j=0; j<5; j++) {
      cout << grid_right[i][j];
    }
    cout << endl;
  }
  cout << endl;
  for (int i=0; i<visible.size(); i++) {
    cout << visible[i] << ", ";
  }
  cout << endl;*/
  cout << visible.size() + 99 + 98 + 98 + 97;
}