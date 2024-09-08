main:
	g++ -g -std=c++17 *cpp -o main

run: main
	./main

clean:
	rm -f *o main

fullValgrind: main
	valgrind -v --leak-check=full ./main

valgrind: main
	valgrind --leak-check=full ./main