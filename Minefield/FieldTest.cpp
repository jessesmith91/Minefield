/**
 * Unit Tests for Field class
**/

#include <gtest/gtest.h>
#include <iostream>
#include "Field.h"
 
class FieldTest : public ::testing::Test
{
	protected:
		FieldTest(){}
		virtual ~FieldTest(){}
		virtual void SetUp(){}
		virtual void TearDown(){}
};

TEST(FieldTest, placeMineInBounds)
{
	Field minefield;
	
	minefield.placeMine(4,5);
	ASSERT_EQ( MINE_HIDDEN, minefield.get(4,5) );
}

TEST(FieldTest, getOutOfBoundsSquare) {
    Field minefield;
    bool caught = false;

    try {
        minefield.get(20, 20);
    } catch(int err) {
        caught = true;
    }

    ASSERT_TRUE(caught);
}

TEST(FieldTest, getInBoundsEmpty) {
    Field minefield;
    
    ASSERT_EQ(EMPTY_HIDDEN, minefield.get(2, 2));
}

TEST(FieldTest, getShownEmpty) {
    Field minefield;

    minefield.revealAdjacent(5, 5);

    ASSERT_EQ(EMPTY_SHOWN, minefield.get(5, 5));
}
