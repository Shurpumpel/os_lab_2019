all: server client
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
	