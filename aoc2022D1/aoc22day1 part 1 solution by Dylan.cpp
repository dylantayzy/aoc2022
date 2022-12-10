using namespace std;
#include <iostream>
#include <fstream>
#include <bits/stdc++.h>
#include <stdlib.h>

int main() {
  vector<int> Totals;
  int Total = 0;
  int Highest = 0;
  int myNum;
  ifstream calories("aoc22day1inputset.txt");
  string myTxt;
  for (int i = 0; i < 2255; i++) {
    getline (calories, myTxt); 
    if (myTxt.empty() == 0) {
      myNum = stoi(myTxt);
      Total = Total + myNum;
    }
    else if (myTxt.empty() == 1) {
      Totals.push_back(Total);
      Total = 0;
    }
  }
  for (int i=0; i<Totals.size(); i++) {
    if (Highest < Totals[i]) {
      Highest = Totals[i];
    }
  }
  cout << Highest;
}