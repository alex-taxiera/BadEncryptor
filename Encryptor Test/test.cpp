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
    // function should take a string and return a string
    // file IO can be a separate function
    // I assume we are shifting spaces as well

    EXPECT_EQ(encryptZeroAPress("Alex ate an apple"), "mfy!uf!o!qqmf");
}