#include "RingManager.h"
#include "Logger.h"

extern "C"
{
    bool SKSEPlugin_Load()
    {
        Logger::Info("Left Hand Rings SKSE loaded.");

        RingManager::Initialize();

        return true;
    }
}
