#include "main.h"
#include "testing_utils.h"
#include "mock_address_book.h"

#include <unity.h>

void setUp() {}

void tearDown() {}

void test_AppMain_should_return_zero()
{
        show_menu_Ignore();
        delete_all_addresses_Ignore();
        program_should_close_Ignore();

        init_book_ExpectAndReturn(0);
        
        int input = genRandomInt(0, 9);
        get_menu_input_IgnoreAndReturn(input);
        choose_option_Expect(input);
        
        is_program_opened_IgnoreAndReturn(0);

        TEST_ASSERT_EQUAL(AppMain(), 0);

}

void test_AppMain_should_return_one_if_book_uninitialized()
{
        show_menu_Ignore();
        delete_all_addresses_Ignore();
        choose_option_Ignore();
        program_should_close_Ignore();
        is_program_opened_IgnoreAndReturn(0);

        init_book_ExpectAndReturn(1);
        TEST_ASSERT_EQUAL(AppMain(), 1);
}
