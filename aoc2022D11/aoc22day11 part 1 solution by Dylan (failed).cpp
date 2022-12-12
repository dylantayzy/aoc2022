using namespace std;
#include <iostream>
#include <fstream>
#include <bits/stdc++.h>
#include <stdlib.h>

int main() {
  vector<int> monkey0 = {57};
  vector<int> monkey0new;
  vector<int> monkey1 = {58, 93, 88, 81, 72, 73, 65};
  vector<int> monkey1new;
  vector<int> monkey2 = {65, 95};
  vector<int> monkey2new;
  vector<int> monkey3 = {58, 80, 81, 83};
  vector<int> monkey3new;
  vector<int> monkey4 = {58, 89, 90, 96, 55};
  vector<int> monkey4new;
  vector<int> monkey5 = {66, 73, 87, 58, 62, 67};
  vector<int> monkey5new;
  vector<int> monkey6 = {85, 55, 89};
  vector<int> monkey6new;
  vector<int> monkey7 = {73, 80, 54, 94, 90, 52, 69, 58};
  vector<int> monkey7new;
  vector<vector<int>> monkeys = {monkey0, monkey1, monkey2, monkey3, monkey4, monkey5, monkey6, monkey7};
  vector<int> Opcount = {0, 0, 0, 0, 0, 0, 0, 0};
  for (int j=0; j<21; j++) {
      for (int i=0; i<monkeys.size(); i++) {
      Opcount[i] = Opcount[i] + monkeys[i].size();
    }
    if (monkeys[0].size() != 0) {
      for (int i=0; i<monkeys[0].size(); i++) {
        monkeys[0].at(i)=monkeys[0][i]*13;
        if (monkeys[0][i]%11 == 0) {
          monkey3new.push_back(monkeys[0][i]);
        }
        if (monkeys[0][i]%11 != 0) {
          monkey2new.push_back(monkeys[0][i]);
        }
      }
    }
    if (monkeys[0].size() == 0) {
      continue;
    }
    if (monkeys[1].size() != 0) {
      for (int i=0; i<monkeys[1].size(); i++) {
        monkeys[1].at(i)=monkeys[1][i]+2;
        if (monkeys[1][i]%7 == 0) {
          monkey6new.push_back(monkeys[1][i]);
        }
        if (monkeys[1][i]%7 != 0) {
          monkey7new.push_back(monkeys[1][i]);
        }
      }
    }
    if (monkeys[2].size() != 0) {
      for (int i=0; i<monkeys[2].size(); i++) {
        monkeys[2].at(i)=monkeys[2][i]+6;
        if (monkeys[2][i]%11 == 0) {
          monkey3new.push_back(monkeys[2][i]);
        }
        if (monkeys[0][i]%11 != 0) {
          monkey5new.push_back(monkeys[2][i]);
        }
      }
    }
    if (monkeys[2].size() == 0) {
      continue;
    }
    if (monkeys[3].size() != 0) {
      for (int i=0; i<monkeys[3].size(); i++) {
        monkeys[3].at(i)=monkeys[3][i]*monkeys[3][i];
        if (monkeys[3][i]%5 == 0) {
          monkey4new.push_back(monkeys[3][i]);
        }
        if (monkeys[3][i]%5 != 0) {
          monkey5new.push_back(monkeys[3][i]);
        }
      }
    }
    if (monkeys[3].size() == 0) {
      continue;
    }
    if (monkeys[4].size() != 0) {
      for (int i=0; i<monkeys[4].size(); i++) {
        monkeys[4].at(i)=monkeys[4][i]+3;
        if (monkeys[4][i]%3 == 0) {
          monkey1new.push_back(monkeys[0][i]);
        }
        if (monkeys[4][i]%3 != 0) {
          monkey7new.push_back(monkeys[0][i]);
        }
      }
    }
    if (monkeys[4].size() == 0) {
      continue;
    }
    if (monkeys[5].size() != 0) {
      for (int i=0; i<monkeys[0].size(); i++) {
        monkeys[5].at(i)=monkeys[5][i]*7;
        if (monkeys[5][i]%17 == 0) {
          monkey4new.push_back(monkeys[0][i]);
        }
        if (monkeys[5][i]%17 != 0) {
          monkey1new.push_back(monkeys[0][i]);
        }
      }
    }
    if (monkeys[5].size() == 0) {
      continue;
    }
    if (monkeys[6].size() != 0) {
      for (int i=0; i<monkeys[6].size(); i++) {
        monkeys[6].at(i)=monkeys[6][i]+4;
        if (monkeys[6][i]%2 == 0) {
          monkey2new.push_back(monkeys[0][i]);
        }
        if (monkeys[6][i]%2 != 0) {
          monkey0new.push_back(monkeys[0][i]);
        }
      }
    }
    if (monkeys[6].size() == 0) {
      continue;
    }
    if (monkeys[7].size() != 0) {
      for (int i=0; i<monkeys[7].size(); i++) {
        monkeys[7].at(i)=monkeys[7][i]+7;
        if (monkeys[7][i]%19 == 0) {
          monkey6new.push_back(monkeys[0][i]);
        }
        if (monkeys[7][i]%19 != 0) {
          monkey0new.push_back(monkeys[0][i]);
        }
      }
    }
    if (monkeys[7].size() == 0) {
      continue;
    }
    monkeys.clear();
    if (monkey0new.empty() != 1) {
      monkeys.push_back(monkey0new);
    }
    if (monkey0new.empty() == 1) {
      monkeys.push_back({});
    }
    if (monkey1new.empty() != 1) {
      monkeys.push_back(monkey0new);
    }
    if (monkey1new.empty() == 1) {
      monkeys.push_back({});
    }
    if (monkey2new.empty() != 1) {
      monkeys.push_back(monkey0new);
    }
    if (monkey2new.empty() == 1) {
      monkeys.push_back({});
    }
    if (monkey3new.empty() != 1) {
      monkeys.push_back(monkey0new);
    }
    if (monkey3new.empty() == 1) {
      monkeys.push_back({});
    }
    if (monkey4new.empty() != 1) {
      monkeys.push_back(monkey0new);
    }
    if (monkey4new.empty() == 1) {
      monkeys.push_back({});
    }
    if (monkey5new.empty() != 1) {
      monkeys.push_back(monkey0new);
    }
    if (monkey5new.empty() == 1) {
      monkeys.push_back({});
    }
    if (monkey6new.empty() != 1) {
      monkeys.push_back(monkey0new);
    }
    if (monkey6new.empty() == 1) {
      monkeys.push_back({});
    }
    if (monkey7new.empty() != 1) {
      monkeys.push_back(monkey0new);
    }
    if (monkey7new.empty() == 1) {
      monkeys.push_back({});
    }
    monkey0new.clear();
    monkey1new.clear();
    monkey2new.clear();
    monkey3new.clear();
    monkey4new.clear();
    monkey5new.clear();
    monkey6new.clear();
    monkey7new.clear();
  }
  for (int i=0; i<Opcount.size(); i++) {
    cout << Opcount[i] << ", ";
  }
}