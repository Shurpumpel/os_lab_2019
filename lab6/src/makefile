all: start
makelib:
	gcc -c Multmodulo.c -o multmodulo.o
	ar rc libmultmodulo.a multmodulo.o
	ranlib libmultmodulo.a 
	gcc -c server.c -o server.o
	gcc -c client.c -o client.o
client:
	gcc client.o -L. -lmultmodulo -pthread -o clientout.o
server:
	gcc server.o -L. -lmultmodulo -pthread -o serverout.o
clean:
	rm *.o
	rm libmultmodulo.a
make start:
	make makelib
	make 
	./serverout.o --port 20001 --tnum 2 &
	./serverout.o --port 20002 --tnum 3 &
	./clientout.o --k 20 --mod 58 --servers ./servers.txt