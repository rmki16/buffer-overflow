#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  /* INPUT PASSWORD */
  for (int i = 1; i <= 20; i++)
  {
    printf("./login pass_alt_%d\n", i);
  }

  // input: 17 characters
  printf("./login pass_alt_12345678\n");

  // input: 18 characters
  printf("./login pass_alt_123456789\n");

  // input: 19 characters
  printf("./login pass_alt_1234567890\n");

  // input: 29 characters
  printf("./login pass_alt_12345678901234567890\n");

  // input: 34 characters
  printf("./login pass_alt_1234567890123456789012345\n");

  // input: 39 characters
  printf("./login pass_alt_123456789012345678901234567890\n");

  /* DEBUGGING */
  // input: 10 characters
  printf("gdb -q login < gdb_input_3 > gdb_output_3\n");
  printf("gdb -q login < gdb_input_8 > gdb_output_8\n");

  // input: 17 characters
  printf("gdb -q login < gdb_input_buffover1 > gdb_output_buffover1\n");

  // input: 18 characters
  printf("gdb -q login < gdb_input_buffover2 > gdb_output_buffover2\n");

  // input: 19 characters
  printf("gdb -q login < gdb_input_buffover3 > gdb_output_buffover3\n");

  // input: 29 characters
  printf("gdb -q login < gdb_input_buffover4 > gdb_output_buffover4\n");

  // input: 34 characters
  printf("gdb -q login < gdb_input_buffover5 > gdb_output_buffover5\n");

  // input: 39 characters
  printf("gdb -q login < gdb_input_buffover6 > gdb_output_buffover6\n");

  return 0;
}
