#include<iostream>
#include<WinSock2.h>
using namespace std;

#pragma comment(lib,"ws2_32.lib")

bool Initialise(){
    WSADATA data;
    return WSAStartup(MAKEWORD(2,2), &data) == 0;
}

int main(){

    if(!Initialise()){
        cout<<"Winsock Initisalisation failed"<<endl;
    }

    cout<<"Server Program"<< endl;
    SOCKET listenSocket = socket(AF_INET,SOCK_STREAM,0);

    WSACleanup();

    return 0;
}
