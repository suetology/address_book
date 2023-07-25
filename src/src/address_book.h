#ifndef ADDRESS_BOOK_H
#define ADDRESS_BOOK_H

#include "list.h"

extern struct Person *list;
extern unsigned program_opened;

int init_book();
void show_menu();
unsigned is_program_opened();
unsigned get_menu_input();
void choose_option(unsigned option);
void show_all_addresses();
void find_address_by_name();
void find_address_by_surname();
void find_address_by_email();
void find_address_by_phone();
int add_address();
struct Person *enter_address();
int delete_address();
void delete_all_addresses();
void program_should_close();
void exit_program();

#endif