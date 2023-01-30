#include <iostream>
#include <bitset>
#include <cstdint>

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

void bitMasks() {
    [[maybe_unused]] constexpr std::uint8_t mask0{0b0000'0001};
    [[maybe_unused]] constexpr std::uint8_t mask1{0b0000'0010};
    [[maybe_unused]] constexpr std::uint8_t mask2{0b0000'0100};
    [[maybe_unused]] constexpr std::uint8_t mask3{0b0000'1000};
    [[maybe_unused]] constexpr std::uint8_t mask4{0b0001'0000};
    [[maybe_unused]] constexpr std::uint8_t mask5{0b0010'0000};
    [[maybe_unused]] constexpr std::uint8_t mask6{0b0100'0000};
    [[maybe_unused]] constexpr std::uint8_t mask7{0b1000'0000};

    std::uint8_t flags{0b0000'0101};
    std::cout << (flags & mask0 ? "on" : "off") << '\n';
    std::cout << (flags & mask1 ? "on" : "off") << '\n';
    std::cout << (flags & mask2 ? "on" : "off") << '\n';

    flags |= mask1;
    //std::cout << (flags & mask1 ? "on" : "off") << '\n';

    //flags |= (mask4 | mask5);
    
    //std::cout << flags << '\n';
    //std::uint8_t x{0b0000'0101};
    //x &= ~mask0;
    //std::cout << (x & mask0 ? "xon" : "xoff") << '\n';
    flags ^= mask2;
    /*
    constexpr std::uint8_t mask0{ 0x01 }; // hex for 0000 0001
    constexpr std::uint8_t mask1{ 0x02 }; // hex for 0000 0010
    constexpr std::uint8_t mask2{ 0x04 }; // hex for 0000 0100
    constexpr std::uint8_t mask3{ 0x08 }; // hex for 0000 1000
    constexpr std::uint8_t mask4{ 0x10 }; // hex for 0001 0000
    constexpr std::uint8_t mask5{ 0x20 }; // hex for 0010 0000
    constexpr std::uint8_t mask6{ 0x40 }; // hex for 0100 0000
    constexpr std::uint8_t mask7{ 0x80 }; // hex for 1000 0000 */
}

void gameEx() {
    // Define a bunch of physical/emotional states
    /*
	[[maybe_unused]] constexpr std::int8_t isHungry{	1 << 0 }; // 0000 0001
	[[maybe_unused]] constexpr std::int8_t isSad{		1 << 1 }; // 0000 0010
	[[maybe_unused]] constexpr std::int8_t isMad{		1 << 2 }; // 0000 0100
	[[maybe_unused]] constexpr std::int8_t isHappy{	1 << 3 }; // 0000 1000
	[[maybe_unused]] constexpr std::int8_t isLaughing{ 	1 << 4 }; // 0001 0000
	[[maybe_unused]] constexpr std::int8_t isAsleep{	1 << 5 }; // 0010 0000
	[[maybe_unused]] constexpr std::int8_t isDead{		1 << 6 }; // 0100 0000
	[[maybe_unused]] constexpr std::int8_t isCrying{	1 << 7 }; // 1000 0000

	std::int8_t me{}; // all flags/options turned off to start
	me |= (isHappy | isLaughing); // I am happy and laughing
	me &= ~isLaughing; // I am no longer laughing

	// Query a few states
	// (we'll use static_cast<bool> to interpret the results as a boolean value)
	std::cout << "I am happy? " << static_cast<bool>(me & isHappy) << '\n';
	std::cout << "I am laughing? " << static_cast<bool>(me & isLaughing) << '\n'; */
            // Define a bunch of physical/emotional states
	[[maybe_unused]] constexpr std::bitset<8> isHungry{	0b0000'0001 };
	[[maybe_unused]] constexpr std::bitset<8> isSad{	0b0000'0010 };
	[[maybe_unused]] constexpr std::bitset<8> isMad{	0b0000'0100 };
	[[maybe_unused]] constexpr std::bitset<8> isHappy{	0b0000'1000 };
	[[maybe_unused]] constexpr std::bitset<8> isLaughing{	0b0001'0000 };
	[[maybe_unused]] constexpr std::bitset<8> isAsleep{	0b0010'0000 };
	[[maybe_unused]] constexpr std::bitset<8> isDead{	0b0100'0000 };
	[[maybe_unused]] constexpr std::bitset<8> isCrying{	0b1000'0000 };


	std::bitset<8> me{}; // all flags/options turned off to start
    std::cout << "size of bitset<8> is: " << sizeof(me) << '\n';

	me |= (isHappy | isLaughing); // I am happy and laughing
	me &= ~isLaughing; // I am no longer laughing

	// Query a few states (we use the any() function to see if any bits remain set)
	std::cout << "I am happy? " << (me & isHappy).any() << '\n';
	std::cout << "I am laughing? " << (me & isLaughing).any() << '\n';
}

void quiz() {
    [[maybe_unused]] constexpr std::uint8_t option_viewed{ 0x01 };
    [[maybe_unused]] constexpr std::uint8_t option_edited{ 0x02 };
    [[maybe_unused]] constexpr std::uint8_t option_favorited{ 0x04 };
    [[maybe_unused]] constexpr std::uint8_t option_shared{ 0x08 };
    [[maybe_unused]] constexpr std::uint8_t option_deleted{ 0x10 };

    std::uint8_t myArticleFlags{ option_favorited };

    // set article as viewed
    myArticleFlags |= option_viewed;

    // check if article is deleted
    (myArticleFlags & option_deleted) ? std::cout << "deleted" : std::cout << "not deleted" << '\n';

    // clear favorite flag
    //myArcticleFlags &= ~option_favorited;
    // https://www.learncpp.com/cpp-tutorial/converting-between-binary-and-decimal/
    std::cout << std::bitset<8>{ myArticleFlags } << '\n';
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
    bitMasks();
    gameEx();
    quiz();
    return 0;
}