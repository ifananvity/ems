/*
 * header.h
 *
 *  Created on: 20 May 2018
 */

#ifndef HEADER_H_
#define HEADER_H_

// Libraries
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <windows.h>
#include <time.h>

// Declaration
int i, j, flag;
int n;

COORD coord;
//COORD coord = {0, 0};

struct dateInfo {
    int dd, mm, yy;
    int total;
};

struct timeInfo {
    int hh, mm;
};

struct eventInfo {
    char name[30];
    char peopleInvolved[30];
    char place[30];
    struct dateInfo date;
    struct timeInfo time;
};
struct eventInfo event[100];

// Constants definitions
#define TRUE 1
#define FALSE 0

// Function prototypes
void gotoxy (int x, int y);
int showsCurrentTime(void);
void returnFunc(void);
void swap(int *a, int *b);
void swap2(char *str1, char *str2);
void printTitle(void);
void mainMenu(void);
void addEvent(void);
void listEvent(void);
void removeEvent(void);
void searchEvent(void);
void searchBy(int selection);
void sortEvent(void);

#endif /* HEADER_H_ */
