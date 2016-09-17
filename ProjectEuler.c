#include <stdio.h>
#include <stdlib.h>

int P1() {
  int sum = 0;
  int start = 999;
  while (start) {
    if (start%3 == 0 || start%5 == 0) {
      sum += start;
    }
    start--;
  }
  return sum;
}


int P2() {
  int x = 1;
  int y = 2;
  int temp;
  int sum = 2;
  while (x < 4000000 && y < 4000000) {
    x += y;
    y += x;
    if (x % 2 == 0) {
      sum += x;
    }
    if (y%2 == 0) {
      sum += y;
    }
  }
  return sum;
}



int P6() {
  int count = 100;
  int x = 0;
  int y = 0;
  while (count) {
    x += (count*count);
    y += count;
    count--;
  }
  y *= y;
  return abs(x-y);
}


int P7() {
  int start = 2;
  int x = 0;
  int counter = 0;
  int store = 0;
  int factors = 0;
  //loop until the 10,001 number is reached
  for (start; counter <= 10000; start++) {
    factors = 0;
    //check to see if the number is divisible by any numbers less than it
    for (x = start; x > 1; x--) {
      if (start % x == 0) {
	factors += 1;
      }
    }
    //if more than one factor then not prime
    if (factors == 1) {
      store = start;
      counter++;
    }
  }
  return store;
}



int main() {
  //printf("%d\n",P1());
  //printf("%d\n",P2());
  //printf("%d\n",P6());
  //printf("%d\n",P7());
}
