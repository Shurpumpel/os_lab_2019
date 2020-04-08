all: parallel
sequential: sequential_min_max.c find_min_max.c utils.c
	gcc sequential_min_max.c find_min_max.c utils.c -o sequential.o
parallel: parallel_min_max.c find_min_max.c utils.c
	gcc parallel_min_max.c find_min_max.c utils.c -o parallel.o
exec:
	gcc sequential_min_max.c find_min_max.c utils.c -o sequential.o
	gcc execfile.c -o EXEC.o	
clean: 
	rm *.o