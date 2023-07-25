/* AUTOGENERATED FILE. DO NOT EDIT. */

/*=======Automagically Detected Files To Include=====*/
#include "unity.h"

int GlobalExpectCount;
int GlobalVerifyOrder;
char* GlobalOrderError;

/*=======External Functions This Runner Calls=====*/
extern void setUp(void);
extern void tearDown(void);
extern void test_create_node();
extern void test_load_node();
extern void test_load_list();
extern void test_add_to_list();
extern void test_add_to_list_at();
extern void test_delete_at();
extern void test_delete_list();
extern void test_find_at();
extern void test_find_by_name();
extern void test_find_by_surname();
extern void test_find_by_email();
extern void test_find_by_phone();


/*=======Mock Management=====*/
static void CMock_Init(void)
{
  GlobalExpectCount = 0;
  GlobalVerifyOrder = 0;
  GlobalOrderError = NULL;
}
static void CMock_Verify(void)
{
}
static void CMock_Destroy(void)
{
}

/*=======Test Reset Options=====*/
void resetTest(void);
void resetTest(void)
{
  tearDown();
  CMock_Verify();
  CMock_Destroy();
  CMock_Init();
  setUp();
}
void verifyTest(void);
void verifyTest(void)
{
  CMock_Verify();
}

/*=======Test Runner Used To Run Each Test=====*/
static void run_test(UnityTestFunction func, const char* name, UNITY_LINE_TYPE line_num)
{
    Unity.CurrentTestName = name;
    Unity.CurrentTestLineNumber = line_num;
#ifdef UNITY_USE_COMMAND_LINE_ARGS
    if (!UnityTestMatches())
        return;
#endif
    Unity.NumberOfTests++;
    UNITY_CLR_DETAILS();
    UNITY_EXEC_TIME_START();
    CMock_Init();
    if (TEST_PROTECT())
    {
        setUp();
        func();
    }
    if (TEST_PROTECT())
    {
        tearDown();
        CMock_Verify();
    }
    CMock_Destroy();
    UNITY_EXEC_TIME_STOP();
    UnityConcludeTest();
}

/*=======MAIN=====*/
int main(void)
{
  UnityBegin("test_list.c");
  run_test(test_create_node, "test_create_node", 10);
  run_test(test_load_node, "test_load_node", 25);
  run_test(test_load_list, "test_load_list", 37);
  run_test(test_add_to_list, "test_add_to_list", 47);
  run_test(test_add_to_list_at, "test_add_to_list_at", 63);
  run_test(test_delete_at, "test_delete_at", 79);
  run_test(test_delete_list, "test_delete_list", 105);
  run_test(test_find_at, "test_find_at", 128);
  run_test(test_find_by_name, "test_find_by_name", 149);
  run_test(test_find_by_surname, "test_find_by_surname", 172);
  run_test(test_find_by_email, "test_find_by_email", 195);
  run_test(test_find_by_phone, "test_find_by_phone", 218);

  return UnityEnd();
}