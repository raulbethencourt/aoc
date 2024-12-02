#include "day1.h"
#include "test-framework/unity.h"

void setUp(void) {}

void tearDown(void) {}

static void test_day1(void) { TEST_ASSERT_EQUAL_INT(11, day1()); }

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_day1);
    return UNITY_END();
}
