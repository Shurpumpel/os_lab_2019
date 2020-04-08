all: parallel
sequential: sequential_min_max.c find_min_max.c utils.c
	gcc sequential_min_max.c find_min_max.c utils.c -o sequential.o
parallel: parallel_min_max.c find_min_max.c utils.c
	gcc parallel_min_max.c find_min_max.c utils.c -o parallel.o
clean: 
	rm parallel.o
	rm sequential.o