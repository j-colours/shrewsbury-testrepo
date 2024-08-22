all: average.exe

# link everything to get an executable program
average.exe: average.o
	g++ average.o -o average.exe

# Compile, but do not link
average.o: average.cpp
	g++ -c average.cpp
clean:
	rm -f average.exe *.o
