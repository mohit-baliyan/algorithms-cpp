# include <gtest/gtest.h>

# include "stack.h"

# include "stack.cpp"

using namespace std;

TEST( MyTestSuitName, MyTestCaseName ) {

    Stack obj( 3 );

    EXPECT_EQ( -1, obj.pop() ) << "Pop operation on empty stack should return -1";

    EXPECT_EQ( true, obj.push( 10 ) ) <<"Push operation should succeed on spacious stack";

    EXPECT_EQ( true, obj.push( 20 ) ) <<"Push operation should succeed on spacious stack";

    EXPECT_EQ( true, obj.push( 30 ) ) <<"Push operation should succeed on spacious stack";

    EXPECT_EQ( false, obj.push( 40 ) ) <<"Push operation should fail on overflow stack";

    EXPECT_NE( -1, obj.peek() ) <<"Peek operation should return top of stack";

    EXPECT_NE( -1, obj.pop() ) <<"Pop should not fail on non-empty stack";

    EXPECT_EQ( true, obj.push( 40 ) ) <<"Push operation should succeed on spacious stack";

    obj.display();

}
