CL=ar -rcs
FLAGS=-Wall -g
CC=gcc






main.o:main.c NumClass.h
	$(CC) $(FLAGS) -c main.c -lm

advancedClassificationRecursion.o: advancedClassificationRecursion.c NumClass.h
	$(CC) $(FLAGS)  -c advancedClassificationRecursion.c 

advancedClassificationLoop.o: advancedClassificationLoop.c NumClass.h
	$(CC) $(FLAGS) -c advancedClassificationLoop.c -lm

basicClassification.o: basicClassification.c NumClass.h
	$(CC) $(FLAGS) -c basicClassification.c -lm 

###########

libclassrec.a: main.o advancedClassificationRecursion.o basicClassification.o 
	 $(CL) libclassrec.a advancedClassificationRecursion.o basicClassification.o 

libclassrec.so: advancedClassificationRecursion.o basicClassification.o NumClass.h main.o
	$(CC) -shared -o libclassrec.so advancedClassificationRecursion.o basicClassification.o 

libclassloops.a: main.o advancedClassificationLoop.o basicClassification.o 
	$(CL) libclassloops.a advancedClassificationLoop.o basicClassification.o

libclassloops.so:advancedClassificationLoop.o basicClassification.o NumClass.h main.o
	$(CC) -shared -o libclassloops.so advancedClassificationLoop.o basicClassification.o 

#######
mains:main.o libclassrec.a
		$(CC) $(FLAGS) -o mains main.o libclassrec.a -lm
maindloop:main.o libclassloops.so
		$(CC) $(FLAGS) -o maindloop main.o libclassloops.so -lm
maindrec:main.o libclassrec.so
		$(CC) $(FLAGS) -o maindrec main.o libclassrec.so -lm





