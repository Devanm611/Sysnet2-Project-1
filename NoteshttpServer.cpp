#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <cstring>
#include <thread> 

//TCP Server Libraries
#include <stdio.h>
#include <stdlib.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <netinet/in.h>

#include <unistd.h>
#include <arpa/inet.h>

using namespace std;

int main(){

    char tcp_server_message[256] = " Hello, I am the TCP Server you successfully connected to!! \n\n        Bye Bye!!!\n\n";

    //create the server socket 
    int tcp_server_socket;                                 //Socket Descriptor
    tcp_server_socket = socket(AF_INET, SOCK_STREAM, 0);   //Calling the socket fucntion

    //define the server address
    struct sockaddr_in tcp_server_address;           //Declaring a structure for the address
    tcp_server_address.sin_family = AF_INET;         //Sets the address family of the address the client would connect    
    tcp_server_address.sin_port = htons(39756);      //Passing the port number - converting in right network byte order
    tcp_server_adress.sin_addr = INADDR_ANY;         //Connecting to 0.0.0.0

    /*
        Devan Rivera 1/30/2025
        Binded the socket and allowed for the server to listen for incoming connections
    */

    //Binding the socket to the IP address and port utilizing the bind() function
    if(bind(tcp_server_socket, (struct sockaddr*)&tcp_server_address, sizeof(tcp_server_address)) == SOCKET_ERROR){

        cout << "Socket bind() failed: " << WSAGetLastError() << endl; //Print an error message if bind fails
        closesocket(tcp_server_socket); 
        WSACleanup();

        return 0;
    }
    else{

        cout << "Socket bind() successful! " << endl; //Print a success message if bind is successful

    }

    //Listen for simultaneous connections utilizing the listen() function
    int listen(SOCKET s, int backLog);

    if(listen(tcp_server_socket, 5) == SOCKET_ERROR){

        cout << "Socket listen() failed: " << WSAGetLastError() << endl; //Print an error message if listen fails
        closesocket(tcp_server_socket); 
        WSACleanup();

        return 0;
    }
    else{

        cout << "Socket listen() successful! " << endl; //Print a success message if listen is successful

    }

    int tcp_client_socket;
    tcp_client_socket = accept(tcp_server_socket, NULL, NULL); //Server socket to interact with client

    //send data stream
    send(tcp_client_socket, tcp_server_message, sizeof(tcp_server_message), 0);

    //close the socket
    close(tcp_server_socket);
    
    return 0;
}



