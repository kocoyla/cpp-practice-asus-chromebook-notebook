all: compile run

run:
	./factorial 20

compile: factorial

factorial: fact.o comp.o
	g++ -std=c++17 fact.o comp.o -o factorial

fact.o: fact.cpp
	g++ -std=c++17 fact.cpp -c 

comp.o: comp.cpp
	g++ -std=c++17 comp.cpp -c 

tests: test1 test2

test1:
	./factorial 20

test2:
	./factorial 30

# unit test 1:
# 20! = 2,432,902,008,176,640,000
# golden:
#   Factorial of 20 is 2432902008176640000

# unit test 2:
# factorial 30
# golden: 
#   Sadly that exceeds our limit: 18446744073709551615
#   The largest we could compute is for n=21
