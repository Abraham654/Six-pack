bin/main: src/main.cpp Include/*
	c++ src/main.cpp -o bin/main -I Include -lcurses

run: bin/main
	./bin/main
