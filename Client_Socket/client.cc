#include<iostream>
#include<string>
#include"Client_Socket.hpp"
using namespace std;
using namespace Client_Socket_NSP;

#define IP "127.0.0.1"
#define PORT 9999
#define BUFFERSIZE 1024
#define READ_LEN -1
#define WRITE_LEN -1

int main()
{
    Client_Socket client(IP,PORT,BUFFERSIZE);
    client.Init_Sock(8080);
    client.Connect();
    string a="hello world";
    client.Set_Write_Buffer(a);
    int len = client.Send(WRITE_LEN);
    cout<<len<<endl;
    client.Recv(READ_LEN);
    cout<<client.Get_Read_Buffer();
    return 0;
}