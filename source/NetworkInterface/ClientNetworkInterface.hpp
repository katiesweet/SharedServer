#ifndef CLIENT_NETWORK_INTERFACE
#define CLIENT_NETWORK_INTERFACE

#include "NetworkInterface.hpp"

using namespace boost::asio;

class ClientNetworkInterface
  : NetworkInterface
{
public:
  ClientNetworkInterface(int port, io_service& service, std::ostream& outStream);

  void connect(std::string ip, int port);
  std::string recieve();
  void send(std::string msg);

  bool isConnected();

private:
  TCPConnection::pointer conn;

};

#endif // !CLIENT_NETWORK_INTERFACE
