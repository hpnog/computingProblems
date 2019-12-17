#define CATCH_CONFIG_MAIN

#include "include/catch.hpp"

#include "leetCodeSolutions/addTwoNumbers.h"

TEST_CASE( "Add Two Numbers Problem", "[single-file]" ) {
    SolutionAddTwoNumbers solutionAddTwoNumbers;

    ListNode * arg1 = solutionAddTwoNumbers.testAddTwoNumbersArg_1;
    ListNode * arg2 = solutionAddTwoNumbers.testAddTwoNumbersArg_2;
    ListNode * sol = solutionAddTwoNumbers.test_1_solution;
    ListNode *  result_1 = solutionAddTwoNumbers.addTwoNumbers(arg1, arg2);

    REQUIRE( sol->compare(result_1) );
}