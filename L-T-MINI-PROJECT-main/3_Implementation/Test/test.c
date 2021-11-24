#include "../unity/unity.h"
#include "../unity/unity_internals.h"
#include"../inc/fun.h"


void setUp()
{
}
/* Required by the unity test framework */
void tearDown()
{
}




void test_customer_details(void){
TEST_ASSERT_EQUAL(1,customer_details("1","lalitha","guntur","9949565496","4"));
TEST_ASSERT_EQUAL(2,customer_details("lalitha"));


}
void test_room_alloc(void){
TEST_ASSERT_EQUAL(1,room_alloc("lalitha",1,"12:10:2021 11:23","delux","non_veg"));
}

void test_room_dealloc(void){
TEST_ASSERT_EQUAL(1,room_dealloc("lalitha"));
}

void test_billing(void){
TEST_ASSERT_EQUAL(1,billing("lalitha"));
}



int main(void){
/*Initiate the unity Test Framework */
UNITY_BEGIN();


   RUN_TEST(test_customer_details);
   RUN_TEST(test_room_alloc);
    RUN_TEST(test_room_dealloc);
    RUN_TEST(test_billing);


    /* Close the Unity Test Framework */
    return UNITY_END();
}
