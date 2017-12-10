/*************************************************************************
	> File Name: pe9-golf.h
	> Author: Grant Liu
	> Mail: ymliu6899@gmail.com
	> Created Time: Sat Dec  9 15:19:56 2017
************************************************************************/

// golf.h -- for pe9-1.cpp

#ifndef _GOLF_H
#define _GOLF_H

// by default Len is a static variable with internal linkage. 
// Notice that when we say linkage across multiple files or visiable in the current file. 
// This "file" means a translation unit based on *.c/*.cpp files.
const int Len = 40; 
struct golf
{
    char fullname[Len];
    int handicap;
};

// non-interactive version
// function sets golf structure to provided name, handicap
// using values passed as arguments to the function
void setgolf(golf & g, const char * name, int hc);

// interactive version
// function solicits name and handicap from user
// and sets the members of g to the values entered
// returns 1 if name is entered, 0 if name is empty string
int setgolf(golf & g);

// function resets handicap to new value
void handicap(golf & g, int hc);

// function displays contents of golf structure
void showgolf(const golf & g);

#endif
