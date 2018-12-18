#include "Exception.h"

Exception::Exception(const std::string& message):message(message){}
Exception::Exception(const Exception& e):message(e.message){}
Exception::~Exception(){}
const std::string& Exception::what()const{ return message;}
