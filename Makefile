
CC:=gcc -Wall 
FLAGS:=-I. 

all:libdslc.a ll_test 


linkedlist.o:linkedlist.c linkedlist.h 	
	${CC} ${FLAGS} -c linkedlist.c -o linkedlist.o
libdslc.a:linkedlist.o
	ar rcs libdslc.a linkedlist.o

ll_test:linkedlist.h test_linkedlist.c libdslc.a
	${CC} ${FLAGS} linkedlist.c test_linkedlist.c -L. -ldslc -o ll_test


clean:
	rm ll_test *.o
