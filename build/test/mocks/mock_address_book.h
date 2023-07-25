/* AUTOGENERATED FILE. DO NOT EDIT. */
#ifndef _MOCK_ADDRESS_BOOK_H
#define _MOCK_ADDRESS_BOOK_H

#include "unity.h"
#include "address_book.h"

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

void mock_address_book_Init(void);
void mock_address_book_Destroy(void);
void mock_address_book_Verify(void);




#define init_book_IgnoreAndReturn(cmock_retval) init_book_CMockIgnoreAndReturn(__LINE__, cmock_retval)
void init_book_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, int cmock_to_return);
#define init_book_StopIgnore() init_book_CMockStopIgnore()
void init_book_CMockStopIgnore(void);
#define init_book_ExpectAndReturn(cmock_retval) init_book_CMockExpectAndReturn(__LINE__, cmock_retval)
void init_book_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, int cmock_to_return);
typedef int (* CMOCK_init_book_CALLBACK)(int cmock_num_calls);
void init_book_AddCallback(CMOCK_init_book_CALLBACK Callback);
void init_book_Stub(CMOCK_init_book_CALLBACK Callback);
#define init_book_StubWithCallback init_book_Stub
#define show_menu_Ignore() show_menu_CMockIgnore()
void show_menu_CMockIgnore(void);
#define show_menu_StopIgnore() show_menu_CMockStopIgnore()
void show_menu_CMockStopIgnore(void);
#define show_menu_Expect() show_menu_CMockExpect(__LINE__)
void show_menu_CMockExpect(UNITY_LINE_TYPE cmock_line);
typedef void (* CMOCK_show_menu_CALLBACK)(int cmock_num_calls);
void show_menu_AddCallback(CMOCK_show_menu_CALLBACK Callback);
void show_menu_Stub(CMOCK_show_menu_CALLBACK Callback);
#define show_menu_StubWithCallback show_menu_Stub
#define is_program_opened_IgnoreAndReturn(cmock_retval) is_program_opened_CMockIgnoreAndReturn(__LINE__, cmock_retval)
void is_program_opened_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, unsigned cmock_to_return);
#define is_program_opened_StopIgnore() is_program_opened_CMockStopIgnore()
void is_program_opened_CMockStopIgnore(void);
#define is_program_opened_ExpectAndReturn(cmock_retval) is_program_opened_CMockExpectAndReturn(__LINE__, cmock_retval)
void is_program_opened_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, unsigned cmock_to_return);
typedef unsigned (* CMOCK_is_program_opened_CALLBACK)(int cmock_num_calls);
void is_program_opened_AddCallback(CMOCK_is_program_opened_CALLBACK Callback);
void is_program_opened_Stub(CMOCK_is_program_opened_CALLBACK Callback);
#define is_program_opened_StubWithCallback is_program_opened_Stub
#define get_menu_input_IgnoreAndReturn(cmock_retval) get_menu_input_CMockIgnoreAndReturn(__LINE__, cmock_retval)
void get_menu_input_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, unsigned cmock_to_return);
#define get_menu_input_StopIgnore() get_menu_input_CMockStopIgnore()
void get_menu_input_CMockStopIgnore(void);
#define get_menu_input_ExpectAndReturn(cmock_retval) get_menu_input_CMockExpectAndReturn(__LINE__, cmock_retval)
void get_menu_input_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, unsigned cmock_to_return);
typedef unsigned (* CMOCK_get_menu_input_CALLBACK)(int cmock_num_calls);
void get_menu_input_AddCallback(CMOCK_get_menu_input_CALLBACK Callback);
void get_menu_input_Stub(CMOCK_get_menu_input_CALLBACK Callback);
#define get_menu_input_StubWithCallback get_menu_input_Stub
#define choose_option_Ignore() choose_option_CMockIgnore()
void choose_option_CMockIgnore(void);
#define choose_option_StopIgnore() choose_option_CMockStopIgnore()
void choose_option_CMockStopIgnore(void);
#define choose_option_Expect(option) choose_option_CMockExpect(__LINE__, option)
void choose_option_CMockExpect(UNITY_LINE_TYPE cmock_line, unsigned option);
typedef void (* CMOCK_choose_option_CALLBACK)(unsigned option, int cmock_num_calls);
void choose_option_AddCallback(CMOCK_choose_option_CALLBACK Callback);
void choose_option_Stub(CMOCK_choose_option_CALLBACK Callback);
#define choose_option_StubWithCallback choose_option_Stub
#define show_all_addresses_Ignore() show_all_addresses_CMockIgnore()
void show_all_addresses_CMockIgnore(void);
#define show_all_addresses_StopIgnore() show_all_addresses_CMockStopIgnore()
void show_all_addresses_CMockStopIgnore(void);
#define show_all_addresses_Expect() show_all_addresses_CMockExpect(__LINE__)
void show_all_addresses_CMockExpect(UNITY_LINE_TYPE cmock_line);
typedef void (* CMOCK_show_all_addresses_CALLBACK)(int cmock_num_calls);
void show_all_addresses_AddCallback(CMOCK_show_all_addresses_CALLBACK Callback);
void show_all_addresses_Stub(CMOCK_show_all_addresses_CALLBACK Callback);
#define show_all_addresses_StubWithCallback show_all_addresses_Stub
#define find_address_by_name_Ignore() find_address_by_name_CMockIgnore()
void find_address_by_name_CMockIgnore(void);
#define find_address_by_name_StopIgnore() find_address_by_name_CMockStopIgnore()
void find_address_by_name_CMockStopIgnore(void);
#define find_address_by_name_Expect() find_address_by_name_CMockExpect(__LINE__)
void find_address_by_name_CMockExpect(UNITY_LINE_TYPE cmock_line);
typedef void (* CMOCK_find_address_by_name_CALLBACK)(int cmock_num_calls);
void find_address_by_name_AddCallback(CMOCK_find_address_by_name_CALLBACK Callback);
void find_address_by_name_Stub(CMOCK_find_address_by_name_CALLBACK Callback);
#define find_address_by_name_StubWithCallback find_address_by_name_Stub
#define find_address_by_surname_Ignore() find_address_by_surname_CMockIgnore()
void find_address_by_surname_CMockIgnore(void);
#define find_address_by_surname_StopIgnore() find_address_by_surname_CMockStopIgnore()
void find_address_by_surname_CMockStopIgnore(void);
#define find_address_by_surname_Expect() find_address_by_surname_CMockExpect(__LINE__)
void find_address_by_surname_CMockExpect(UNITY_LINE_TYPE cmock_line);
typedef void (* CMOCK_find_address_by_surname_CALLBACK)(int cmock_num_calls);
void find_address_by_surname_AddCallback(CMOCK_find_address_by_surname_CALLBACK Callback);
void find_address_by_surname_Stub(CMOCK_find_address_by_surname_CALLBACK Callback);
#define find_address_by_surname_StubWithCallback find_address_by_surname_Stub
#define find_address_by_email_Ignore() find_address_by_email_CMockIgnore()
void find_address_by_email_CMockIgnore(void);
#define find_address_by_email_StopIgnore() find_address_by_email_CMockStopIgnore()
void find_address_by_email_CMockStopIgnore(void);
#define find_address_by_email_Expect() find_address_by_email_CMockExpect(__LINE__)
void find_address_by_email_CMockExpect(UNITY_LINE_TYPE cmock_line);
typedef void (* CMOCK_find_address_by_email_CALLBACK)(int cmock_num_calls);
void find_address_by_email_AddCallback(CMOCK_find_address_by_email_CALLBACK Callback);
void find_address_by_email_Stub(CMOCK_find_address_by_email_CALLBACK Callback);
#define find_address_by_email_StubWithCallback find_address_by_email_Stub
#define find_address_by_phone_Ignore() find_address_by_phone_CMockIgnore()
void find_address_by_phone_CMockIgnore(void);
#define find_address_by_phone_StopIgnore() find_address_by_phone_CMockStopIgnore()
void find_address_by_phone_CMockStopIgnore(void);
#define find_address_by_phone_Expect() find_address_by_phone_CMockExpect(__LINE__)
void find_address_by_phone_CMockExpect(UNITY_LINE_TYPE cmock_line);
typedef void (* CMOCK_find_address_by_phone_CALLBACK)(int cmock_num_calls);
void find_address_by_phone_AddCallback(CMOCK_find_address_by_phone_CALLBACK Callback);
void find_address_by_phone_Stub(CMOCK_find_address_by_phone_CALLBACK Callback);
#define find_address_by_phone_StubWithCallback find_address_by_phone_Stub
#define add_address_IgnoreAndReturn(cmock_retval) add_address_CMockIgnoreAndReturn(__LINE__, cmock_retval)
void add_address_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, int cmock_to_return);
#define add_address_StopIgnore() add_address_CMockStopIgnore()
void add_address_CMockStopIgnore(void);
#define add_address_ExpectAndReturn(cmock_retval) add_address_CMockExpectAndReturn(__LINE__, cmock_retval)
void add_address_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, int cmock_to_return);
typedef int (* CMOCK_add_address_CALLBACK)(int cmock_num_calls);
void add_address_AddCallback(CMOCK_add_address_CALLBACK Callback);
void add_address_Stub(CMOCK_add_address_CALLBACK Callback);
#define add_address_StubWithCallback add_address_Stub
#define enter_address_IgnoreAndReturn(cmock_retval) enter_address_CMockIgnoreAndReturn(__LINE__, cmock_retval)
void enter_address_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, struct Person* cmock_to_return);
#define enter_address_StopIgnore() enter_address_CMockStopIgnore()
void enter_address_CMockStopIgnore(void);
#define enter_address_ExpectAndReturn(cmock_retval) enter_address_CMockExpectAndReturn(__LINE__, cmock_retval)
void enter_address_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, struct Person* cmock_to_return);
typedef struct Person* (* CMOCK_enter_address_CALLBACK)(int cmock_num_calls);
void enter_address_AddCallback(CMOCK_enter_address_CALLBACK Callback);
void enter_address_Stub(CMOCK_enter_address_CALLBACK Callback);
#define enter_address_StubWithCallback enter_address_Stub
#define delete_address_IgnoreAndReturn(cmock_retval) delete_address_CMockIgnoreAndReturn(__LINE__, cmock_retval)
void delete_address_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, int cmock_to_return);
#define delete_address_StopIgnore() delete_address_CMockStopIgnore()
void delete_address_CMockStopIgnore(void);
#define delete_address_ExpectAndReturn(cmock_retval) delete_address_CMockExpectAndReturn(__LINE__, cmock_retval)
void delete_address_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, int cmock_to_return);
typedef int (* CMOCK_delete_address_CALLBACK)(int cmock_num_calls);
void delete_address_AddCallback(CMOCK_delete_address_CALLBACK Callback);
void delete_address_Stub(CMOCK_delete_address_CALLBACK Callback);
#define delete_address_StubWithCallback delete_address_Stub
#define delete_all_addresses_Ignore() delete_all_addresses_CMockIgnore()
void delete_all_addresses_CMockIgnore(void);
#define delete_all_addresses_StopIgnore() delete_all_addresses_CMockStopIgnore()
void delete_all_addresses_CMockStopIgnore(void);
#define delete_all_addresses_Expect() delete_all_addresses_CMockExpect(__LINE__)
void delete_all_addresses_CMockExpect(UNITY_LINE_TYPE cmock_line);
typedef void (* CMOCK_delete_all_addresses_CALLBACK)(int cmock_num_calls);
void delete_all_addresses_AddCallback(CMOCK_delete_all_addresses_CALLBACK Callback);
void delete_all_addresses_Stub(CMOCK_delete_all_addresses_CALLBACK Callback);
#define delete_all_addresses_StubWithCallback delete_all_addresses_Stub
#define program_should_close_Ignore() program_should_close_CMockIgnore()
void program_should_close_CMockIgnore(void);
#define program_should_close_StopIgnore() program_should_close_CMockStopIgnore()
void program_should_close_CMockStopIgnore(void);
#define program_should_close_Expect() program_should_close_CMockExpect(__LINE__)
void program_should_close_CMockExpect(UNITY_LINE_TYPE cmock_line);
typedef void (* CMOCK_program_should_close_CALLBACK)(int cmock_num_calls);
void program_should_close_AddCallback(CMOCK_program_should_close_CALLBACK Callback);
void program_should_close_Stub(CMOCK_program_should_close_CALLBACK Callback);
#define program_should_close_StubWithCallback program_should_close_Stub
#define exit_program_Ignore() exit_program_CMockIgnore()
void exit_program_CMockIgnore(void);
#define exit_program_StopIgnore() exit_program_CMockStopIgnore()
void exit_program_CMockStopIgnore(void);
#define exit_program_Expect() exit_program_CMockExpect(__LINE__)
void exit_program_CMockExpect(UNITY_LINE_TYPE cmock_line);
typedef void (* CMOCK_exit_program_CALLBACK)(int cmock_num_calls);
void exit_program_AddCallback(CMOCK_exit_program_CALLBACK Callback);
void exit_program_Stub(CMOCK_exit_program_CALLBACK Callback);
#define exit_program_StubWithCallback exit_program_Stub

#if defined(__GNUC__) && !defined(__ICC) && !defined(__TMS470__)
#if __GNUC__ > 4 || (__GNUC__ == 4 && (__GNUC_MINOR__ > 6 || (__GNUC_MINOR__ == 6 && __GNUC_PATCHLEVEL__ > 0)))
#pragma GCC diagnostic pop
#endif
#endif

#endif