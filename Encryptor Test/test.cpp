#include "pch.h"
#include "../Encryptor/encryptor.cpp"

TEST(Encryptor, EveryOther)
{
    // function should take a string and return a string
    // file IO can be a separate function
  
    EXPECT_EQ(encryptEveryOther("alex\nkeeps the doctor away") , "mfy\nWOW the SHREK away");
}

TEST(Encryptor, ZeroAPressRun)
{
	// function should take a string and return a string
	// file IO can be a separate function

    EXPECT_EQ(encryptZeroAPress("Alex ate an apple"), "lex te n pple");
}

TEST(Encryptor, ShiftUpTest)
{
	EXPECT_EQ(encryptShiftUp("Dustin is a legend"), "Evtujo!jt!b!mfhfoe");
}

TEST(Encryptor, MemeCryptionTest)
{
	EXPECT_EQ(encryptWithMemes("A meme a day keeps the doctor away"), "WOW meme SUCH day SHREK doctor FEELSGOODMAN");
}