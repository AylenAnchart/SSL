SOURCE = tablasdeconversion.c
BIN = tablasdeconversion.out
OBJ = tablasdeconversion.o
C0NVC = conversion.c
CONVH = conversion.h
CONVO = conversion.o 
SOURCETEST = conversiontest.c
BINTEST = conversiontest.out 
OBJTEST = conversiontest.o 
CC = gcc
CFLAGS = -std=c11 
RM = rm -f

$(BIN): $(OBJ) $(CONVO) 
	$(CC) -c $(OBJ) $(CONVO) -o $(BIN) $(CFLAGS)

$(OBJ): $(SOURCE) $(CONVH) 
	$(CC) -c $(SOURCE) -o $(OBJ) $(CFLAGS)

$(CONVO): $(CONVH) $(CONVC)
	$(CC) -c $(CONVC) -o $(CONVO) $(CFLAGS)

$(BINTEST): $(OBJTEST) $(CONVO)
	$(CC) -c $(OBJTEST) $(CONVO) -o $(BINTEST) $(CFLAGS)

$(OBJTEST): $(SOURCETEST) $(CONVH)
	$(CC) -c $(SOURCETEST) -o $(OBJTEST) $(CFLAGS)

clean: 
	$(RM) *.O

