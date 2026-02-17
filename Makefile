app: main.c filelib.c
	gcc main.c  filelib.c -o part4
run:
	./part4
clean:
	rm -rf part4