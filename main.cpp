#include <iostream>
#include <iomanip>

int main() {
    long long number = 0x1122334455667788;
    unsigned char* bytePtr = reinterpret_cast<unsigned char*>(&number);

    for (size_t i = 0; i < sizeof(long long); ++i) {
        std::cout << "byte " << i << ": 0x" 
                  << std::hex << std::setw(2) << std::setfill('0') 
                  << static_cast<int>(bytePtr[i]) << std::endl;
    }

    return 0;
}
