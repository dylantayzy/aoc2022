#include <iostream>
using namespace std;
#include <fstream>
#include <bits/stdc++.h>
#include <stdlib.h>
int main() {
  vector<char> stack1 = {'R', 'G', 'J', 'B', 'T', 'V', 'Z'};
  vector<char> stack2 = {'J', 'R', 'V', 'L'};
  vector<char> stack3 = {'S', 'Q', 'F'};
  vector<char> stack4 = {'Z', 'H', 'N', 'L', 'F', 'V', 'Q', 'G'};
  vector<char> stack5 = {'R', 'Q', 'T', 'J', 'C', 'S', 'M', 'W'};
  vector<char> stack6 = {'S', 'W', 'T', 'C', 'H', 'F'};
  vector<char> stack7 = {'D', 'Z', 'C', 'V', 'F', 'N', 'J'};
  vector<char> stack8 = {'L', 'G', 'Z', 'D', 'W', 'R', 'F', 'Q'};
  vector<char> stack9 = {'J', 'B', 'W', 'V', 'P'};
  vector<char> answer;
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
    if (oriStack == 1) {
      if (newStack == 2) {
        for (int i=0; i<numMove; i++) {
          stack2.push_back(stack1[stack1.size()-1]);
          stack1.pop_back();
        }
      }
    }
    if (oriStack == 1) {
      if (newStack == 3) {
        for (int i=0; i<numMove; i++) {
          stack3.push_back(stack1[stack1.size()-1]);
          stack1.pop_back();
        }
      }
    }
    if (oriStack == 1) {
      if (newStack == 4) {
        for (int i=0; i<numMove; i++) {
          stack4.push_back(stack1[stack1.size()-1]);
          stack1.pop_back();
        }
      }
    }
    if (oriStack == 1) {
      if (newStack == 5) {
        for (int i=0; i<numMove; i++) {
          stack5.push_back(stack1[stack1.size()-1]);
          stack1.pop_back();
        }
      }
    }
    if (oriStack == 1) {
      if (newStack == 6) {
        for (int i=0; i<numMove; i++) {
          stack6.push_back(stack1[stack1.size()-1]);
          stack1.pop_back();
        }
      }
    }
    if (oriStack == 1) {
      if (newStack == 7) {
        for (int i=0; i<numMove; i++) {
          stack7.push_back(stack1[stack1.size()-1]);
          stack1.pop_back();
        }
      }
    }
    if (oriStack == 1) {
      if (newStack == 8) {
        for (int i=0; i<numMove; i++) {
          stack8.push_back(stack1[stack1.size()-1]);
          stack1.pop_back();
        }
      }
    }
    if (oriStack == 1) {
      if (newStack == 9) {
        for (int i=0; i<numMove; i++) {
          stack9.push_back(stack1[stack1.size()-1]);
          stack1.pop_back();
        }
      }
    }
    if (oriStack == 2) {
      if (newStack == 1) {
        for (int i=0; i<numMove; i++) {
          stack1.push_back(stack2[stack2.size()-1]);
          stack2.pop_back();
        }
      }
    }
    if (oriStack == 2) {
      if (newStack == 3) {
        for (int i=0; i<numMove; i++) {
          stack3.push_back(stack2[stack2.size()-1]);
          stack2.pop_back();
        }
      }
    }
    if (oriStack == 2) {
      if (newStack == 4) {
        for (int i=0; i<numMove; i++) {
          stack4.push_back(stack2[stack2.size()-1]);
          stack2.pop_back();
        }
      }
    }
    if (oriStack == 2) {
      if (newStack == 5) {
        for (int i=0; i<numMove; i++) {
          stack5.push_back(stack2[stack2.size()-1]);
          stack2.pop_back();
        }
      }
    }
    if (oriStack == 2) {
      if (newStack == 6) {
        for (int i=0; i<numMove; i++) {
          stack6.push_back(stack2[stack2.size()-1]);
          stack2.pop_back();
        }
      }
    }
    if (oriStack == 2) {
      if (newStack == 7) {
        for (int i=0; i<numMove; i++) {
          stack7.push_back(stack2[stack2.size()-1]);
          stack2.pop_back();
        }
      }
    }
    if (oriStack == 2) {
      if (newStack == 8) {
        for (int i=0; i<numMove; i++) {
          stack8.push_back(stack2[stack2.size()-1]);
          stack2.pop_back();
        }
      }
    }
    if (oriStack == 2) {
      if (newStack == 9) {
        for (int i=0; i<numMove; i++) {
          stack9.push_back(stack2[stack2.size()-1]);
          stack2.pop_back();
        }
      }
    }
    if (oriStack == 3) {
      if (newStack == 1) {
        for (int i=0; i<numMove; i++) {
          stack1.push_back(stack3[stack3.size()-1]);
          stack3.pop_back();
        }
      }
    }
    if (oriStack == 3) {
      if (newStack == 2) {
        for (int i=0; i<numMove; i++) {
          stack2.push_back(stack3[stack3.size()-1]);
          stack3.pop_back();
        }
      }
    }
    if (oriStack == 3) {
      if (newStack == 4) {
        for (int i=0; i<numMove; i++) {
          stack4.push_back(stack3[stack3.size()-1]);
          stack3.pop_back();
        }
      }
    }
    if (oriStack == 3) {
      if (newStack == 5) {
        for (int i=0; i<numMove; i++) {
          stack5.push_back(stack3[stack3.size()-1]);
          stack3.pop_back();
        }
      }
    }
    if (oriStack == 3) {
      if (newStack == 6) {
        for (int i=0; i<numMove; i++) {
          stack6.push_back(stack3[stack3.size()-1]);
          stack3.pop_back();
        }
      }
    }
    if (oriStack == 3) {
      if (newStack == 7) {
        for (int i=0; i<numMove; i++) {
          stack7.push_back(stack3[stack3.size()-1]);
          stack3.pop_back();
        }
      }
    }
    if (oriStack == 3) {
      if (newStack == 8) {
        for (int i=0; i<numMove; i++) {
          stack8.push_back(stack3[stack3.size()-1]);
          stack3.pop_back();
        }
      }
    }
    if (oriStack == 3) {
      if (newStack == 9) {
        for (int i=0; i<numMove; i++) {
          stack9.push_back(stack3[stack3.size()-1]);
          stack3.pop_back();
        }
      }
    }
    if (oriStack == 4) {
      if (newStack == 1) {
        for (int i=0; i<numMove; i++) {
          stack1.push_back(stack4[stack4.size()-1]);
          stack4.pop_back();
        }
      }
    }
    if (oriStack == 4) {
      if (newStack == 2) {
        for (int i=0; i<numMove; i++) {
          stack2.push_back(stack4[stack4.size()-1]);
          stack4.pop_back();
        }
      }
    }
    if (oriStack == 4) {
      if (newStack == 3) {
        for (int i=0; i<numMove; i++) {
          stack3.push_back(stack4[stack4.size()-1]);
          stack4.pop_back();
        }
      }
    }
    if (oriStack == 4) {
      if (newStack == 5) {
        for (int i=0; i<numMove; i++) {
          stack5.push_back(stack4[stack4.size()-1]);
          stack4.pop_back();
        }
      }
    }
    if (oriStack == 4) {
      if (newStack == 6) {
        for (int i=0; i<numMove; i++) {
          stack6.push_back(stack4[stack4.size()-1]);
          stack4.pop_back();
        }
      }
    }
    if (oriStack == 4) {
      if (newStack == 7) {
        for (int i=0; i<numMove; i++) {
          stack7.push_back(stack4[stack4.size()-1]);
          stack4.pop_back();
        }
      }
    }
    if (oriStack == 4) {
      if (newStack == 8) {
        for (int i=0; i<numMove; i++) {
          stack8.push_back(stack4[stack4.size()-1]);
          stack4.pop_back();
        }
      }
    }
    if (oriStack == 4) {
      if (newStack == 9) {
        for (int i=0; i<numMove; i++) {
          stack9.push_back(stack4[stack4.size()-1]);
          stack4.pop_back();
        }
      }
    }
    if (oriStack == 5) {
      if (newStack == 1) {
        for (int i=0; i<numMove; i++) {
          stack1.push_back(stack5[stack5.size()-1]);
          stack5.pop_back();
        }
      }
    }
    if (oriStack == 5) {
      if (newStack == 2) {
        for (int i=0; i<numMove; i++) {
          stack2.push_back(stack5[stack5.size()-1]);
          stack5.pop_back();
        }
      }
    }
    if (oriStack == 5) {
      if (newStack == 3) {
        for (int i=0; i<numMove; i++) {
          stack3.push_back(stack5[stack5.size()-1]);
          stack5.pop_back();
        }
      }
    }
    if (oriStack == 5) {
      if (newStack == 4) {
        for (int i=0; i<numMove; i++) {
          stack4.push_back(stack5[stack5.size()-1]);
          stack5.pop_back();
        }
      }
    }
    if (oriStack == 5) {
      if (newStack == 6) {
        for (int i=0; i<numMove; i++) {
          stack6.push_back(stack5[stack5.size()-1]);
          stack5.pop_back();
        }
      }
    }
    if (oriStack == 5) {
      if (newStack == 7) {
        for (int i=0; i<numMove; i++) {
          stack7.push_back(stack5[stack5.size()-1]);
          stack5.pop_back();
        }
      }
    }
    if (oriStack == 5) {
      if (newStack == 8) {
        for (int i=0; i<numMove; i++) {
          stack8.push_back(stack5[stack5.size()-1]);
          stack5.pop_back();
        }
      }
    }
    if (oriStack == 5) {
      if (newStack == 9) {
        for (int i=0; i<numMove; i++) {
          stack9.push_back(stack5[stack5.size()-1]);
          stack5.pop_back();
        }
      }
    }
    if (oriStack == 6) {
      if (newStack == 1) {
        for (int i=0; i<numMove; i++) {
          stack1.push_back(stack6[stack6.size()-1]);
          stack6.pop_back();
        }
      }
    }
    if (oriStack == 6) {
      if (newStack == 2) {
        for (int i=0; i<numMove; i++) {
          stack2.push_back(stack6[stack6.size()-1]);
          stack6.pop_back();
        }
      }
    }
    if (oriStack == 6) {
      if (newStack == 3) {
        for (int i=0; i<numMove; i++) {
          stack3.push_back(stack6[stack6.size()-1]);
          stack6.pop_back();
        }
      }
    }
    if (oriStack == 6) {
      if (newStack == 4) {
        for (int i=0; i<numMove; i++) {
          stack4.push_back(stack6[stack6.size()-1]);
          stack6.pop_back();
        }
      }
    }
    if (oriStack == 6) {
      if (newStack == 5) {
        for (int i=0; i<numMove; i++) {
          stack5.push_back(stack6[stack6.size()-1]);
          stack6.pop_back();
        }
      }
    }
    if (oriStack == 6) {
      if (newStack == 7) {
        for (int i=0; i<numMove; i++) {
          stack7.push_back(stack6[stack6.size()-1]);
          stack6.pop_back();
        }
      }
    }
    if (oriStack == 6) {
      if (newStack == 8) {
        for (int i=0; i<numMove; i++) {
          stack8.push_back(stack6[stack6.size()-1]);
          stack6.pop_back();
        }
      }
    }
    if (oriStack == 6) {
      if (newStack == 9) {
        for (int i=0; i<numMove; i++) {
          stack9.push_back(stack6[stack6.size()-1]);
          stack6.pop_back();
        }
      }
    }
    if (oriStack == 7) {
      if (newStack == 1) {
        for (int i=0; i<numMove; i++) {
          stack1.push_back(stack7[stack7.size()-1]);
          stack7.pop_back();
        }
      }
    }
    if (oriStack == 7) {
      if (newStack == 2) {
        for (int i=0; i<numMove; i++) {
          stack2.push_back(stack7[stack7.size()-1]);
          stack7.pop_back();
        }
      }
    }
    if (oriStack == 7) {
      if (newStack == 3) {
        for (int i=0; i<numMove; i++) {
          stack3.push_back(stack7[stack7.size()-1]);
          stack7.pop_back();
        }
      }
    }
    if (oriStack == 7) {
      if (newStack == 4) {
        for (int i=0; i<numMove; i++) {
          stack4.push_back(stack7[stack7.size()-1]);
          stack7.pop_back();
        }
      }
    }
    if (oriStack == 7) {
      if (newStack == 5) {
        for (int i=0; i<numMove; i++) {
          stack5.push_back(stack7[stack7.size()-1]);
          stack7.pop_back();
        }
      }
    }
    if (oriStack == 7) {
      if (newStack == 6) {
        for (int i=0; i<numMove; i++) {
          stack6.push_back(stack7[stack7.size()-1]);
          stack7.pop_back();
        }
      }
    }
    if (oriStack == 7) {
      if (newStack == 8) {
        for (int i=0; i<numMove; i++) {
          stack8.push_back(stack7[stack7.size()-1]);
          stack7.pop_back();
        }
      }
    }
    if (oriStack == 7) {
      if (newStack == 9) {
        for (int i=0; i<numMove; i++) {
          stack9.push_back(stack7[stack7.size()-1]);
          stack7.pop_back();
        }
      }
    }
    if (oriStack == 8) {
      if (newStack == 1) {
        for (int i=0; i<numMove; i++) {
          stack1.push_back(stack8[stack8.size()-1]);
          stack8.pop_back();
        }
      }
    }
    if (oriStack == 8) {
      if (newStack == 2) {
        for (int i=0; i<numMove; i++) {
          stack2.push_back(stack8[stack8.size()-1]);
          stack8.pop_back();
        }
      }
    }
    if (oriStack == 8) {
      if (newStack == 3) {
        for (int i=0; i<numMove; i++) {
          stack3.push_back(stack8[stack8.size()-1]);
          stack8.pop_back();
        }
      }
    }
    if (oriStack == 8) {
      if (newStack == 4) {
        for (int i=0; i<numMove; i++) {
          stack4.push_back(stack8[stack8.size()-1]);
          stack8.pop_back();
        }
      }
    }
    if (oriStack == 8) {
      if (newStack == 5) {
        for (int i=0; i<numMove; i++) {
          stack5.push_back(stack8[stack8.size()-1]);
          stack8.pop_back();
        }
      }
    }
    if (oriStack == 8) {
      if (newStack == 6) {
        for (int i=0; i<numMove; i++) {
          stack6.push_back(stack8[stack8.size()-1]);
          stack8.pop_back();
        }
      }
    }
    if (oriStack == 8) {
      if (newStack == 7) {
        for (int i=0; i<numMove; i++) {
          stack7.push_back(stack8[stack8.size()-1]);
          stack8.pop_back();
        }
      }
    }
    if (oriStack == 8) {
      if (newStack == 9) {
        for (int i=0; i<numMove; i++) {
          stack9.push_back(stack8[stack8.size()-1]);
          stack8.pop_back();
        }
      }
    }
    if (oriStack == 9) {
      if (newStack == 1) {
        for (int i=0; i<numMove; i++) {
          stack1.push_back(stack9[stack9.size()-1]);
          stack9.pop_back();
        }
      }
    }
    if (oriStack == 9) {
      if (newStack == 2) {
        for (int i=0; i<numMove; i++) {
          stack2.push_back(stack9[stack9.size()-1]);
          stack9.pop_back();
        }
      }
    }
    if (oriStack == 9) {
      if (newStack == 3) {
        for (int i=0; i<numMove; i++) {
          stack3.push_back(stack9[stack9.size()-1]);
          stack9.pop_back();
        }
      }
    }
    if (oriStack == 9) {
      if (newStack == 4) {
        for (int i=0; i<numMove; i++) {
          stack4.push_back(stack9[stack9.size()-1]);
          stack9.pop_back();
        }
      }
    }
    if (oriStack == 9) {
      if (newStack == 5) {
        for (int i=0; i<numMove; i++) {
          stack5.push_back(stack9[stack9.size()-1]);
          stack9.pop_back();
        }
      }
    }
    if (oriStack == 9) {
      if (newStack == 6) {
        for (int i=0; i<numMove; i++) {
          stack6.push_back(stack9[stack9.size()-1]);
          stack9.pop_back();
        }
      }
    }
    if (oriStack == 9) {
      if (newStack == 7) {
        for (int i=0; i<numMove; i++) {
          stack7.push_back(stack9[stack9.size()-1]);
          stack9.pop_back();
        }
      }
    }
    if (oriStack == 9) {
      if (newStack == 8) {
        for (int i=0; i<numMove; i++) {
          stack8.push_back(stack9[stack9.size()-1]);
          stack9.pop_back();
        }
      }
    }
  }
  answer.push_back(stack1[stack1.size()-1]);
  answer.push_back(stack2[stack2.size()-1]);
  answer.push_back(stack3[stack3.size()-1]);
  answer.push_back(stack4[stack4.size()-1]);
  answer.push_back(stack5[stack5.size()-1]);
  answer.push_back(stack6[stack6.size()-1]);
  answer.push_back(stack7[stack7.size()-1]);
  answer.push_back(stack8[stack8.size()-1]);
  answer.push_back(stack9[stack9.size()-1]);
  for (int i=0; i<9; i++) {
    cout << answer[i];
  }
}