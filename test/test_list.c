#include "list.h"
#include "testing_utils.h"

#include <unity.h>

void setUp() {}

void tearDown() {}

void test_create_node()
{
        TEST_ASSERT_NULL(create_node(NULL, "sads", "sfds", "sadsad"));
        TEST_ASSERT_NULL(create_node("sads", NULL, "sfds", "sadsad"));
        TEST_ASSERT_NULL(create_node("sads", "sfds", NULL, "sadsad"));
        TEST_ASSERT_NULL(create_node("sads", "sfds", "sadsad", NULL));

        struct Person *node = create_node("sda", "sadsadsa", "asdsad", "sddsa");
        TEST_ASSERT_NOT_NULL(node);
        TEST_ASSERT_EQUAL_STRING(node->name, "sda");
        TEST_ASSERT_EQUAL_STRING(node->surname, "sadsadsa");
        TEST_ASSERT_EQUAL_STRING(node->email, "asdsad");
        TEST_ASSERT_EQUAL_STRING(node->phone, "sddsa");
}

void test_load_node()
{
        TEST_ASSERT_NULL(load_node(NULL));
        TEST_ASSERT_NULL(load_node("    "));
        TEST_ASSERT_NULL(load_node("lsajdljdslak"));
        TEST_ASSERT_NULL(load_node("name,surname,email,"));
        TEST_ASSERT_NULL(load_node(",,,"));

        TEST_ASSERT_NOT_NULL(load_node("name , surname , email , phone"));
        TEST_ASSERT_NOT_NULL(load_node("name,surname,email,phone"));
}

void test_load_list()
{
        struct Person *list = NULL;

        TEST_ASSERT_EQUAL(load_list("test_list.txt", &list), 0);
        TEST_ASSERT_EQUAL(load_list("test_list.txt", NULL), 0);
        TEST_ASSERT_EQUAL(load_list(NULL, NULL), 1);
        TEST_ASSERT_EQUAL(load_list("random_file", NULL), 2);
}

void test_add_to_list()
{
        struct Person *list = NULL;
        struct Person *node = load_node("name,surname,email,phone");

        TEST_ASSERT_EQUAL(add_to_list(NULL, NULL), 1);
        TEST_ASSERT_EQUAL(add_to_list(&list, NULL), 1);
        TEST_ASSERT_EQUAL(add_to_list(&list, node), 0);
        TEST_ASSERT_EQUAL(add_to_list(NULL, node), 2);

        if (list != NULL)
                delete_list(&list);
        else 
                delete_list(&node);
}

void test_add_to_list_at()
{
        struct Person *list = NULL;
        struct Person *node = load_node("name,surname,email,phone");

        TEST_ASSERT_EQUAL(add_to_list_at(NULL, NULL, genRandomInt(-100, 100)), 1);
        TEST_ASSERT_EQUAL(add_to_list_at(&list, NULL, genRandomInt(-100, 100)), 1);
        TEST_ASSERT_EQUAL(add_to_list_at(&list, node, genRandomInt(-100, 100)), 0);
        TEST_ASSERT_EQUAL(add_to_list_at(NULL, node, genRandomInt(-100, 100)), 2);

        if (list != NULL)
                delete_list(&list);
        else 
                delete_list(&node);
}

void test_delete_at()
{
        struct Person *list = NULL;
        struct Person *node0 = load_node("name,surname,email,phone");
        struct Person *node1 = load_node("name,surname,email,phone");
        struct Person *node2 = load_node("name,surname,email,phone");
        struct Person *node3 = load_node("name,surname,email,phone");

        TEST_ASSERT_EQUAL(delete_at(&list, genRandomInt(-100, -1)), 1);
        TEST_ASSERT_EQUAL(delete_at(&list, genRandomInt(0, 100)), 1);

        add_to_list(&list, node0);
        add_to_list(&list, node1);
        add_to_list(&list, node2);
        add_to_list(&list, node3);

        TEST_ASSERT_EQUAL(delete_at(&list, genRandomInt(-100, -1)), 1);
        TEST_ASSERT_EQUAL(delete_at(&list, genRandomInt(4, 100)), 2);

        TEST_ASSERT_EQUAL(delete_at(&list, genRandomInt(0, 3)), 0);
        TEST_ASSERT_EQUAL(delete_at(&list, genRandomInt(0, 2)), 0);
        TEST_ASSERT_EQUAL(delete_at(&list, genRandomInt(0, 1)), 0);
        TEST_ASSERT_EQUAL(delete_at(&list, genRandomInt(0, 0)), 0);
        TEST_ASSERT_EQUAL(delete_at(&list, genRandomInt(0, 0)), 1);
}

void test_delete_list()
{
        struct Person *list = NULL;

        delete_list(&list);

        TEST_ASSERT_NULL(list);

        struct Person *node0 = load_node("name,surname,email,phone");
        struct Person *node1 = load_node("name,surname,email,phone");
        struct Person *node2 = load_node("name,surname,email,phone");
        struct Person *node3 = load_node("name,surname,email,phone");

        add_to_list(&list, node0);
        add_to_list(&list, node1);
        add_to_list(&list, node2);
        add_to_list(&list, node3);

        delete_list(&list);

        TEST_ASSERT_NULL(list);
}

void test_find_at()
{
        struct Person *list = NULL;
        struct Person *node0 = load_node("name,surname,email,phone");
        struct Person *node1 = load_node("name,surname,email,phone");
        struct Person *node2 = load_node("name,surname,email,phone");
        struct Person *node3 = load_node("name,surname,email,phone");

        add_to_list(&list, node0);
        add_to_list(&list, node1);
        add_to_list(&list, node2);
        add_to_list(&list, node3);

        TEST_ASSERT_NULL(find_at(list, genRandomInt(-100, -1)));
        TEST_ASSERT_NULL(find_at(list, genRandomInt(4, 100)));
        TEST_ASSERT_NOT_NULL(find_at(list, genRandomInt(0, 3)));

        if (list != NULL)
                delete_list(&list);
}

void test_find_by_name()
{
        struct Person *list = NULL;
        struct Person *node0 = load_node("name0,surname,email,phone");
        struct Person *node1 = load_node("name1,surname,email,phone");
        struct Person *node2 = load_node("name2,surname,email,phone");
        struct Person *node3 = load_node("name3,surname,email,phone");

        add_to_list(&list, node0);
        add_to_list(&list, node1);
        add_to_list(&list, node2);
        add_to_list(&list, node3);

        TEST_ASSERT_NULL(find_by_name(list, genRandomString(10)));
        TEST_ASSERT_NOT_NULL(find_by_name(list, "name0"));
        TEST_ASSERT_NOT_NULL(find_by_name(list, "name1"));
        TEST_ASSERT_NOT_NULL(find_by_name(list, "name2"));
        TEST_ASSERT_NOT_NULL(find_by_name(list, "name3"));

        if (list != NULL)
                delete_list(&list);
}

void test_find_by_surname()
{
        struct Person *list = NULL;
        struct Person *node0 = load_node("name,surname0,email,phone");
        struct Person *node1 = load_node("name,surname1,email,phone");
        struct Person *node2 = load_node("name,surname2,email,phone");
        struct Person *node3 = load_node("name,surname3,email,phone");

        add_to_list(&list, node0);
        add_to_list(&list, node1);
        add_to_list(&list, node2);
        add_to_list(&list, node3);

        TEST_ASSERT_NULL(find_by_surname(list, genRandomString(10)));
        TEST_ASSERT_NOT_NULL(find_by_surname(list, "surname0"));
        TEST_ASSERT_NOT_NULL(find_by_surname(list, "surname1"));
        TEST_ASSERT_NOT_NULL(find_by_surname(list, "surname2"));
        TEST_ASSERT_NOT_NULL(find_by_surname(list, "surname3"));

        if (list != NULL)
                delete_list(&list);
}

void test_find_by_email()
{
        struct Person *list = NULL;
        struct Person *node0 = load_node("name,surname,email0,phone");
        struct Person *node1 = load_node("name,surname,email1,phone");
        struct Person *node2 = load_node("name,surname,email2,phone");
        struct Person *node3 = load_node("name,surname,email3,phone");

        add_to_list(&list, node0);
        add_to_list(&list, node1);
        add_to_list(&list, node2);
        add_to_list(&list, node3);

        TEST_ASSERT_NULL(find_by_email(list, genRandomString(10)));
        TEST_ASSERT_NOT_NULL(find_by_email(list, "email0"));
        TEST_ASSERT_NOT_NULL(find_by_email(list, "email1"));
        TEST_ASSERT_NOT_NULL(find_by_email(list, "email2"));
        TEST_ASSERT_NOT_NULL(find_by_email(list, "email3"));

        if (list != NULL)
                delete_list(&list);
}

void test_find_by_phone()
{
        struct Person *list = NULL;
        struct Person *node0 = load_node("name,surname,email,phone0");
        struct Person *node1 = load_node("name,surname,email,phone1");
        struct Person *node2 = load_node("name,surname,email,phone2");
        struct Person *node3 = load_node("name,surname,email,phone3");

        add_to_list(&list, node0);
        add_to_list(&list, node1);
        add_to_list(&list, node2);
        add_to_list(&list, node3);

        TEST_ASSERT_NULL(find_by_phone(list, genRandomString(10)));
        TEST_ASSERT_NOT_NULL(find_by_phone(list, "phone0"));
        TEST_ASSERT_NOT_NULL(find_by_phone(list, "phone1"));
        TEST_ASSERT_NOT_NULL(find_by_phone(list, "phone2"));
        TEST_ASSERT_NOT_NULL(find_by_phone(list, "phone3"));

        if (list != NULL)
                delete_list(&list);
}


