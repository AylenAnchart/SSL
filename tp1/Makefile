CC = gcc
CFLAGS = -Wall -Wextra

all: TablasDeConversion

Conversion.o: Conversion.c Conversion.h
	$(CC) $(CFLAGS) -c Conversion.c

ConversionTest.o: ConversionTest.c Conversion.h
	$(CC) $(CFLAGS) -c ConversionTest.c

TablasDeConversion.o: TablasDeConversion.c Conversion.h
	$(CC) $(CFLAGS) -c TablasDeConversion.c

TablasDeConversion: Conversion.o ConversionTest.o TablasDeConversion.o
	$(CC) $(CFLAGS) -o TablasDeConversion Conversion.o ConversionTest.o TablasDeConversion.o -lm

clean:
	rm -f *.o TablasDeConversion
