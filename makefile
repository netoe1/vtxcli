CC= g++


cliente.o:
	g++ -o ./bin/cliente.o -c ./src/Cliente.cpp -I ./include
itensOrcamento.o:
	g++ -o ./bin/itensOrcamento.o -c ./src/ItensOrcamento.cpp -I ./include
orcamento.o:
	g++ -o ./bin/itensOrcamento.o -c ./src/ItensOrcamento.cpp -I ./include /bin/itensOrcamento.o
