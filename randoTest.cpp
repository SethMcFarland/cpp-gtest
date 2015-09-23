/**
 * Unit Tests for Rando Test
**/

#include <gtest/gtest.h>
#include "rando.h"

/*  
	FUNCTIONS WE NEED TO TEST:

	bool shouldWorry(bool,bool,bool);
	bool isDivisbleBy(int,int);
	bool isPrime(int);
	int nearestToZero(int,int);
*/
 
class RandoTest : public ::testing::Test
{
	protected:
		RandoTest(){} //constructor runs before each test
		virtual ~RandoTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor) 
};

TEST(RandoTest, allChildrenSmile)
{
	Rando rando;
	ASSERT_TRUE( rando.shouldWorry(true,true,true) );
}

TEST(RandoTest, divisibility)
{
	Rando rando;
	ASSERT_TRUE( rando.isDivisbleBy(50,25) );
}

TEST(RandoTest, divisibility2)
{
	Rando rando;
	ASSERT_TRUE( rando.isDivisbleBy(25, 50) );
}

TEST(RandoTest, divisibility3)
{
	Rando rando;
	ASSERT_FALSE( rando.isDivisbleBy(3, 10) );
}

TEST(RandoTest, divisibility4)
{
	Rando rando;
	ASSERT_TRUE( rando.isDivisbleBy(0, 1) );
}

TEST(RandoTest, divisibility5)
{
	Rando rando;
	ASSERT_TRUE( rando.isDivisbleBy(1, 1) );
}



