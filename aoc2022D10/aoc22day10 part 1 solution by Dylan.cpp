using namespace std;
#include <iostream>
#include <fstream>
#include <bits/stdc++.h>
#include <stdlib.h>

int main() {
  string s;
  ifstream numFile ("aoc22day10inputset.txt");
  int cycle = 0;
  int x = 1;
  int sum = 0;
  for (int i = 0; i<144; i++) {
    getline(numFile, s);
    if (s.substr(0, 4) == "noop") {
      cycle += 1;
      if (cycle == 20 || cycle == 60 || cycle == 100 || cycle == 140 || cycle == 180 || cycle == 220) {
        sum = sum + (cycle * x);
      }
    }
    if (s.substr(0, 4) == "addx") {
      cycle += 1;
      if (cycle == 20 || cycle == 60 || cycle == 100 || cycle == 140 || cycle == 180 || cycle == 220) {
        sum = sum + (cycle * x);
      }
      cycle += 1;
      if (cycle == 20 || cycle == 60 || cycle == 100 || cycle == 140 || cycle == 180 || cycle == 220) {
        sum = sum + (cycle * x);
      }
      if (s.substr(5, 1) == "-") {
        x -= stoi(s.substr(6, s.length()-6));
      }
      if (s.substr(5, 1) != "-") {
        x += stoi(s.substr(5, s.length()-5));
      }
    }
    cout << cycle << ", " << x << endl;
  }
  cout << sum;
}