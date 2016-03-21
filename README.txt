how to compile the program:

$ cd lab2

$ ls
bmi.cpp  bmi.h  bmi_main.cpp  file.in  Makefile

$ make
g++ -c bmi.cpp
g++ -c bmi_main.cpp
g++ -o bmi_main bmi_main.o bmi.o

$ make clean
rm bmi_main*.o

$ ./bmi_main

$ cat file.in
170  68
160  85
162  43
167  80
192  58
0    0

$ cat file.out
23.53 Normal
33.20 Obese Class I (Moderately obese)
16.38 Underweight
28.69 Overweight
15.73 Severely underweight

