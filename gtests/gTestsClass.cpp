﻿
// ===========================================================================
/// <summary>
/// gTestCLass.cpp
/// Entity - gtest
/// created by Mehrdad Soleimanimajd on 04.10.2019
/// </summary>
/// <created>ʆϒʅ, 04.10.2019</created>
/// <changed>ʆϒʅ, 27.06.2023</changed>
// ===========================================================================

#include "gTestsClass.h"


TEST ( Entity, Test_FailCase )
{
    EXPECT_EQ ( 1, 2 );
    EXPECT_TRUE ( false );
}
