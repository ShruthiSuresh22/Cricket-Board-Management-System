#include "fun.h"
#include "unity.h"

int test_add_new_player();
int test_addrun();


void setUp(){}
void tearDown(){}

int main()
{
  UNITY_BEGIN();

  RUN_TEST(test_add_new_player());
  RUN_TEST(test_addrun());
  

  return UNITY_END();
}

int test_add_new_player( ) 
{
  TEST_ASSERT_EQUAL(1, add_new_player());
}

int test_add_run() 
{
  TEST_ASSERT_EQUAL(1, add_run());
}



