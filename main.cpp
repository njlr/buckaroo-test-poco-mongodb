#include <iostream>
#include <Poco/MongoDB/MongoDB.h>
#include <Poco/MongoDB/Connection.h>

int main() {
  Poco::MongoDB::Connection conexion(std::string("127.0.0.1"), 27017);
  std::cout << "Demo project. " << std::endl;
  return 0;
}
