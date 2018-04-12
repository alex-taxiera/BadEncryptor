#include "pch.h"
#include "../Encryptor/encryptor.cpp"

TEST(Encryptor, EveryOther)
{
    // function should take a string and return a string
    // file IO can be a separate function
  
    EXPECT_EQ(encryptEveryOther("hello\nworld") , "ifmmp\nworld");
}

TEST(Encryptor, ZeroAPressRun)
{
    EXPECT_EQ(encryptZeroAPress("Alex ate an apple"), "mfy!uf!o!qqmf");
}

TEST(Encryptor, ShiftUpTest)
{
	EXPECT_EQ(encryptShiftUp("Dustin is a legend"), "Evtujo!jt!b!mfhfoe");
}

TEST(Encryptor, MemeCryptionTest)
{
	EXPECT_EQ(encryptWithMemes("A meme a day\nkeeps the doctor away"), "B!nfnf!b!ebz\nWOW the SHREK away");
}