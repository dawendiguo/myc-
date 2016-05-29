edit:main.o function.o
	g++ -o edit main.o function.o

main.o : main.cpp class.h
	g++ -c main.cpp
function.o : function.cpp class.h
	g++ -c function.cpp

clean:
	rm main.o function.o edit
