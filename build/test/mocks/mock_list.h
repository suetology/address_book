/* AUTOGENERATED FILE. DO NOT EDIT. */
#ifndef _MOCK_LIST_H
#define _MOCK_LIST_H

#include "unity.h"
#include "list.h"

/* Ignore the following warnings, since we are copying code */
#if defined(__GNUC__) && !defined(__ICC) && !defined(__TMS470__)
#if __GNUC__ > 4 || (__GNUC__ == 4 && (__GNUC_MINOR__ > 6 || (__GNUC_MINOR__ == 6 && __GNUC_PATCHLEVEL__ > 0)))
#pragma GCC diagnostic push
#endif
#if !defined(__clang__)
#pragma GCC diagnostic ignored "-Wpragmas"
#endif
#pragma GCC diagnostic ignored "-Wunknown-pragmas"
#pragma GCC diagnostic ignored "-Wduplicate-decl-specifier"
#endif

void mock_list_Init(void);
void mock_list_Destroy(void);
void mock_list_Verify(void);




#define create_node_IgnoreAndReturn(cmock_retval) create_node_CMockIgnoreAndReturn(__LINE__, cmock_retval)
void create_node_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, struct Person* cmock_to_return);
#define create_node_StopIgnore() create_node_CMockStopIgnore()
void create_node_CMockStopIgnore(void);
#define create_node_ExpectAndReturn(name, surname, email, phone, cmock_retval) create_node_CMockExpectAndReturn(__LINE__, name, surname, email, phone, cmock_retval)
void create_node_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, char* name, char* surname, char* email, char* phone, struct Person* cmock_to_return);
typedef struct Person* (* CMOCK_create_node_CALLBACK)(char* name, char* surname, char* email, char* phone, int cmock_num_calls);
void create_node_AddCallback(CMOCK_create_node_CALLBACK Callback);
void create_node_Stub(CMOCK_create_node_CALLBACK Callback);
#define create_node_StubWithCallback create_node_Stub
#define load_node_IgnoreAndReturn(cmock_retval) load_node_CMockIgnoreAndReturn(__LINE__, cmock_retval)
void load_node_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, struct Person* cmock_to_return);
#define load_node_StopIgnore() load_node_CMockStopIgnore()
void load_node_CMockStopIgnore(void);
#define load_node_ExpectAndReturn(address_line, cmock_retval) load_node_CMockExpectAndReturn(__LINE__, address_line, cmock_retval)
void load_node_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, char* address_line, struct Person* cmock_to_return);
typedef struct Person* (* CMOCK_load_node_CALLBACK)(char* address_line, int cmock_num_calls);
void load_node_AddCallback(CMOCK_load_node_CALLBACK Callback);
void load_node_Stub(CMOCK_load_node_CALLBACK Callback);
#define load_node_StubWithCallback load_node_Stub
#define load_list_IgnoreAndReturn(cmock_retval) load_list_CMockIgnoreAndReturn(__LINE__, cmock_retval)
void load_list_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, int cmock_to_return);
#define load_list_StopIgnore() load_list_CMockStopIgnore()
void load_list_CMockStopIgnore(void);
#define load_list_ExpectAndReturn(filepath, list, cmock_retval) load_list_CMockExpectAndReturn(__LINE__, filepath, list, cmock_retval)
void load_list_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, char* filepath, struct Person** list, int cmock_to_return);
typedef int (* CMOCK_load_list_CALLBACK)(char* filepath, struct Person** list, int cmock_num_calls);
void load_list_AddCallback(CMOCK_load_list_CALLBACK Callback);
void load_list_Stub(CMOCK_load_list_CALLBACK Callback);
#define load_list_StubWithCallback load_list_Stub
#define print_node_Ignore() print_node_CMockIgnore()
void print_node_CMockIgnore(void);
#define print_node_StopIgnore() print_node_CMockStopIgnore()
void print_node_CMockStopIgnore(void);
#define print_node_Expect(node) print_node_CMockExpect(__LINE__, node)
void print_node_CMockExpect(UNITY_LINE_TYPE cmock_line, struct Person* node);
typedef void (* CMOCK_print_node_CALLBACK)(struct Person* node, int cmock_num_calls);
void print_node_AddCallback(CMOCK_print_node_CALLBACK Callback);
void print_node_Stub(CMOCK_print_node_CALLBACK Callback);
#define print_node_StubWithCallback print_node_Stub
#define print_list_Ignore() print_list_CMockIgnore()
void print_list_CMockIgnore(void);
#define print_list_StopIgnore() print_list_CMockStopIgnore()
void print_list_CMockStopIgnore(void);
#define print_list_Expect(list) print_list_CMockExpect(__LINE__, list)
void print_list_CMockExpect(UNITY_LINE_TYPE cmock_line, struct Person* list);
typedef void (* CMOCK_print_list_CALLBACK)(struct Person* list, int cmock_num_calls);
void print_list_AddCallback(CMOCK_print_list_CALLBACK Callback);
void print_list_Stub(CMOCK_print_list_CALLBACK Callback);
#define print_list_StubWithCallback print_list_Stub
#define add_to_list_IgnoreAndReturn(cmock_retval) add_to_list_CMockIgnoreAndReturn(__LINE__, cmock_retval)
void add_to_list_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, int cmock_to_return);
#define add_to_list_StopIgnore() add_to_list_CMockStopIgnore()
void add_to_list_CMockStopIgnore(void);
#define add_to_list_ExpectAndReturn(list, new_address, cmock_retval) add_to_list_CMockExpectAndReturn(__LINE__, list, new_address, cmock_retval)
void add_to_list_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, struct Person** list, struct Person* new_address, int cmock_to_return);
typedef int (* CMOCK_add_to_list_CALLBACK)(struct Person** list, struct Person* new_address, int cmock_num_calls);
void add_to_list_AddCallback(CMOCK_add_to_list_CALLBACK Callback);
void add_to_list_Stub(CMOCK_add_to_list_CALLBACK Callback);
#define add_to_list_StubWithCallback add_to_list_Stub
#define add_to_list_at_IgnoreAndReturn(cmock_retval) add_to_list_at_CMockIgnoreAndReturn(__LINE__, cmock_retval)
void add_to_list_at_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, int cmock_to_return);
#define add_to_list_at_StopIgnore() add_to_list_at_CMockStopIgnore()
void add_to_list_at_CMockStopIgnore(void);
#define add_to_list_at_ExpectAndReturn(list, new_address, pos, cmock_retval) add_to_list_at_CMockExpectAndReturn(__LINE__, list, new_address, pos, cmock_retval)
void add_to_list_at_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, struct Person** list, struct Person* new_address, int pos, int cmock_to_return);
typedef int (* CMOCK_add_to_list_at_CALLBACK)(struct Person** list, struct Person* new_address, int pos, int cmock_num_calls);
void add_to_list_at_AddCallback(CMOCK_add_to_list_at_CALLBACK Callback);
void add_to_list_at_Stub(CMOCK_add_to_list_at_CALLBACK Callback);
#define add_to_list_at_StubWithCallback add_to_list_at_Stub
#define delete_at_IgnoreAndReturn(cmock_retval) delete_at_CMockIgnoreAndReturn(__LINE__, cmock_retval)
void delete_at_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, int cmock_to_return);
#define delete_at_StopIgnore() delete_at_CMockStopIgnore()
void delete_at_CMockStopIgnore(void);
#define delete_at_ExpectAndReturn(list, pos, cmock_retval) delete_at_CMockExpectAndReturn(__LINE__, list, pos, cmock_retval)
void delete_at_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, struct Person** list, int pos, int cmock_to_return);
typedef int (* CMOCK_delete_at_CALLBACK)(struct Person** list, int pos, int cmock_num_calls);
void delete_at_AddCallback(CMOCK_delete_at_CALLBACK Callback);
void delete_at_Stub(CMOCK_delete_at_CALLBACK Callback);
#define delete_at_StubWithCallback delete_at_Stub
#define delete_list_Ignore() delete_list_CMockIgnore()
void delete_list_CMockIgnore(void);
#define delete_list_StopIgnore() delete_list_CMockStopIgnore()
void delete_list_CMockStopIgnore(void);
#define delete_list_Expect(list) delete_list_CMockExpect(__LINE__, list)
void delete_list_CMockExpect(UNITY_LINE_TYPE cmock_line, struct Person** list);
typedef void (* CMOCK_delete_list_CALLBACK)(struct Person** list, int cmock_num_calls);
void delete_list_AddCallback(CMOCK_delete_list_CALLBACK Callback);
void delete_list_Stub(CMOCK_delete_list_CALLBACK Callback);
#define delete_list_StubWithCallback delete_list_Stub
#define find_at_IgnoreAndReturn(cmock_retval) find_at_CMockIgnoreAndReturn(__LINE__, cmock_retval)
void find_at_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, struct Person* cmock_to_return);
#define find_at_StopIgnore() find_at_CMockStopIgnore()
void find_at_CMockStopIgnore(void);
#define find_at_ExpectAndReturn(list, pos, cmock_retval) find_at_CMockExpectAndReturn(__LINE__, list, pos, cmock_retval)
void find_at_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, struct Person* list, int pos, struct Person* cmock_to_return);
typedef struct Person* (* CMOCK_find_at_CALLBACK)(struct Person* list, int pos, int cmock_num_calls);
void find_at_AddCallback(CMOCK_find_at_CALLBACK Callback);
void find_at_Stub(CMOCK_find_at_CALLBACK Callback);
#define find_at_StubWithCallback find_at_Stub
#define find_by_name_IgnoreAndReturn(cmock_retval) find_by_name_CMockIgnoreAndReturn(__LINE__, cmock_retval)
void find_by_name_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, struct Person* cmock_to_return);
#define find_by_name_StopIgnore() find_by_name_CMockStopIgnore()
void find_by_name_CMockStopIgnore(void);
#define find_by_name_ExpectAndReturn(list, name, cmock_retval) find_by_name_CMockExpectAndReturn(__LINE__, list, name, cmock_retval)
void find_by_name_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, struct Person* list, char* name, struct Person* cmock_to_return);
typedef struct Person* (* CMOCK_find_by_name_CALLBACK)(struct Person* list, char* name, int cmock_num_calls);
void find_by_name_AddCallback(CMOCK_find_by_name_CALLBACK Callback);
void find_by_name_Stub(CMOCK_find_by_name_CALLBACK Callback);
#define find_by_name_StubWithCallback find_by_name_Stub
#define find_by_surname_IgnoreAndReturn(cmock_retval) find_by_surname_CMockIgnoreAndReturn(__LINE__, cmock_retval)
void find_by_surname_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, struct Person* cmock_to_return);
#define find_by_surname_StopIgnore() find_by_surname_CMockStopIgnore()
void find_by_surname_CMockStopIgnore(void);
#define find_by_surname_ExpectAndReturn(list, surname, cmock_retval) find_by_surname_CMockExpectAndReturn(__LINE__, list, surname, cmock_retval)
void find_by_surname_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, struct Person* list, char* surname, struct Person* cmock_to_return);
typedef struct Person* (* CMOCK_find_by_surname_CALLBACK)(struct Person* list, char* surname, int cmock_num_calls);
void find_by_surname_AddCallback(CMOCK_find_by_surname_CALLBACK Callback);
void find_by_surname_Stub(CMOCK_find_by_surname_CALLBACK Callback);
#define find_by_surname_StubWithCallback find_by_surname_Stub
#define find_by_email_IgnoreAndReturn(cmock_retval) find_by_email_CMockIgnoreAndReturn(__LINE__, cmock_retval)
void find_by_email_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, struct Person* cmock_to_return);
#define find_by_email_StopIgnore() find_by_email_CMockStopIgnore()
void find_by_email_CMockStopIgnore(void);
#define find_by_email_ExpectAndReturn(list, email, cmock_retval) find_by_email_CMockExpectAndReturn(__LINE__, list, email, cmock_retval)
void find_by_email_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, struct Person* list, char* email, struct Person* cmock_to_return);
typedef struct Person* (* CMOCK_find_by_email_CALLBACK)(struct Person* list, char* email, int cmock_num_calls);
void find_by_email_AddCallback(CMOCK_find_by_email_CALLBACK Callback);
void find_by_email_Stub(CMOCK_find_by_email_CALLBACK Callback);
#define find_by_email_StubWithCallback find_by_email_Stub
#define find_by_phone_IgnoreAndReturn(cmock_retval) find_by_phone_CMockIgnoreAndReturn(__LINE__, cmock_retval)
void find_by_phone_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, struct Person* cmock_to_return);
#define find_by_phone_StopIgnore() find_by_phone_CMockStopIgnore()
void find_by_phone_CMockStopIgnore(void);
#define find_by_phone_ExpectAndReturn(list, phone, cmock_retval) find_by_phone_CMockExpectAndReturn(__LINE__, list, phone, cmock_retval)
void find_by_phone_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, struct Person* list, char* phone, struct Person* cmock_to_return);
typedef struct Person* (* CMOCK_find_by_phone_CALLBACK)(struct Person* list, char* phone, int cmock_num_calls);
void find_by_phone_AddCallback(CMOCK_find_by_phone_CALLBACK Callback);
void find_by_phone_Stub(CMOCK_find_by_phone_CALLBACK Callback);
#define find_by_phone_StubWithCallback find_by_phone_Stub

#if defined(__GNUC__) && !defined(__ICC) && !defined(__TMS470__)
#if __GNUC__ > 4 || (__GNUC__ == 4 && (__GNUC_MINOR__ > 6 || (__GNUC_MINOR__ == 6 && __GNUC_PATCHLEVEL__ > 0)))
#pragma GCC diagnostic pop
#endif
#endif

#endif