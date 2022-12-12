#include <iostream>
using namespace std;
#include <fstream>
#include <bits/stdc++.h>
#include <stdlib.h>

int main() {
  string myTxt;
  ifstream numFile ("aoc22day6inputset.txt");
  getline (numFile, myTxt);
  for (int i=0; i<myTxt.length(); i++) {
    string s = myTxt.substr(i, 14);
    set<char> Final;
    for (int j=0; j<14; j++) {
      Final.insert(s[j]);
    }
    if (Final.size()==14) {
      cout << i+14;
      break;
    }
  }
}
