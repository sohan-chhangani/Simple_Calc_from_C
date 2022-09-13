#include <stdio.h>                                                  // including libraries to use various functions
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main()
{
  float first_num;                                                  //declaring variables
  float sec_num;
  char operator;
  float answer;

  printf("Enter calculation:\n\n");                                 //user input in the form of first_num operator sec_num
  scanf("%f %c %f", &first_num, &operator, & sec_num);

  switch(operator)                                                  //setting up cases of various operators
    {
    case '/': answer = first_num/sec_num;
      break;
    case '*': answer = first_num*sec_num;
      break;
    case '+': answer = first_num+sec_num;
      break;
    case '-': answer = first_num-sec_num;
      break;
    case '^': answer = pow(first_num,sec_num);
      break;
    case 's': answer = sqrt(sec_num);
      break;
    default: goto fail;                                                 // default case for invalid statements/inputs
    }
  printf("%.9g%c%.9g =  %.6g\n\n",first_num,operator, sec_num, answer); //print the decimal floating-point values
  goto exit;
 fail:
  printf("Invalid Entry....Fail.\n");
 exit:
  return 0;
}
