all: server client
makelib:
	gcc -c Multmodulo.c -o Multmodulo.o
	ar rc libmultmodulo.a Multmodulo.o
	ranlib libmultmodulo.a 
client:
	gcc client.c Multmodulo.c -pthread -o client.o
server:
	gcc server.c Multmodulo.c -pthread -o server.o
clean:
	rm *.o
	