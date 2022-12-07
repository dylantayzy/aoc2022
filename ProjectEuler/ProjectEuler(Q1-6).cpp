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
  
  //Q4 Find the largest palindrome made from the product of two 3-digit numbers.
  //int a=10;
  //string s = to_string(a)
  vector<int> products;
  for (int i=100; i<1000; i++) {
    for (int j=100; j<1000; j++) {
      int a = i*j;
      string s = to_string(a);
      string r = s;
      reverse(s.begin(), s.end());
      if (r == s) {
        products.push_back(a);
      }
    }
  }
  int highest=0;
  for (int i=0; i<products.size(); i++) {
    if (highest < products[i]) {
      highest = products[i];
    }
  }
  cout << highest;

  //Q5 What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
  int a=20;
  for (int i=1; i<20) {
    if (a%i == 0) {
      i++;
      continue;
    }
    else {
      a += 40;
      i=1;
    }
  }
  cout << a;
  //Q6 Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.
  int SumofSquare;
  int SquareofSum;
  int Sum;
  for (int a=1; a<101; a++) {
    SumofSquare = SumofSquare + a*a;
    Sum=Sum + a;
  }
  SquareofSum=Sum*Sum;
  count << SumofSquare - SquareofSum;
}