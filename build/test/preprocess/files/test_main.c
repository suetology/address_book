#include "/var/lib/gems/3.0.0/gems/ceedling-0.31.1/vendor/unity/src/unity.h"
#include "build/test/mocks/mock_address_book.h"
#include "test/testing_utils.h"
#include "src/src/main.h"






void setUp() {}



void tearDown() {}



void test_AppMain_should_return_zero()

{

        show_menu_CMockIgnore();

        delete_all_addresses_CMockIgnore();

        program_should_close_CMockIgnore();



        init_book_CMockExpectAndReturn(17, 0);



        int input = genRandomInt(0, 9);

        get_menu_input_CMockIgnoreAndReturn(20, input);

        choose_option_CMockExpect(21, input);



        is_program_opened_CMockIgnoreAndReturn(23, 0);



        UnityAssertEqualNumber((UNITY_INT)((AppMain())), (UNITY_INT)((0)), (

       ((void *)0)

       ), (UNITY_UINT)(25), UNITY_DISPLAY_STYLE_INT);



}



void test_AppMain_should_return_one_if_book_uninitialized()

{

        show_menu_CMockIgnore();

        delete_all_addresses_CMockIgnore();

        choose_option_CMockIgnore();

        program_should_close_CMockIgnore();

        is_program_opened_CMockIgnoreAndReturn(35, 0);



        init_book_CMockExpectAndReturn(37, 1);

        UnityAssertEqualNumber((UNITY_INT)((AppMain())), (UNITY_INT)((1)), (

       ((void *)0)

       ), (UNITY_UINT)(38), UNITY_DISPLAY_STYLE_INT);

}
