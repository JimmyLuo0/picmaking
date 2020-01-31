all: picture.c
	gcc -o picture picture.c
	./picture

clean:
	rm picture
	rm *.ppm
	
