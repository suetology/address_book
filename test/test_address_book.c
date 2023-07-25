#include "address_book.h"
#include "testing_utils.h"

#include "mock_list.h"

#include <stdio.h>
#include <stdlib.h>
#include <unity.h>

void setUp() {}

void tearDown() {}

void test_init_book()
{
        program_opened = 0;
        load_list_IgnoreAndReturn(0);

        int ret = init_book();

        TEST_ASSERT_EQUAL(program_opened, 1);
        TEST_ASSERT_EQUAL(ret, 0);
}

void test_get_menu_input()
{
        FILE *file = freopen("fake_user_input", "r+", stdin);
        if (file == NULL) {
                fprintf(stderr, "File 'fake_user_input' does not exist\n");
                return;
        }

        int decision = genRandomInt(1, 9);

        fprintf(file, "%d\n", decision);
        fflush(file);
        fseek(file, 0, SEEK_SET);

        TEST_ASSERT_EQUAL(decision, get_menu_input());

        fclose(file);
}

void test_find_address_by_name()
{
        FILE *file = freopen("fake_user_input", "r+", stdin);
        if (file == NULL) {
                fprintf(stderr, "File 'fake_user_input' does not exist\n");
                return;
        }

        char *str = genRandomString(10);

        fprintf(file, "%s\n", str);
        fflush(file);
        fseek(file, 0, SEEK_SET);

        find_by_name_ExpectAndReturn(list, str, NULL);
        find_address_by_name();

        free(str);
        fclose(file);
}

void test_find_address_by_surname()
{
        FILE *file = freopen("fake_user_input", "r+", stdin);
        if (file == NULL) {
                fprintf(stderr, "File 'fake_user_input' does not exist\n");
                return;
        }

        char *str = genRandomString(10);

        fprintf(file, "%s\n", str);
        fflush(file);
        fseek(file, 0, SEEK_SET);

        find_by_surname_ExpectAndReturn(list, str, NULL);
        find_address_by_surname();

        free(str);
        fclose(file);
}

void test_find_address_by_email()
{
        FILE *file = freopen("fake_user_input", "r+", stdin);
        if (file == NULL) {
                fprintf(stderr, "File 'fake_user_input' does not exist\n");
                return;
        }

        char *str = genRandomString(10);

        fprintf(file, "%s\n", str);
        fflush(file);
        fseek(file, 0, SEEK_SET);

        find_by_email_ExpectAndReturn(list, str, NULL);
        find_address_by_email();

        free(str);
        fclose(file);
}

void test_find_address_by_phone()
{
        FILE *file = freopen("fake_user_input", "r+", stdin);
        if (file == NULL) {
                fprintf(stderr, "File 'fake_user_input' does not exist\n");
                return;
        }

        char *str = genRandomString(10);

        fprintf(file, "%s\n", str);
        fflush(file);
        fseek(file, 0, SEEK_SET);

        find_by_phone_ExpectAndReturn(list, str, NULL);
        find_address_by_phone();

        free(str);
        fclose(file);
}

void test_add_address_user_types_P()
{
        FILE *file = freopen("fake_user_input", "r+", stdin);
        if (file == NULL) {
                fprintf(stderr, "File 'fake_user_input' does not exist\n");
                return;
        }

        int pos = genRandomInt(-100, 100);

        fprintf(file, "P\n%d\nname\nsurname\nemail\nphone\n", pos);
        fflush(file);
        fseek(file, 0, SEEK_SET);

        create_node_ExpectAndReturn("name", "surname", "email", "phone", NULL);
        add_to_list_IgnoreAndReturn(0);

        TEST_ASSERT_EQUAL(add_address(), 2);

        fclose(file);
}

void test_add_address_user_does_not_type_P()
{
        FILE *file = freopen("fake_user_input", "r+", stdin);
        if (file == NULL) {
                fprintf(stderr, "File 'fake_user_input' does not exist\n");
                return;
        }

        fprintf(file, "a\nname\nsurname\nemail\nphone\n");
        fflush(file);
        fseek(file, 0, SEEK_SET);

        create_node_ExpectAndReturn("name", "surname", "email", "phone", NULL);
        add_to_list_IgnoreAndReturn(0);

        TEST_ASSERT_EQUAL(add_address(), 1);

        fclose(file);
}

void test_enter_address_with_valid_input()
{
        FILE *file = freopen("fake_user_input", "r+", stdin);
        if (file == NULL) {
                fprintf(stderr, "File 'fake_user_input' does not exist\n");
                return;
        }

        fprintf(file, "name\nsurname\nemail\nphone\n");
        fflush(file);
        fseek(file, 0, SEEK_SET);

        struct Person *node = (struct Person *)malloc(sizeof(struct Person));
        if (node == NULL) {
                fprintf(stderr, "Failed allocating memory for testing purposes in 'test_enter_address'\n");
                return;
        }
        create_node_ExpectAndReturn("name", "surname", "email", "phone", node);
        add_to_list_IgnoreAndReturn(0);

        TEST_ASSERT_NOT_NULL(enter_address());

        free(node);
        fclose(file);
}

void test_enter_address_with_wrong_input()
{
        FILE *file = freopen("fake_user_input", "w+", stdin);
        if (file == NULL) {
                fprintf(stderr, "File 'fake_user_input' does not exist\n");
                return;
        }

        fprintf(file, "name\n%c\nemail\n%c\n", '\x7F', '\x7F');
        fflush(file);
        fseek(file, 0, SEEK_SET);

        create_node_ExpectAndReturn("name", "\x7F", "email", "\x7F", NULL);
        add_to_list_IgnoreAndReturn(0);

        TEST_ASSERT_NULL(enter_address());

        fclose(file);
}

void test_delete_address()
{
        struct Person *node = (struct Person *)malloc(sizeof(struct Person));

        FILE *file = freopen("fake_user_input", "w+", stdin);
        if (file == NULL) {
                fprintf(stderr, "File 'fake_user_input' does not exist\n");
                return;
        }

        int pos = genRandomInt(-100, 100);

        fprintf(file, "%d\n", pos);
        fflush(file);
        fseek(file, 0, SEEK_SET);

        delete_at_ExpectAndReturn(&list, pos, 0);

        delete_address();

        fclose(file);
}

void test_program_should_close_user_types_C()
{
        FILE *file = freopen("fake_user_input", "w+", stdin);
        if (file == NULL) {
                fprintf(stderr, "File 'fake_user_input' does not exist\n");
                return;
        }

        program_opened = 1;

        fprintf(file, "c\n");
        fflush(file);
        fseek(file, 0, SEEK_SET);

        program_should_close();

        TEST_ASSERT_EQUAL(program_opened, 1);

        fclose(file);
}

void test_program_should_close_user_does_not_type_C()
{
        FILE *file = freopen("fake_user_input", "w+", stdin);
        if (file == NULL) {
                fprintf(stderr, "File 'fake_user_input' does not exist\n");
                return;
        }

        program_opened = 1;

        fprintf(file, "a\n");
        fflush(file);
        fseek(file, 0, SEEK_SET);

        program_should_close();

        TEST_ASSERT_EQUAL(program_opened, 0);

        fclose(file);
}