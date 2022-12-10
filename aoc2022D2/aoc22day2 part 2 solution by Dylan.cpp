using namespace std;
#include <iostream>
#include <fstream>
#include <bits/stdc++.h>
#include <stdlib.h>

/* Rock == A, Paper == B, Scissors == C
Lose == X, Draw == Y, Win == Z
Rock == 1, Paper == 2, Scissors == 3*/
int main() {
  string s;
  string myTxt;
  ifstream numFile ("aoc22day2inputset.txt");
  int score = 0;
  for (int i = 0; i<2500; i++) {
    getline(numFile, myTxt);
    s = s+myTxt+" ";
    }
  for (int i = 0; i < 10000; i = i+4) {
    if (s[i] == 'A' && s[i+2] == 'X') {
      score = score + 3;
    }
    else if (s[i] == 'A' && s[i+2] == 'Y') {
      score = score + 4;
    }
    else if (s[i] == 'A' && s[i+2] == 'Z') {
      score = score + 8;
    }
    else if (s[i] == 'B' && s[i+2] == 'X') {
      score = score + 1;
    }
    else if (s[i] == 'B' && s[i+2] == 'Y') {
      score = score + 5;
    }
    else if (s[i] == 'B' && s[i+2] == 'Z') {
      score = score + 9;
    }
    else if (s[i] == 'C' && s[i+2] == 'X') {
      score = score + 2;
    }
    else if (s[i] == 'C' && s[i+2] == 'Y') {
      score = score + 6;
    }
    else if (s[i] == 'C' && s[i+2] == 'Z') {
      score = score + 7;
    }
  }
  cout << score;
}