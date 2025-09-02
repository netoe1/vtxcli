
# Compiler configs:
CC=g++

# Paths binaries:
HEADERS=./include
BIN=./bin
SOURCES= ./src




cliente.o: $(HEADERS)/ICliente.hpp $(SOURCES)/Cliente.cpp
	$(CC) -o $(BIN)/cliente.o -c $(SOURCES)/Cliente.cpp -I $(HEADERS)
itensOrcamento.o: $(HEADERS)/IItensOrcamento.hpp $(SOURCES)/ItensOrcamento.cpp
	$(CC) -o $(BIN)/itensOrcamento.o -c $(SOURCES)/ItensOrcamento.cpp -I $(HEADERS)
orcamento.o: $(HEADERS)/Orcamento.hpp $(SOURCES)/Orcamento.cpp
	$(CC) -o $(BIN)/itensOrcamento.o -c $(SOURCES)/ItensOrcamento.cpp -I $(HEADERS) $(BIN)/itensOrcamento.o

clean:
	rm -f ./bin/*.o ./bin/*.obj ./bin/*.bin
