# EPITA Practical Programming S3 - 2016/2017
# Makefile
# Marwan Burelle
 
# Compilers and options
CC=gcc
CPPFLAGS= -MMD
CFLAGS= -Wall -Wextra -std=c99 -pedantic -O2
LDFLAGS=
LDLIBS=
 
SRC = list.c main.c
OBJ = ${SRC:.c=.o}
DEP = ${SRC:.c=.d}
 
all: main
 
main: ${OBJ}
 
-include ${DEP}
 
clean:
	rm -f ${OBJ} ${DEP}
	rm -f main
 
# END
