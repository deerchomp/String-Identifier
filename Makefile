all:
	g++ -o identifier identifier.cpp
	./identifier

compile:
	g++ -o identifier identifier.cpp

run:
	./identifier

clean:
	rm identifier