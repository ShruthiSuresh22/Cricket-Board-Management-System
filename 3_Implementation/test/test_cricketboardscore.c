/**
 * @file test_cricketboardscore.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-07-13
 * 
 * @copyright Copyright (c) 2021
 * 
 */
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



