#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"


TEST_CASE("Print Range"){
    
    
    CHECK(printRange(-2,10) == "-2 -1 0 1 2 3 4 5 6 7 8 9 10");
    CHECK(printRange(35,40) == "35 36 37 38 39 40");
    CHECK(printRange(20,3) == "");

}

TEST_CASE("Sum Range"){
    
    CHECK((sumRange(-2,10)) == 52);
    CHECK((sumRange(0,0 )) == 0);
    CHECK((sumRange(1,3)) == 6);
    CHECK((sumRange(25,344)) == 59040);


}

TEST_CASE ("Array Sum"){

    int arr[] = {1,2,3,4,5};
    CHECK(sumArray(arr, 5) == 15);

    int arr2[] = {10,20, 35, 50, 60, 90, 100};
    CHECK(sumArray(arr2, 7) == 365);

}

TEST_CASE("Alphanumeric"){

    CHECK(isAlphanumeric("Hi#") == 0);
    CHECK(isAlphanumeric("Hi") == 1);
    CHECK(isAlphanumeric("1Hi") == true);


}

TEST_CASE("Nested Parentheses"){

    CHECK (nestedParens("()") == true);
    CHECK (nestedParens(")") == false);
    CHECK (nestedParens("()))") == false)   ;
    CHECK (nestedParens("((()))") == true);
    CHECK (nestedParens("()()()()") == false);


}

