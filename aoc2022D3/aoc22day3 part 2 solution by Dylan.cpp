#include <iostream>
using namespace std;
#include <fstream>
#include <bits/stdc++.h>
#include <stdlib.h>
#include <iterator>

int main() {
  vector<char> alphabets = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
  vector<int> number_assigning = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52};
  vector<char> repeated;
  int ToT=0;
  string myTxt;
  string rucksack1="";
  string rucksack2="";
  string rucksack3="";
  vector<string> rucksacks;
  ifstream numFile ("aoc22day3inputset.txt");
  for (int i=0; i<300; i++) {
    getline(numFile, myTxt);
    rucksacks.push_back(myTxt);
  }
  for (int i=0; i<100; i++) {
    rucksack1 = rucksacks[3*i];
    rucksack2 = rucksacks[3*i + 1];
    rucksack3 = rucksacks[3*i + 2];
    for (int j=0; j<rucksack1.length(); j++){
      for (int k=0; k<rucksack2.length(); k++) {
        for (int l=0; l<rucksack3.length(); l++) {
          if (rucksack1[j] == rucksack2[k]) {
            if (rucksack2[k] == rucksack3[l]) {
              repeated.push_back(rucksack1[j]);
              rucksack1="";
              rucksack2="";
              rucksack3="";
            }
          }
        }
      }
    }
  }
  for (int i=0; i<repeated.size(); i++) {
    cout << repeated[i];
    auto it = find(alphabets.begin(), alphabets.end(), repeated[i]);
    int index = it-alphabets.begin();
    ToT = ToT + number_assigning[index];
  }
  cout << ToT;
  /*vector<int> jokes = {1, 2, 3};
  auto it = find(jokes.begin(), jokes.end(), 3);
  int index = it-jokes.begin();
  cout << index;*/
}