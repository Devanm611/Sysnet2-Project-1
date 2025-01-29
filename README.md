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
