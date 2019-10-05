all:
#compile the program fichero.c when you write make in the terminal
	gcc fichero.c -o fichero -std=c99

clean:
#clean any file *.o and the compiled file called fichero when you write make clean
	@echo "Cleaning up..."
	rm -rvf *.o
	rm -rvf fichero