all: ds eval

ds: ds/lib/libds.a

ds/lib/libds.a:
	$(MAKE) -C ds
        
eval: intStack/ilinkedlist.h intStack/ilinkedlist.c intStack/istack.h intStack/istack.c ds/lib/libds.a lab7.c
	gcc intStack/ilinkedlist.c intStack/istack.c lab7.c -Lds/lib -lds -o eval

clean:
	@rm -f *.o eval
	$(MAKE) -C ./ds clean
	
cleanall: clean
	$(MAKE) -C ./ds cleanall
