#include <iostream>
using namespace std;
#include <fstream>
#include <bits/stdc++.h>
#include <stdlib.h>
int main() {
  string stack1 = "RGJBTVZ";
  string stack2 = "JRVL";
  string stack3 = "SQF";
  string stack4 = "ZHNLFVQG";
  string stack5 = "RQTJCSMW";
  string stack6 = "SWTCHF";
  string stack7 = "DZCVFNJ";
  string stack8 = "LGZDWRFQ";
  string stack9 = "JBWVP";
  vector<string> stacks = {stack1, stack2, stack3, stack4, stack5, stack6, stack7, stack8, stack9};
  vector<char> answer;
  string move;
  string myTxt;
  ifstream numFile ("aoc22day5inputset.txt");
  int numMove;
  int oriStack;
  int newStack;
  for (int i=0; i<505; i++) {
    getline(numFile, myTxt);
    if (myTxt.length() == 18) {
      numMove = stoi(myTxt.substr(5, 1));
      oriStack = stoi(myTxt.substr(12, 1));
      newStack = stoi(myTxt.substr(17, 1));
    }
    if (myTxt.length() == 19) {
      numMove = stoi(myTxt.substr(5, 2));
      oriStack = stoi(myTxt.substr(13, 1));
      newStack = stoi(myTxt.substr(18, 1));
    }
    int x = stacks[oriStack-1].length();
    move = stacks[oriStack-1].substr(x-numMove, numMove);
    stacks.at(newStack-1) = stacks[newStack-1] + move;
    stacks.at(oriStack-1) = stacks[oriStack-1].substr(0, x-numMove);
  }
  for (int i=0; i<9; i++) {
    answer.push_back(stacks[i][stacks[i].length()-1]);
  }
  for (int i=0; i<9; i++) {
    cout << answer[i];
  }
}