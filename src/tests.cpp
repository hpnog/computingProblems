#define CATCH_CONFIG_MAIN

#include "include/catch.hpp"

#include "leetCodeSolutions/addTwoNumbers.h"
#include "leetCodeSolutions/inverseInteger.h"

TEST_CASE( "Add Two Numbers Problem", "[single-file]" ) {
    SolutionAddTwoNumbers solutionAddTwoNumbers;

    ListNode * arg1 = solutionAddTwoNumbers.testAddTwoNumbersArg_1;
    ListNode * arg2 = solutionAddTwoNumbers.testAddTwoNumbersArg_2;
    
    ListNode * sol = solutionAddTwoNumbers.test_1_solution;
    ListNode * wrongSol = solutionAddTwoNumbers.test_1_solution;

    ListNode *  result_1 = solutionAddTwoNumbers.addTwoNumbers(arg1, arg2);

    // Right solution
    REQUIRE( sol->compare(result_1) );

    // Change solution making it wrong and comparing again
    wrongSol->val--;
    REQUIRE( !sol->compare(result_1) );
}

TEST_CASE( "Inverse Integer Problem", "[single-file]" ) {
    SolutionInverseInteger solutionInverseInteger;

    REQUIRE( solutionInverseInteger.reverse(123) == 321 );
    REQUIRE( solutionInverseInteger.reverse(-123) == -321 );
    REQUIRE( solutionInverseInteger.reverse(120) == 21 );
    REQUIRE( solutionInverseInteger.reverse(85264379) == 97346258 );
}