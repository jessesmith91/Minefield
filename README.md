# Minefield

This project can be used to keep track of a simplistic [Minesweeper](https://en.wikipedia.org/wiki/Minesweeper_%28video_game%29)-like game that has a square field where mines can be placed. Initially, the mines are hidden and the user makes guesses to try to find all the empty spaces *without* choosing any of the hidden mines.

## FieldType

FieldType is an enumerated type to represent the four possible states of the minefield:

`MINE_HIDDEN` a mine that has not been shown to the user

`MINE_SHOWN` a mine that has been shown to the user

`EMPTY_HIDDEN` an empty space that has not yet been guessed by the user

`EMPTY_SHOWN` an empty space that has been guessed by the user

## Member Functions

`Field()` Constructor creates a 10x10 grid with no mines

`Field(int dim)` Constructor creates a dimXdim grid with no mines or an invalid parameter defaults to 10x10

`void placeMine(int col, int row)` Places a mine at the (col,row) coordinate in the field

`FieldType get(int col, int row)` Retrieves the state of the field at location (col,row)

`bool isSafe(int col, int row)` Returns whether or not _map at (col,row) has a mine and throws an exception if the location is illegal

`void revealAdjacent(int col, int row)` Changes the location from EMPTY_HIDDEN to EMPTY_SHOWN for the location and any valid locations adjacent (immediately above, below, left, or right as printed) to the provided (col,row) location

# Quick Guide

A [Makefile](Makefile) is provided that includes:

* `make clean` removes all compilation and build files besides the source code

* `make` builds the **Field** class and its test class

* `make test` runs the FieldTest with a test runner