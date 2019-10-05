all:
	gcc fichero.c -o fichero -std=c99

clean:
	@echo "Cleaning up..."
	rm -rvf *.o
	rm -rvf fichero