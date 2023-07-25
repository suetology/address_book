#include "main.h"

#include <stdio.h>
#include "address_book.h"

#ifndef TEST 
int main()
{
        return AppMain();
}
#endif


int AppMain() 
{       
        if (init_book() != 0) {
                fprintf(stderr, "Failed to initialize an address book");
                return 1;
        }

        do {
                show_menu();
                unsigned decision = get_menu_input();
                choose_option(decision);
                program_should_close();
        } while (is_program_opened());

        delete_all_addresses();
        return 0;
}