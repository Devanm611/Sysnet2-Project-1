# Sysnet2-Project-1
# Server Notes

ls = socket(port#, IP addr)

bind(ls,...) //helps tie application layer to transport layer

listen (ls,...) //check constantly for a connection (creation of socket must be made on both sides)

some infinite loop

s = accept(ls,...)

block

unblock

Server Data - Transfer

Handle Request and Create Response

closes and returns to loop

**For Socket creation**

struct sockaddr_in{

    u_char          sin_len;

    //normally not used
    u_short         sin_family;
    u_short         sin_port;
    struct in_addr  sin_addr;
    char            sin_zero[8]
    //normally not used


};
