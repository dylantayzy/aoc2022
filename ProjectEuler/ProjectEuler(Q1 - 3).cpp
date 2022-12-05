using namespace std;
#include <iostream>
#include <fstream>
#include <bits/stdc++.h>
#include <stdlib.h>

bool primecheck(int n) {
  if (n==1) {
    return false;
  }
  if (n != 1) {
    int count = 0;
    for (int i=2; i<=sqrt(n); i++) {
      if (n%i == 0) {
        count = count + 1;
      }
    }
    if (count == 0) {
      return true;
    }
    if (count != 0) {
      return false;
    }
  }
}
int main() {
  //Q1 If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23. Find the sum of all the multiples of 3 or 5 below 1000.
  int sum=0;
  for (int i = 1; i<=1000; i++) {
    if (i%3 == 0) {
      sum = sum + i;
    }
    if (i%5 == 0) {
      sum = sum + i;
    }
    if (i%5==0 && i%3 == 0) {
      sum = sum - i;
    }
  }
  cout << sum;
  
  //Q2 By considering the terms in the Fibonacci sequence whose values do not exceed four million, find the sum of the even-valued terms.
  int sum=2;
  int a=1;
  int b=2;
  while (a+b < 4000000) {
    if ((a+b)%2==0) {
      sum = sum + a+b;
      a=b;
      b=a+b;
    }
    if ((a+b)%2!=0) {
      a=b;
      b=a+b;
    }
  }
  cout << sum;
  
  //Q3 What is the largest prime factor of the number 600851475143?
  vector<int> factors;
  for (int i=1; i<600851475143; i++) {
    if (primecheck(i) == true) {
      if (60085147543%i == 0) {
        factors.push_back(i);
      }
    }
  }
  int sum=0;
  for (int i=0; i<factors.size(); i++) {
    sum=sum+factors[i];
  }
  cout << sum;
}