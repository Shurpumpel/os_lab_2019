with_mutex:
	gcc mutex.c -pthread
	./a.out
without_mutex:
	gcc without_mutex.c -pthread
	./a.out
factorial:
	gcc parallel_factorial.c -pthread
	./a.out --k 10 --pnum 2 --mod 10
deadlock:
	gcc deadlock.c -pthread
	./a.out
clean:
	rm *.out