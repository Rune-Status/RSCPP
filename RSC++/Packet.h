#pragma once

#include <cstdint>
#include <cstdlib>

#define DEFAULT_BUFFER_SIZE 32

class Packet {
private:
	uint8_t *buffer;
	int writePos;
	int readPos;
public:
	Packet();
	Packet(int size);
	~Packet();
	int getWritePos(void);
	uint8_t *getBuffer(void);
	void writeByte(uint8_t byte_);
	void writeByteA(uint8_t byte_);
	void writeOpcode(uint8_t byte_);
	void writeShort(uint16_t short_);
	void writeShortA(uint16_t short_);
	void writeAShortLE(uint16_t short_);
	void writeInt(uint32_t int_);
	void writeLong(uint64_t long_);
};

