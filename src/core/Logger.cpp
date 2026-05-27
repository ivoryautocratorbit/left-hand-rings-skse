#include <iostream>
#include "Logger.h"

void Logger::Info(const char* message)
{
    std::cout << "[LeftHandRings] " << message << std::endl;
}
