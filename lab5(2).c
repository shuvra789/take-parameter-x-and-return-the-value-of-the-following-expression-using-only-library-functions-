//Write a function to take parameter x and return the value of the following expression using only library functions from header file “math.h”

#include <stdio.h>
#include<math.h>

 int solution_quadratic(int x);

 int main(void)
  {
     int input;
     int output;
      printf("Input the value of x: ");
      scanf("%d",&input);
      output = solution_quadratic(input);
      printf("Solution of the equation is %d\n",output);
      return 0;
  }

  int solution_quadratic(int x)
  {
      int answer;
      answer = pow(x,2.0)+x+10;
      return answer;
  }
