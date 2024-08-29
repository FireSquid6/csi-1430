build:
	g++ main.cpp -o program.o
run:
	g++ main.cpp -o program.o && ./program.o
test:
	g++ main.cpp -o program.o
	./program.o > output.txt
	diff --color -u output.txt expected-output.txt
