#include "test_framework.h"
#include "CoreLib.h"
#include <ErrorCodes.h>

int main(int argc, const char** argv) {
    LT_ADD_TEST(TestArrayOutRange, ERROR_INDEX_OUT_OF_BOUNDS);
    LT_ADD_TEST(TestArray, TEST_SUCCESS);
    LT_ADD_TEST(TestStack, TEST_SUCCESS);

    LT_TestRun();

    return 0;
}
