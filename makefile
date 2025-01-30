all:
	g++	-o	httpServer	httpServer.cpp	-pthread	-Wall	-g
clean:
	rm	-f	httpServer