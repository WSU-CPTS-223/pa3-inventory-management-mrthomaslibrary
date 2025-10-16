out: clean compile execute

compile: main.cpp
	g++ -g -Wall -std=c++14 main.cpp BSTree.cpp functions.cpp node.cpp product.cpp -o gorun

execute: gorun
	./gorun

clean:
	rm -f gorun
