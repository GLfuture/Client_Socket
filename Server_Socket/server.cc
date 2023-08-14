#include"Server_Socket.hpp"
using namespace std;
using namespace Server_Socket_NSP;
int main()
{
    Server_Socket server(1024);
    server.Init_Sock(8080,10);
    int clientfd = server.Accept();
    Client_Ptr client = server.Get_Client(clientfd);
    server.Recv(clientfd);
    cout<<client->Get_Rbuffer();
    //清空read_buffer
    client->Clean_Rbuffer();
    client->Set_Wbuffer("hello client");
    server.Send(clientfd);
    return 0;
}