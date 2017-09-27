gcc -g -o login login.c -fno-stack-protector
gcc -o test_generator test_generator.c
./test_generator > test.sh
sh test.sh > test_output
