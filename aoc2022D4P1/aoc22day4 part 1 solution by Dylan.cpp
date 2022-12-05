#include <iostream>
using namespace std;
#include <fstream>
#include <bits/stdc++.h>
#include <stdlib.h>

int main() {
  string myTxt;
  string lowerbound1;
  int lowerbound1_num;
  string upperbound1;
  int upperbound1_num;
  string lowerbound2;
  int lowerbound2_num;
  string upperbound2;
  int upperbound2_num;
  string match1;
  string match2;
  ifstream numFile ("aoc22day4inputset.txt");
  int a;
  int count = 0;
  for (int i=0; i<1000; i++) {
    getline(numFile, myTxt);
    auto it = find(myTxt.begin(), myTxt.end(), ',');
    int index = it-myTxt.begin();
    match1 = myTxt.substr(0, index);
    match2 = myTxt.substr(index+1);
    auto it2 = find(match1.begin(), match1.end(), '-');
    int index2 = it2-match1.begin();
    lowerbound1 = match1.substr(0, index2);
    lowerbound1_num = stoi(lowerbound1);
    upperbound1 = match1.substr(index2+1);
    upperbound1_num = stoi(upperbound1);
    auto it3 = find(match2.begin(), match2.end(), '-');
    int index3 = it3-match2.begin();
    lowerbound2 = match2.substr(0, index3);
    lowerbound2_num = stoi(lowerbound2);
    upperbound2 = match2.substr(index3+1);
    upperbound2_num = stoi(upperbound2);
    if (lowerbound1_num <= lowerbound2_num) {
      if (upperbound1_num >= upperbound2_num) {
        count = count+1;
        lowerbound1_num = 0;
        upperbound1_num = 1;
        lowerbound2_num = 2;
        upperbound2_num = 3;
      }
    }
    if (lowerbound1_num >= lowerbound2_num) {
      if (upperbound1_num <= upperbound2_num) {
        count = count + 1;
      }
    }
    //cout << lowerbound1 << " " << upperbound1 << " " << lowerbound2 << " " << upperbound2 << " ";
  }
  cout << count;
}