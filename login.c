/*
  Example of Really Simple Login
  by: Baharuddin Aziz
  March 13, 2017
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int auth_check(char *pass)
{
  int  auth_flag = 0; // flag used for authentication
  char pass_buff[16]; // buffer used for storing password

  strcpy(pass_buff, pass); // copy the value of pass to pass_buff

  // only these values are allowed for the value of pass_buff
  if ((strcmp(pass_buff, "pass_alt_2") == 0) ||
      (strcmp(pass_buff, "pass_alt_3") == 0) ||
      (strcmp(pass_buff, "pass_alt_5") == 0) ||
      (strcmp(pass_buff, "pass_alt_7") == 0) ||
      (strcmp(pass_buff, "pass_alt_11") == 0) ||
      (strcmp(pass_buff, "pass_alt_13") == 0) ||
      (strcmp(pass_buff, "pass_alt_17") == 0) ||
      (strcmp(pass_buff, "pass_alt_19") == 0))
  {
    auth_flag = 1;  // auth_flag value turned 1
  }

  return(auth_flag);
}

int main(int argc, char *argv[])
{
  // when the argument count below than 2
  if (argc < 2)
  {
    printf("Enter the password please!\n");
    printf("Program exit...\n");
    exit(0);
  }

  // when the argument count equal or above than 2
  if (auth_check(argv[1]))
  {
    printf("Password input = %s. Login Success!\n", argv[1]);
  }
  else
  {
    printf("Password input = %s. Login Failed!\n", argv[1]);
  }
}
