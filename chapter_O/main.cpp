#include <iostream>
#include <bitset>

void rotateDaBitz(std::bitset<4> bits) {
    std::cout << "---------------------" << '\n';
    std::cout << "Received bits: " << bits << '\n';
    const bool forceSet = bits.test(3);

    bits <<= 1;
    if (forceSet) {
        bits.set(0);
    }

    std::cout << "Rotated bits: " << bits << '\n';
}

void superRotateDaBitz(std::bitset<4> bits) {
    std::cout << "Super ! Received bits: " << bits << '\n';
    std::cout << "op1: " << (bits<<1) << '\n';
    std::cout << "op2: " << (bits>>3) << '\n';
    std::cout << "Rotated bits: " << std::bitset<4>{(bits<<1) | (bits>>3)} << '\n';
}

int main() {
    std::bitset<8> bits{ 0b0000'0001 };
    bits.set(3);
    bits.flip(4);
    bits.reset(4);

    std::cout << "All the bits: " << bits << '\n';
    std::cout << "Bit on position 3 " << bits.test(3) << '\n';
    std::cout << "Bit on position 4 " << bits.test(4) << '\n';
    bits = bits << 1;
    std::cout << "All the bits ( after << 1 ): " << bits << '\n';
    bits = ~bits;
    std::cout << "All the bits ( after ~ NOT ): " << bits << '\n';
    std::cout << "None of the bitzz: " << (bits & ~bits) << '\n';
    std::cout << "All of the bitzz: " << (bits | ~bits) << '\n';
    std::bitset<8> xorbits = bits;
    xorbits.set(1);
    std::cout << "All of the XOR bitzz: " << (bits ^ xorbits) << '\n';
    std::cout << "XOR of self, bitzz: " << (bits ^ bits) << '\n';
    xorbits <<= 1;
    std::cout << "XOR bits, 1 << left: " << (xorbits) << '\n';

    std::bitset<4> x { 0b1100 };

    std::cout << x << '\n';
    std::cout << (x >> 1) << '\n'; // shift right by 1, yielding 0110
    std::cout << (x << 1) << '\n'; // shift left by 1, yielding 1000

    rotateDaBitz(std::bitset<4>{0b1000});
    rotateDaBitz(std::bitset<4>{0b1100});
    superRotateDaBitz(std::bitset<4>{0b1100});
    rotateDaBitz(std::bitset<4>{0b0101});
    rotateDaBitz(std::bitset<4>{0b0001});

    return 0;
}