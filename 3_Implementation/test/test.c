#include "unity_internals.h"
#include "unity.h"
#include "bank.h"
void setUp(){}
void tearDown(){}
/*Test for login password*/
void testforpasswd(void)
{
	TEST_ASSERT_EQUAL(0,check("archana1","archana1"));
	
}
customer obj[1]={123456789,"archana",1000};
/*Test for Account Search*/
void recordfound(void)
{
TEST_ASSERT_EQUAL(0,search(obj,1,123456789));
}	
/*Test if is not found*/
void recordnotfound(void)
{
TEST_ASSERT_EQUAL(-1,search(obj,1,12345));
}	
int main()
{
	UNITY_BEGIN();
	RUN_TEST(testforpasswd);
	RUN_TEST(recordfound);
	RUN_TEST(recordnotfound);
	
	return UNITY_END();
}

