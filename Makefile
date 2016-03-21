bmi_main: bmi.o bmi_main.o
	g++ -o bmi_main bmi_main.o bmi.o

bmi.o: bmi.cpp bmi.h
	g++ -c bmi.cpp

bmi_main.o: bmi_main.cpp bmi.h
	g++ -c bmi_main.cpp

clean:
	rm bmi_main*.o