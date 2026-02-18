#include <iostream>
#include <vector>
#include <windows.h>

// Mock memory addresses for "Glow" and "Aimbot"
#define GLOW_POINTER 0x14ACF20
#define ENTITY_LIST 0x17BF910

class MemoryManager {
public:
    bool AttachProcess(const char* procName) {
        std::cout << "[CPP] Attempting to attach to: " << procName << std::endl;
        // In a this scenario, this would use Attachprocess() because of the memory allocation
        return true;
    }

    void ScanForEntities() {
        std::cout << "[CPP] Scanning entity list at: " << std::hex << ENTITY_LIST << std::endl;
        for(int i = 0; i < 5; i++) {
            std::cout << "[CPP] Found Entity[" << i << "] at offset 0x" << (ENTITY_LIST + (i * 0x10)) << std::endl;
        }
    }
};

int main() {
    MemoryManager mem;
    if(mem.AttachProcess("VALORANT-Win64-Shipping.exe")) {
        mem.ScanForEntities();
    }
    return 0;
}