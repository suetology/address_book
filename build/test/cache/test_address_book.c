#include "/var/lib/gems/3.0.0/gems/ceedling-0.31.1/vendor/unity/src/unity.h"
#include "build/test/mocks/mock_list.h"
#include "test/testing_utils.h"
#include "src/src/address_book.h"












void setUp() {}



void tearDown() {}



void test_init_book()

{

        program_opened = 0;

        load_list_CMockIgnoreAndReturn(17, 0);



        int ret = init_book();



        UnityAssertEqualNumber((UNITY_INT)((program_opened)), (UNITY_INT)((1)), (

       ((void *)0)

       ), (UNITY_UINT)(21), UNITY_DISPLAY_STYLE_INT);

        UnityAssertEqualNumber((UNITY_INT)((ret)), (UNITY_INT)((0)), (

       ((void *)0)

       ), (UNITY_UINT)(22), UNITY_DISPLAY_STYLE_INT);

}



void test_get_menu_input()

{

        FILE *file = freopen("fake_user_input", "r+", 

                                                     stdin

                                                          );

        if (file == 

                   ((void *)0)

                       ) {

                fprintf(

                       stderr

                             , "File used for testing 'test_add_address_user_types_P' does not exit\n");

                return;

        }



        int decision = genRandomInt(1, 9);



        fprintf(file, "%d\n", decision);

        fflush(file);

        fseek(file, 0, 

                      0

                              );



        UnityAssertEqualNumber((UNITY_INT)((decision)), (UNITY_INT)((get_menu_input())), (

       ((void *)0)

       ), (UNITY_UINT)(39), UNITY_DISPLAY_STYLE_INT);



        fclose(file);

}



void test_find_address_by_name()

{

        FILE *file = freopen("fake_user_input", "r+", 

                                                     stdin

                                                          );

        if (file == 

                   ((void *)0)

                       ) {

                fprintf(

                       stderr

                             , "File used for testing 'test_add_address_user_types_P' does not exit\n");

                return;

        }



        char *str = genRandomString(10);



        fprintf(file, "%s\n", str);

        fflush(file);

        fseek(file, 0, 

                      0

                              );



        find_by_name_CMockExpectAndReturn(58, list, str, 

       ((void *)0)

       );

        find_address_by_name();



        free(str);

        fclose(file);

}



void test_find_address_by_surname()

{

        FILE *file = freopen("fake_user_input", "r+", 

                                                     stdin

                                                          );

        if (file == 

                   ((void *)0)

                       ) {

                fprintf(

                       stderr

                             , "File used for testing 'test_add_address_user_types_P' does not exit\n");

                return;

        }



        char *str = genRandomString(10);



        fprintf(file, "%s\n", str);

        fflush(file);

        fseek(file, 0, 

                      0

                              );



        find_by_surname_CMockExpectAndReturn(79, list, str, 

       ((void *)0)

       );

        find_address_by_surname();



        free(str);

        fclose(file);

}



void test_find_address_by_email()

{

        FILE *file = freopen("fake_user_input", "r+", 

                                                     stdin

                                                          );

        if (file == 

                   ((void *)0)

                       ) {

                fprintf(

                       stderr

                             , "File used for testing 'test_add_address_user_types_P' does not exit\n");

                return;

        }



        char *str = genRandomString(10);



        fprintf(file, "%s\n", str);

        fflush(file);

        fseek(file, 0, 

                      0

                              );



        find_by_email_CMockExpectAndReturn(100, list, str, 

       ((void *)0)

       );

        find_address_by_email();



        free(str);

        fclose(file);

}



void test_find_address_by_phone()

{

        FILE *file = freopen("fake_user_input", "r+", 

                                                     stdin

                                                          );

        if (file == 

                   ((void *)0)

                       ) {

                fprintf(

                       stderr

                             , "File used for testing 'test_add_address_user_types_P' does not exit\n");

                return;

        }



        char *str = genRandomString(10);



        fprintf(file, "%s\n", str);

        fflush(file);

        fseek(file, 0, 

                      0

                              );



        find_by_phone_CMockExpectAndReturn(121, list, str, 

       ((void *)0)

       );

        find_address_by_phone();



        free(str);

        fclose(file);

}



void test_add_address_user_types_P()

{

        FILE *file = freopen("fake_user_input", "r+", 

                                                     stdin

                                                          );

        if (file == 

                   ((void *)0)

                       ) {

                fprintf(

                       stderr

                             , "File used for testing 'test_add_address_user_types_P' does not exit\n");

                return;

        }



        int pos = genRandomInt(-100, 100);



        fprintf(file, "P\n%d\nname\nsurname\nemail\nphone\n", pos);

        fflush(file);

        fseek(file, 0, 

                      0

                              );



        create_node_CMockExpectAndReturn(142, "name", "surname", "email", "phone", 

       ((void *)0)

       );

        add_to_list_CMockIgnoreAndReturn(143, 0);



        UnityAssertEqualNumber((UNITY_INT)((add_address())), (UNITY_INT)((2)), (

       ((void *)0)

       ), (UNITY_UINT)(145), UNITY_DISPLAY_STYLE_INT);



        fclose(file);

}



void test_add_address_user_does_not_type_P()

{

        FILE *file = freopen("fake_user_input", "r+", 

                                                     stdin

                                                          );

        if (file == 

                   ((void *)0)

                       ) {

                fprintf(

                       stderr

                             , "File used for testing 'test_add_address_user_does_not_type_P' does not exit\n");

                return;

        }



        fprintf(file, "a\nname\nsurname\nemail\nphone\n");

        fflush(file);

        fseek(file, 0, 

                      0

                              );



        create_node_CMockExpectAndReturn(162, "name", "surname", "email", "phone", 

       ((void *)0)

       );

        add_to_list_CMockIgnoreAndReturn(163, 0);



        UnityAssertEqualNumber((UNITY_INT)((add_address())), (UNITY_INT)((1)), (

       ((void *)0)

       ), (UNITY_UINT)(165), UNITY_DISPLAY_STYLE_INT);



        fclose(file);

}



void test_enter_address_with_valid_input()

{

        FILE *file = freopen("fake_user_input", "r+", 

                                                     stdin

                                                          );

        if (file == 

                   ((void *)0)

                       ) {

                fprintf(

                       stderr

                             , "File used for testing 'add_address' does not exit\n");

                return;

        }



        fprintf(file, "name\nsurname\nemail\nphone\n");

        fflush(file);

        fseek(file, 0, 

                      0

                              );



        struct Person *node = (struct Person *)malloc(sizeof(struct Person));

        if (node == 

                   ((void *)0)

                       ) {

                fprintf(

                       stderr

                             , "Failed allocating memory for testing purposes in 'test_enter_address'\n");

                return;

        }

        create_node_CMockExpectAndReturn(187, "name", "surname", "email", "phone", node);

        add_to_list_CMockIgnoreAndReturn(188, 0);



        do {if ((((enter_address())) != 

       ((void *)0)

       )) {} else {UnityFail( (((" Expected Non-NULL"))), (UNITY_UINT)((UNITY_UINT)((UNITY_UINT)(190))));}} while(0);



        free(node);

        fclose(file);

}



void test_enter_address_with_wrong_input()

{

        FILE *file = freopen("fake_user_input", "w+", 

                                                     stdin

                                                          );

        if (file == 

                   ((void *)0)

                       ) {

                fprintf(

                       stderr

                             , "File used for testing 'add_address' does not exit\n");

                return;

        }



        fprintf(file, "name\n%c\nemail\n%c\n", '\x7F', '\x7F');

        fflush(file);

        fseek(file, 0, 

                      0

                              );



        create_node_CMockExpectAndReturn(208, "name", "\x7F", "email", "\x7F", 

       ((void *)0)

       );

        add_to_list_CMockIgnoreAndReturn(209, 0);



        do {if ((((enter_address())) == 

       ((void *)0)

       )) {} else {UnityFail( (((" Expected NULL"))), (UNITY_UINT)((UNITY_UINT)((UNITY_UINT)(211))));}} while(0);



        fclose(file);

}



void test_delete_address()

{

        struct Person *node = (struct Person *)malloc(sizeof(struct Person));



        FILE *file = freopen("fake_user_input", "w+", 

                                                     stdin

                                                          );

        if (file == 

                   ((void *)0)

                       ) {

                fprintf(

                       stderr

                             , "File used for testing 'add_address' does not exit\n");

                return;

        }



        int pos = genRandomInt(-100, 100);



        fprintf(file, "%d\n", pos);

        fflush(file);

        fseek(file, 0, 

                      0

                              );



        delete_at_CMockExpectAndReturn(232, &list, pos, 0);



        delete_address();



        fclose(file);

}



void test_program_should_close_user_types_C()

{

        FILE *file = freopen("fake_user_input", "w+", 

                                                     stdin

                                                          );

        if (file == 

                   ((void *)0)

                       ) {

                fprintf(

                       stderr

                             , "File used for testing 'add_address' does not exit\n");

                return;

        }



        program_opened = 1;



        fprintf(file, "c\n");

        fflush(file);

        fseek(file, 0, 

                      0

                              );



        program_should_close();



        UnityAssertEqualNumber((UNITY_INT)((program_opened)), (UNITY_INT)((1)), (

       ((void *)0)

       ), (UNITY_UINT)(255), UNITY_DISPLAY_STYLE_INT);



        fclose(file);

}



void test_program_should_close_user_does_not_type_C()

{

        FILE *file = freopen("fake_user_input", "w+", 

                                                     stdin

                                                          );

        if (file == 

                   ((void *)0)

                       ) {

                fprintf(

                       stderr

                             , "File used for testing 'add_address' does not exit\n");

                return;

        }



        program_opened = 1;



        fprintf(file, "a\n");

        fflush(file);

        fseek(file, 0, 

                      0

                              );



        program_should_close();



        UnityAssertEqualNumber((UNITY_INT)((program_opened)), (UNITY_INT)((0)), (

       ((void *)0)

       ), (UNITY_UINT)(276), UNITY_DISPLAY_STYLE_INT);



        fclose(file);

}
