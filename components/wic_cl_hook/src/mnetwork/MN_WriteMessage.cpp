#include "../stdafx.h"

void MN_WriteMessage::PrepareWrite(ushort aLengthToWrite, short aTypeCheckValue)
{
	static DWORD ptr_MN_WriteMessage_PrepareWrite = 0x006B8C50;

	__asm
	{
		movzx eax, aTypeCheckValue
		push eax					// 3: aTypeCheckValue

		movzx eax, aLengthToWrite
		push eax					// 2: aLengthToWrite

		push ecx
		pop eax						// 1: thisptr

		call dword ptr ds:[ptr_MN_WriteMessage_PrepareWrite]
	}
}

void MN_WriteMessage::WriteBool(bool aBool)
{
	this->PrepareWrite(sizeof(bool), 'BL');
	this->myCurrentPacket->AppendData(sizeof(bool), &aBool);
}

void MN_WriteMessage::WriteChar(char aChar)
{
	this->PrepareWrite(sizeof(char), 'CH');
	this->myCurrentPacket->AppendData(sizeof(char), &aChar);
}

void MN_WriteMessage::WriteUChar(uchar aUChar)
{
	this->PrepareWrite(sizeof(uchar), 'UC');
	this->myCurrentPacket->AppendData(sizeof(uchar), &aUChar);
}

void MN_WriteMessage::WriteShort(short aShort)
{
	this->PrepareWrite(sizeof(short), 'SH');
	this->myCurrentPacket->AppendData(sizeof(short), &aShort);
}

void MN_WriteMessage::WriteUShort(ushort aUShort)
{
	this->PrepareWrite(sizeof(ushort), 'US');
	this->myCurrentPacket->AppendData(sizeof(ushort), &aUShort);
}

void MN_WriteMessage::WriteInt(int aInt)
{
	this->PrepareWrite(sizeof(int), 'IN');
	this->myCurrentPacket->AppendData(sizeof(int), &aInt);
}

void MN_WriteMessage::WriteUInt(uint aUInt)
{
	this->PrepareWrite(sizeof(uint), 'UI');
	this->myCurrentPacket->AppendData(sizeof(uint), &aUInt);
}

void MN_WriteMessage::WriteInt64(__int64 aInt64)
{
	this->PrepareWrite(sizeof(__int64), 'I6');
	this->myCurrentPacket->AppendData(sizeof(__int64), &aInt64);
}

void MN_WriteMessage::WriteUInt64(uint64 aUInt64)
{
	this->PrepareWrite(sizeof(uint64), 'U6');
	this->myCurrentPacket->AppendData(sizeof(uint64), &aUInt64);
}

void MN_WriteMessage::WriteFloat(float aFloat)
{
	this->PrepareWrite(sizeof(float), 'FL');
	this->myCurrentPacket->AppendData(sizeof(float), &aFloat);
}

// wic_online.exe

void MN_WriteMessageOnlineExeDisc::PrepareWrite(ushort aLengthToWrite, short aTypeCheckValue)
{
	static DWORD ptr_MN_WriteMessage_PrepareWrite = 0x0070D3A0;

	__asm
	{
		movzx eax, aTypeCheckValue
		push eax					// 3: aTypeCheckValue

		movzx eax, aLengthToWrite
		push eax					// 2: aLengthToWrite

		push ecx
		pop eax						// 1: thisptr

		call dword ptr ds:[ptr_MN_WriteMessage_PrepareWrite]
	}
}

void MN_WriteMessageOnlineExeDisc::WriteBool(bool aBool)
{
	this->PrepareWrite(sizeof(bool), 'BL');
	this->myCurrentPacket->AppendData(sizeof(bool), &aBool);
}

void MN_WriteMessageOnlineExeDisc::WriteChar(char aChar)
{
	this->PrepareWrite(sizeof(char), 'CH');
	this->myCurrentPacket->AppendData(sizeof(char), &aChar);
}

void MN_WriteMessageOnlineExeDisc::WriteUChar(uchar aUChar)
{
	this->PrepareWrite(sizeof(uchar), 'UC');
	this->myCurrentPacket->AppendData(sizeof(uchar), &aUChar);
}

void MN_WriteMessageOnlineExeDisc::WriteShort(short aShort)
{
	this->PrepareWrite(sizeof(short), 'SH');
	this->myCurrentPacket->AppendData(sizeof(short), &aShort);
}

void MN_WriteMessageOnlineExeDisc::WriteUShort(ushort aUShort)
{
	this->PrepareWrite(sizeof(ushort), 'US');
	this->myCurrentPacket->AppendData(sizeof(ushort), &aUShort);
}

void MN_WriteMessageOnlineExeDisc::WriteInt(int aInt)
{
	this->PrepareWrite(sizeof(int), 'IN');
	this->myCurrentPacket->AppendData(sizeof(int), &aInt);
}

void MN_WriteMessageOnlineExeDisc::WriteUInt(uint aUInt)
{
	this->PrepareWrite(sizeof(uint), 'UI');
	this->myCurrentPacket->AppendData(sizeof(uint), &aUInt);
}

void MN_WriteMessageOnlineExeDisc::WriteInt64(__int64 aInt64)
{
	this->PrepareWrite(sizeof(__int64), 'I6');
	this->myCurrentPacket->AppendData(sizeof(__int64), &aInt64);
}

void MN_WriteMessageOnlineExeDisc::WriteUInt64(uint64 aUInt64)
{
	this->PrepareWrite(sizeof(uint64), 'U6');
	this->myCurrentPacket->AppendData(sizeof(uint64), &aUInt64);
}

void MN_WriteMessageOnlineExeDisc::WriteFloat(float aFloat)
{
	this->PrepareWrite(sizeof(float), 'FL');
	this->myCurrentPacket->AppendData(sizeof(float), &aFloat);
}