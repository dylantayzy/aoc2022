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
    if (myTxt[i]!=myTxt[i+1]) {
      if (myTxt[i]!=myTxt[i+2]) {
        if (myTxt[i]!=myTxt[i+3]) {
          if (myTxt[i+1]!=myTxt[i+2]) {
            if (myTxt[i+1]!=myTxt[i+3]) {
              if (myTxt[i+2]!=myTxt[i+3]) {
                cout << i+4;
                break;
              }
            }
          }
        }
      }
    }
  }
}