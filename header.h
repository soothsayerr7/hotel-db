#ifndef HEADER_H // include guard.
#define HEADER_H

#include <stdio.h>

#define CLEAR "\e[1;1H\e[2J" // regex to clean the terminal.
#define LINE "------------------------------------------------------------------------------------------------------\n"

// function declaration to use in both main.c and function.c
int menu(int num_args, ...);
int y_or_n(char *txt);
void replace_char(char *str, char find, char replace);
char *lcase(const char *str);
void database_header();

int list_database();
int add_database();
int remove_database(int selected_id);
int edit_database(int selected_id);
int search_database(char wrd[30]);

void list_menu();
void add_menu();
void remove_menu();
void edit_menu();
void search_menu();

struct database_entry // general format of the entries
{
    int id;        // unique value for every entry
    char name[30]; //
    char doc[15];  // document with 8 digits
    char cob[25];  // country of birth
    char room[10]; // letter + 3 digits number
    char ci[15];   // check-in date
    char co[15];   // check-out date
};

#endif
