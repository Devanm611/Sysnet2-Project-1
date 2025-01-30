all:
	g++	-o	httpServer	server.cpp	-Wall	-g
clean:
	rm	-f	httpServer