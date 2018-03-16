all: stacktest

stacktest: ilinkedlist.h ilinkedlist.c istack.h istack.c istack-tests.c
	gcc ilinkedlist.c istack.c istack-tests.c -o stacktest

clean:
	@rm -f *.o stacktest