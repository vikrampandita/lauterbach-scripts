
all:
	gcc generate-cmm.c -o run
clean:
	rm -rf run
