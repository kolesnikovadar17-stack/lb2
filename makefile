all: prog

prog: menu.o sum.o sum.h diff.o diff.h abs_max.o abs_max.h abs_min.o abs_min.h
	gcc menu.o sum.o diff.o abs_max.o abs_min.o -o prog
	make clean

menu.o: menu.c sum.h diff.h abs_max.h abs_min.h
	gcc -c menu.c -o menu.o
sum.o: sum.c sum.h
	gcc -c sum.c -o sum.o
diff.o: diff.c diff.h
	gcc -c diff.c -o diff.o
abs_max.o: abs_max.c abs_max.h
	gcc -c abs_max.c -o abs_max.o
abs_min.o: abs_min.c abs_min.h
	gcc -c abs_min.c -o abs_min.o
clean:
	rm *.o
