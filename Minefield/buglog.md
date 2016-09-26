# BUG LOG
* TEST: getOutOfBoundsSquare
 * Test should pass, as col 20 row 20 is out of bounds for the default minefield, but the testing suite breaks when an exception is thrown
* TEST: getEmptyShown
 * After revealing an empty square at col 5 row 5, the get function should return EMPTY_SHOWN, but it returns EMPTY HIDDEN
