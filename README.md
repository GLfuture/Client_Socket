# Socket
### clinet_sock
封装客户端socket
#### api

### server_sock
封装server端scoket
#### api
1.初始化server端socket

uint16_t Init_Sock(uint16_t port,uint16_t backlog)

2.accept的封装

uint16_t Accept()

3.获取client类

Client_Ptr Get_Client(uint16_t clientfd)

4.send（发送client的wbuffer，先调用Set_Wbuffer设置wbuufer）

uint32_t Send(uint16_t clientfd)

5.recv（recv的结果保存至对应的client的rbuffer中，采用追加方式，如果需要清除调用client的Clean_Rbuffer方法）

uint32_t Recv(uint16_t clientfd)

6.获取缓冲区的大小（缓冲区用于recv）

uint32_t Get_Buffer_Size()

7.设置缓冲区大小

void Set_Buffer_Size(uint32_t size)



