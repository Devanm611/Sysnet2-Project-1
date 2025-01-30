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

    int tcp_server_socket;
    int clientSocket;

    struct sockaddr_in tcp_server_address, clientAddr;
    socklen_t addrLen = sizeof(clientAddr);
    

    //Create the Socket
    serverSocket = socket(AF_INET, SOCK_STREAM, 0);
    if(serverSocket < 0){
        perror("Socket creation failed");
        exit(EXIT_FAILURE);
    }

    //Address structure
    memset(&tcp_server_address, 0, sizeof(tcp_server_address));
    tcp_server_address.sin_family = AF_INET; 
    tcp_server_address.sin_addr.s_addr = INADDR_ANY;   //Accept connections from any IP address
    tcp_server_address.sin_port = 0; //Automatically bind to an unused port

    /*
        Devan Rivera 1/30/2025
        Worked on the Binding of the Socket
        Worked on the Listening of the Socket
        Worked on the Accepting of the incoming connection
    */

    //Binding the socket to the IP address and port utilizing the bind() function

    int bind(tcp_server_socket s, const struct sockaddr *addr, socklen_t addrlen);

    if(bind(tcp_server_socket, (struct sockaddr*)&tcp_server_address, sizeof(tcp_server_address)) < 0){

        perror("Socket bind() failed..."); //Print an error message if bind fails
        closesocket(tcp_server_socket); 
        exit(EXIT_FAILURE);

    }
    else{

        printf("Socket bind() successful!!!");//Print a success message if bind is successful

    }

    //Listen for simultaneous connections utilizing the listen() function
    int listen(tcp_server_socket s, int backLog);

    if(listen(tcp_server_socket, 5) == 0){

        perror("Socket listen() failed..."); //Print an error message if listen fails
        closesocket(tcp_server_socket); 
        exit(EXIT_FAILURE);

    }
    else{

        printf("Socket listen() successful!!!"); //Print a success message if listen is successful

    }


    //Accepting the incoming connection utilizing the accept() function
    
    new_socket = accept(tcp_server_socket, (struct sockaddr *)&address, &addrlen);

    if(new_socket < 0){

        perror("Socket accept() failed..."); //Print an error message if accept fails
        closesocket(tcp_server_socket); 
        exit(EXIT_FAILURE);

    }
    else{

        printf("Socket accept() successful!!!"); //Print a success message if accept is successful

    }

    close(new_socket);
    close(tcp_server_socket);

    return 0;

}

