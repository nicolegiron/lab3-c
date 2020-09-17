// Author: Nicole Giron nqg5259@psu.edu
// Collaborator: Yan Lu yfl5541@psu.edu  
// Collaborator: Spoorthi Dhulappanavar sxd5682@psu.edu
// Collaborator: Xiaolong Lin xxl5453@psu.edu
// Section: 4
// Breakout: 11
#include <stdio.h> 
#include <readline/readline.h>
#include <stdlib.h>

int sum_n(n){
  if (n <= 0){
    return 0;
  } else {
    int sum = n+sum_n(n-1);
    return sum;
  }
}

void print_n(char *s,int n){
  if(n==0){
    
  } else {
    printf("%s\n", s);
    print_n(s, n-1);
  }
}

void run(){
  char *num = readline("Enter an int: ");
  int n = atoi(num);
  printf("sum is %d.\n", sum_n(n));

  char *s = readline("Enter a string: ");
  print_n(s,n);
}

int main(void) {
  run();
}