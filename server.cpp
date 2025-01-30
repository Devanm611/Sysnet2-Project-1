#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <cstring>
#include <thread> 
#include <netinet/in.h> //Socket address structures
#include <unistd.h> //System calls (read, write, close)
#include <sys/socket.h> //Socket functions
#include <arpa/inet.h> //IP address function
using namespace std;

#define BUFFER_SIZE 4096

//Function on HTTP response

int main(int argc, char *argv[]){

    int serverSocket;
    int clientSocket;

    struct sockaddr_in serverAddr, clientAddr;
    socklen_t addrLen = sizeof(clientAddr);
    

    //Create the Socket
    serverSocket = socket(AF_INET, SOCK_STREAM, 0);
    if(serverSocket < 0){
        perror("Socket creation failed");
        exit(EXIT_FAILURE);
    }

    //Bind the Socket

}

