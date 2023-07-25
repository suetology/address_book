#include "/var/lib/gems/3.0.0/gems/ceedling-0.31.1/vendor/unity/src/unity.h"
#include "test/testing_utils.h"
#include "src/lib/list.h"




void setUp() {}



void tearDown() {}



void test_create_node()

{

        do {if ((((create_node(

       ((void *)0)

       , "sads", "sfds", "sadsad"))) == 

       ((void *)0)

       )) {} else {UnityFail( (((" Expected NULL"))), (UNITY_UINT)((UNITY_UINT)((UNITY_UINT)(12))));}} while(0);

        do {if ((((create_node("sads", 

       ((void *)0)

       , "sfds", "sadsad"))) == 

       ((void *)0)

       )) {} else {UnityFail( (((" Expected NULL"))), (UNITY_UINT)((UNITY_UINT)((UNITY_UINT)(13))));}} while(0);

        do {if ((((create_node("sads", "sfds", 

       ((void *)0)

       , "sadsad"))) == 

       ((void *)0)

       )) {} else {UnityFail( (((" Expected NULL"))), (UNITY_UINT)((UNITY_UINT)((UNITY_UINT)(14))));}} while(0);

        do {if ((((create_node("sads", "sfds", "sadsad", 

       ((void *)0)

       ))) == 

       ((void *)0)

       )) {} else {UnityFail( (((" Expected NULL"))), (UNITY_UINT)((UNITY_UINT)((UNITY_UINT)(15))));}} while(0);



        struct Person *node = create_node("sda", "sadsadsa", "asdsad", "sddsa");

        do {if ((((node)) != 

       ((void *)0)

       )) {} else {UnityFail( (((" Expected Non-NULL"))), (UNITY_UINT)((UNITY_UINT)((UNITY_UINT)(18))));}} while(0);

        UnityAssertEqualString((const char*)((node->name)), (const char*)(("sda")), (

       ((void *)0)

       ), (UNITY_UINT)(19));

        UnityAssertEqualString((const char*)((node->surname)), (const char*)(("sadsadsa")), (

       ((void *)0)

       ), (UNITY_UINT)(20));

        UnityAssertEqualString((const char*)((node->email)), (const char*)(("asdsad")), (

       ((void *)0)

       ), (UNITY_UINT)(21));

        UnityAssertEqualString((const char*)((node->phone)), (const char*)(("sddsa")), (

       ((void *)0)

       ), (UNITY_UINT)(22));

}



void test_load_node()

{

        do {if ((((load_node(

       ((void *)0)

       ))) == 

       ((void *)0)

       )) {} else {UnityFail( (((" Expected NULL"))), (UNITY_UINT)((UNITY_UINT)((UNITY_UINT)(27))));}} while(0);

        do {if ((((load_node("    "))) == 

       ((void *)0)

       )) {} else {UnityFail( (((" Expected NULL"))), (UNITY_UINT)((UNITY_UINT)((UNITY_UINT)(28))));}} while(0);

        do {if ((((load_node("lsajdljdslak"))) == 

       ((void *)0)

       )) {} else {UnityFail( (((" Expected NULL"))), (UNITY_UINT)((UNITY_UINT)((UNITY_UINT)(29))));}} while(0);

        do {if ((((load_node("name,surname,email,"))) == 

       ((void *)0)

       )) {} else {UnityFail( (((" Expected NULL"))), (UNITY_UINT)((UNITY_UINT)((UNITY_UINT)(30))));}} while(0);

        do {if ((((load_node(",,,"))) == 

       ((void *)0)

       )) {} else {UnityFail( (((" Expected NULL"))), (UNITY_UINT)((UNITY_UINT)((UNITY_UINT)(31))));}} while(0);



        do {if ((((load_node("name , surname , email , phone"))) != 

       ((void *)0)

       )) {} else {UnityFail( (((" Expected Non-NULL"))), (UNITY_UINT)((UNITY_UINT)((UNITY_UINT)(33))));}} while(0);

        do {if ((((load_node("name,surname,email,phone"))) != 

       ((void *)0)

       )) {} else {UnityFail( (((" Expected Non-NULL"))), (UNITY_UINT)((UNITY_UINT)((UNITY_UINT)(34))));}} while(0);

}



void test_load_list()

{

        struct Person *list = 

                             ((void *)0)

                                 ;



        UnityAssertEqualNumber((UNITY_INT)((load_list("test_list.txt", &list))), (UNITY_INT)((0)), (

       ((void *)0)

       ), (UNITY_UINT)(41), UNITY_DISPLAY_STYLE_INT);

        UnityAssertEqualNumber((UNITY_INT)((load_list("test_list.txt", 

       ((void *)0)

       ))), (UNITY_INT)((0)), (

       ((void *)0)

       ), (UNITY_UINT)(42), UNITY_DISPLAY_STYLE_INT);

        UnityAssertEqualNumber((UNITY_INT)((load_list(

       ((void *)0)

       , 

       ((void *)0)

       ))), (UNITY_INT)((1)), (

       ((void *)0)

       ), (UNITY_UINT)(43), UNITY_DISPLAY_STYLE_INT);

        UnityAssertEqualNumber((UNITY_INT)((load_list("random_file", 

       ((void *)0)

       ))), (UNITY_INT)((2)), (

       ((void *)0)

       ), (UNITY_UINT)(44), UNITY_DISPLAY_STYLE_INT);

}



void test_add_to_list()

{

        struct Person *list = 

                             ((void *)0)

                                 ;

        struct Person *node = load_node("name,surname,email,phone");



        UnityAssertEqualNumber((UNITY_INT)((add_to_list(

       ((void *)0)

       , 

       ((void *)0)

       ))), (UNITY_INT)((1)), (

       ((void *)0)

       ), (UNITY_UINT)(52), UNITY_DISPLAY_STYLE_INT);

        UnityAssertEqualNumber((UNITY_INT)((add_to_list(&list, 

       ((void *)0)

       ))), (UNITY_INT)((1)), (

       ((void *)0)

       ), (UNITY_UINT)(53), UNITY_DISPLAY_STYLE_INT);

        UnityAssertEqualNumber((UNITY_INT)((add_to_list(&list, node))), (UNITY_INT)((0)), (

       ((void *)0)

       ), (UNITY_UINT)(54), UNITY_DISPLAY_STYLE_INT);

        UnityAssertEqualNumber((UNITY_INT)((add_to_list(

       ((void *)0)

       , node))), (UNITY_INT)((2)), (

       ((void *)0)

       ), (UNITY_UINT)(55), UNITY_DISPLAY_STYLE_INT);



        if (list != 

                   ((void *)0)

                       )

                delete_list(&list);

        else

                delete_list(&node);

}



void test_add_to_list_at()

{

        struct Person *list = 

                             ((void *)0)

                                 ;

        struct Person *node = load_node("name,surname,email,phone");



        UnityAssertEqualNumber((UNITY_INT)((add_to_list_at(

       ((void *)0)

       , 

       ((void *)0)

       , genRandomInt(-100, 100)))), (UNITY_INT)((1)), (

       ((void *)0)

       ), (UNITY_UINT)(68), UNITY_DISPLAY_STYLE_INT);

        UnityAssertEqualNumber((UNITY_INT)((add_to_list_at(&list, 

       ((void *)0)

       , genRandomInt(-100, 100)))), (UNITY_INT)((1)), (

       ((void *)0)

       ), (UNITY_UINT)(69), UNITY_DISPLAY_STYLE_INT);

        UnityAssertEqualNumber((UNITY_INT)((add_to_list_at(&list, node, genRandomInt(-100, 100)))), (UNITY_INT)((0)), (

       ((void *)0)

       ), (UNITY_UINT)(70), UNITY_DISPLAY_STYLE_INT);

        UnityAssertEqualNumber((UNITY_INT)((add_to_list_at(

       ((void *)0)

       , node, genRandomInt(-100, 100)))), (UNITY_INT)((2)), (

       ((void *)0)

       ), (UNITY_UINT)(71), UNITY_DISPLAY_STYLE_INT);



        if (list != 

                   ((void *)0)

                       )

                delete_list(&list);

        else

                delete_list(&node);

}



void test_delete_at()

{

        struct Person *list = 

                             ((void *)0)

                                 ;

        struct Person *node0 = load_node("name,surname,email,phone");

        struct Person *node1 = load_node("name,surname,email,phone");

        struct Person *node2 = load_node("name,surname,email,phone");

        struct Person *node3 = load_node("name,surname,email,phone");



        UnityAssertEqualNumber((UNITY_INT)((delete_at(&list, genRandomInt(-100, -1)))), (UNITY_INT)((1)), (

       ((void *)0)

       ), (UNITY_UINT)(87), UNITY_DISPLAY_STYLE_INT);

        UnityAssertEqualNumber((UNITY_INT)((delete_at(&list, genRandomInt(0, 100)))), (UNITY_INT)((1)), (

       ((void *)0)

       ), (UNITY_UINT)(88), UNITY_DISPLAY_STYLE_INT);



        add_to_list(&list, node0);

        add_to_list(&list, node1);

        add_to_list(&list, node2);

        add_to_list(&list, node3);



        UnityAssertEqualNumber((UNITY_INT)((delete_at(&list, genRandomInt(-100, -1)))), (UNITY_INT)((1)), (

       ((void *)0)

       ), (UNITY_UINT)(95), UNITY_DISPLAY_STYLE_INT);

        UnityAssertEqualNumber((UNITY_INT)((delete_at(&list, genRandomInt(4, 100)))), (UNITY_INT)((2)), (

       ((void *)0)

       ), (UNITY_UINT)(96), UNITY_DISPLAY_STYLE_INT);



        UnityAssertEqualNumber((UNITY_INT)((delete_at(&list, genRandomInt(0, 3)))), (UNITY_INT)((0)), (

       ((void *)0)

       ), (UNITY_UINT)(98), UNITY_DISPLAY_STYLE_INT);

        UnityAssertEqualNumber((UNITY_INT)((delete_at(&list, genRandomInt(0, 2)))), (UNITY_INT)((0)), (

       ((void *)0)

       ), (UNITY_UINT)(99), UNITY_DISPLAY_STYLE_INT);

        UnityAssertEqualNumber((UNITY_INT)((delete_at(&list, genRandomInt(0, 1)))), (UNITY_INT)((0)), (

       ((void *)0)

       ), (UNITY_UINT)(100), UNITY_DISPLAY_STYLE_INT);

        UnityAssertEqualNumber((UNITY_INT)((delete_at(&list, genRandomInt(0, 0)))), (UNITY_INT)((0)), (

       ((void *)0)

       ), (UNITY_UINT)(101), UNITY_DISPLAY_STYLE_INT);

        UnityAssertEqualNumber((UNITY_INT)((delete_at(&list, genRandomInt(0, 0)))), (UNITY_INT)((1)), (

       ((void *)0)

       ), (UNITY_UINT)(102), UNITY_DISPLAY_STYLE_INT);

}



void test_delete_list()

{

        struct Person *list = 

                             ((void *)0)

                                 ;



        delete_list(&list);



        do {if ((((list)) == 

       ((void *)0)

       )) {} else {UnityFail( (((" Expected NULL"))), (UNITY_UINT)((UNITY_UINT)((UNITY_UINT)(111))));}} while(0);



        struct Person *node0 = load_node("name,surname,email,phone");

        struct Person *node1 = load_node("name,surname,email,phone");

        struct Person *node2 = load_node("name,surname,email,phone");

        struct Person *node3 = load_node("name,surname,email,phone");



        add_to_list(&list, node0);

        add_to_list(&list, node1);

        add_to_list(&list, node2);

        add_to_list(&list, node3);



        delete_list(&list);



        do {if ((((list)) == 

       ((void *)0)

       )) {} else {UnityFail( (((" Expected NULL"))), (UNITY_UINT)((UNITY_UINT)((UNITY_UINT)(125))));}} while(0);

}



void test_find_at()

{

        struct Person *list = 

                             ((void *)0)

                                 ;

        struct Person *node0 = load_node("name,surname,email,phone");

        struct Person *node1 = load_node("name,surname,email,phone");

        struct Person *node2 = load_node("name,surname,email,phone");

        struct Person *node3 = load_node("name,surname,email,phone");



        add_to_list(&list, node0);

        add_to_list(&list, node1);

        add_to_list(&list, node2);

        add_to_list(&list, node3);



        do {if ((((find_at(list, genRandomInt(-100, -1)))) == 

       ((void *)0)

       )) {} else {UnityFail( (((" Expected NULL"))), (UNITY_UINT)((UNITY_UINT)((UNITY_UINT)(141))));}} while(0);

        do {if ((((find_at(list, genRandomInt(4, 100)))) == 

       ((void *)0)

       )) {} else {UnityFail( (((" Expected NULL"))), (UNITY_UINT)((UNITY_UINT)((UNITY_UINT)(142))));}} while(0);

        do {if ((((find_at(list, genRandomInt(0, 3)))) != 

       ((void *)0)

       )) {} else {UnityFail( (((" Expected Non-NULL"))), (UNITY_UINT)((UNITY_UINT)((UNITY_UINT)(143))));}} while(0);



        if (list != 

                   ((void *)0)

                       )

                delete_list(&list);

}



void test_find_by_name()

{

        struct Person *list = 

                             ((void *)0)

                                 ;

        struct Person *node0 = load_node("name0,surname,email,phone");

        struct Person *node1 = load_node("name1,surname,email,phone");

        struct Person *node2 = load_node("name2,surname,email,phone");

        struct Person *node3 = load_node("name3,surname,email,phone");



        add_to_list(&list, node0);

        add_to_list(&list, node1);

        add_to_list(&list, node2);

        add_to_list(&list, node3);



        do {if ((((find_by_name(list, genRandomString(10)))) == 

       ((void *)0)

       )) {} else {UnityFail( (((" Expected NULL"))), (UNITY_UINT)((UNITY_UINT)((UNITY_UINT)(162))));}} while(0);

        do {if ((((find_by_name(list, "name0"))) != 

       ((void *)0)

       )) {} else {UnityFail( (((" Expected Non-NULL"))), (UNITY_UINT)((UNITY_UINT)((UNITY_UINT)(163))));}} while(0);

        do {if ((((find_by_name(list, "name1"))) != 

       ((void *)0)

       )) {} else {UnityFail( (((" Expected Non-NULL"))), (UNITY_UINT)((UNITY_UINT)((UNITY_UINT)(164))));}} while(0);

        do {if ((((find_by_name(list, "name2"))) != 

       ((void *)0)

       )) {} else {UnityFail( (((" Expected Non-NULL"))), (UNITY_UINT)((UNITY_UINT)((UNITY_UINT)(165))));}} while(0);

        do {if ((((find_by_name(list, "name3"))) != 

       ((void *)0)

       )) {} else {UnityFail( (((" Expected Non-NULL"))), (UNITY_UINT)((UNITY_UINT)((UNITY_UINT)(166))));}} while(0);



        if (list != 

                   ((void *)0)

                       )

                delete_list(&list);

}



void test_find_by_surname()

{

        struct Person *list = 

                             ((void *)0)

                                 ;

        struct Person *node0 = load_node("name,surname0,email,phone");

        struct Person *node1 = load_node("name,surname1,email,phone");

        struct Person *node2 = load_node("name,surname2,email,phone");

        struct Person *node3 = load_node("name,surname3,email,phone");



        add_to_list(&list, node0);

        add_to_list(&list, node1);

        add_to_list(&list, node2);

        add_to_list(&list, node3);



        do {if ((((find_by_surname(list, genRandomString(10)))) == 

       ((void *)0)

       )) {} else {UnityFail( (((" Expected NULL"))), (UNITY_UINT)((UNITY_UINT)((UNITY_UINT)(185))));}} while(0);

        do {if ((((find_by_surname(list, "surname0"))) != 

       ((void *)0)

       )) {} else {UnityFail( (((" Expected Non-NULL"))), (UNITY_UINT)((UNITY_UINT)((UNITY_UINT)(186))));}} while(0);

        do {if ((((find_by_surname(list, "surname1"))) != 

       ((void *)0)

       )) {} else {UnityFail( (((" Expected Non-NULL"))), (UNITY_UINT)((UNITY_UINT)((UNITY_UINT)(187))));}} while(0);

        do {if ((((find_by_surname(list, "surname2"))) != 

       ((void *)0)

       )) {} else {UnityFail( (((" Expected Non-NULL"))), (UNITY_UINT)((UNITY_UINT)((UNITY_UINT)(188))));}} while(0);

        do {if ((((find_by_surname(list, "surname3"))) != 

       ((void *)0)

       )) {} else {UnityFail( (((" Expected Non-NULL"))), (UNITY_UINT)((UNITY_UINT)((UNITY_UINT)(189))));}} while(0);



        if (list != 

                   ((void *)0)

                       )

                delete_list(&list);

}



void test_find_by_email()

{

        struct Person *list = 

                             ((void *)0)

                                 ;

        struct Person *node0 = load_node("name,surname,email0,phone");

        struct Person *node1 = load_node("name,surname,email1,phone");

        struct Person *node2 = load_node("name,surname,email2,phone");

        struct Person *node3 = load_node("name,surname,email3,phone");



        add_to_list(&list, node0);

        add_to_list(&list, node1);

        add_to_list(&list, node2);

        add_to_list(&list, node3);



        do {if ((((find_by_email(list, genRandomString(10)))) == 

       ((void *)0)

       )) {} else {UnityFail( (((" Expected NULL"))), (UNITY_UINT)((UNITY_UINT)((UNITY_UINT)(208))));}} while(0);

        do {if ((((find_by_email(list, "email0"))) != 

       ((void *)0)

       )) {} else {UnityFail( (((" Expected Non-NULL"))), (UNITY_UINT)((UNITY_UINT)((UNITY_UINT)(209))));}} while(0);

        do {if ((((find_by_email(list, "email1"))) != 

       ((void *)0)

       )) {} else {UnityFail( (((" Expected Non-NULL"))), (UNITY_UINT)((UNITY_UINT)((UNITY_UINT)(210))));}} while(0);

        do {if ((((find_by_email(list, "email2"))) != 

       ((void *)0)

       )) {} else {UnityFail( (((" Expected Non-NULL"))), (UNITY_UINT)((UNITY_UINT)((UNITY_UINT)(211))));}} while(0);

        do {if ((((find_by_email(list, "email3"))) != 

       ((void *)0)

       )) {} else {UnityFail( (((" Expected Non-NULL"))), (UNITY_UINT)((UNITY_UINT)((UNITY_UINT)(212))));}} while(0);



        if (list != 

                   ((void *)0)

                       )

                delete_list(&list);

}



void test_find_by_phone()

{

        struct Person *list = 

                             ((void *)0)

                                 ;

        struct Person *node0 = load_node("name,surname,email,phone0");

        struct Person *node1 = load_node("name,surname,email,phone1");

        struct Person *node2 = load_node("name,surname,email,phone2");

        struct Person *node3 = load_node("name,surname,email,phone3");



        add_to_list(&list, node0);

        add_to_list(&list, node1);

        add_to_list(&list, node2);

        add_to_list(&list, node3);



        do {if ((((find_by_phone(list, genRandomString(10)))) == 

       ((void *)0)

       )) {} else {UnityFail( (((" Expected NULL"))), (UNITY_UINT)((UNITY_UINT)((UNITY_UINT)(231))));}} while(0);

        do {if ((((find_by_phone(list, "phone0"))) != 

       ((void *)0)

       )) {} else {UnityFail( (((" Expected Non-NULL"))), (UNITY_UINT)((UNITY_UINT)((UNITY_UINT)(232))));}} while(0);

        do {if ((((find_by_phone(list, "phone1"))) != 

       ((void *)0)

       )) {} else {UnityFail( (((" Expected Non-NULL"))), (UNITY_UINT)((UNITY_UINT)((UNITY_UINT)(233))));}} while(0);

        do {if ((((find_by_phone(list, "phone2"))) != 

       ((void *)0)

       )) {} else {UnityFail( (((" Expected Non-NULL"))), (UNITY_UINT)((UNITY_UINT)((UNITY_UINT)(234))));}} while(0);

        do {if ((((find_by_phone(list, "phone3"))) != 

       ((void *)0)

       )) {} else {UnityFail( (((" Expected Non-NULL"))), (UNITY_UINT)((UNITY_UINT)((UNITY_UINT)(235))));}} while(0);



        if (list != 

                   ((void *)0)

                       )

                delete_list(&list);

}
