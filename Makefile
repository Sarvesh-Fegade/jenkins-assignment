OBJS = main
CC = gcc

factorial:${OBJ}
	${CC} factorial.c -o ${OBJS} 

clean:
	-rm -f *.o