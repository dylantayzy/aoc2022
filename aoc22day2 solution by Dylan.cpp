using namespace std;
#include <iostream>
#include <fstream>
#include <bits/stdc++.h>
#include <stdlib.h>

/* Rock == A, Paper == B, Scissors == C
Rock == X, Paper == Y, Scissors == Z
Rock == 1, Paper == 2, Scissors == 3*/
int main() {
  int xcount=0;
  int ycount=0;
  int zcount=0;
  string s;
  string myTxt;
  ifstream numFile ("aoc22day2inputset.txt");
  int score = 0;
  for (int i = 0; i<2500; i++) {
    getline(numFile, myTxt);
    s = s+myTxt+" ";
  }
  for (int i = 2; i < 10000; i = i+4) {
    if (s[i] == 'X') {
      xcount = xcount+1;

    }
    else if (s[i] == 'Y') {
      ycount = ycount+1;
    }
    else if (s[i] == 'Z') {
      zcount = zcount+1;
    }
  }
  for (int i = 0; i < 10000; i = i+4) {
    if (s[i] == 'A' && s[i+2] == 'X') {
      score = score + 3;
    }
    else if (s[i] == 'A' && s[i+2] == 'Y') {
      score = score + 6;
    }
    else if (s[i] == 'A' && s[i+2] == 'Z') {
      score = score;
    }
    else if (s[i] == 'B' && s[i+2] == 'X') {
      score = score;
    }
    else if (s[i] == 'B' && s[i+2] == 'Y') {
      score = score + 3;
    }
    else if (s[i] == 'B' && s[i+2] == 'Z') {
      score = score + 6;
    }
    else if (s[i] == 'C' && s[i+2] == 'X') {
      score = score + 6;
    }
    else if (s[i] == 'C' && s[i+2] == 'Y') {
      score = score;
    }
    else if (s[i] == 'C' && s[i+2] == 'Z') {
      score = score + 3;
    }
  }
  score = score + xcount + (2 * ycount) + (3 * zcount);
  cout << score;
}