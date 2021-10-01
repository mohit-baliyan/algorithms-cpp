# include <gtest/gtest.h>

# include "01queue.h"

# include "01queue.cpp"

using namespace std;

TEST( MyTestSuitName, MyTestCaseName ) {

    Queue obj( 3 );

    EXPECT_EQ( -1, obj.dequeue() ) <<"Dequeue operation on empty queue should return -1";

    EXPECT_EQ( true, obj.enqueue( 10 ) ) <<"Enqueue operation should succeed on spacious queue";

    EXPECT_EQ( true, obj.enqueue( 20 ) ) <<"Enqueue operation should succeed on spacious queue";

    EXPECT_EQ( true, obj.enqueue( 30 ) ) <<"Enqueue operation should succeed on spacious queue";

    EXPECT_EQ( false, obj.enqueue( 40 ) ) <<"Enqueue operation should fail on fulled queue";

    EXPECT_NE( -1, obj.dequeue() ) <<"Dequeue operation to make space for insertion";

    EXPECT_EQ( false, obj.enqueue( 40 ) ) <<"Enqueue operation should fail due to non empty linear queue";

    EXPECT_NE( -1, obj.dequeue() ) <<"Dequeue operation to make queue empty for insertion";

    EXPECT_NE( -1, obj.dequeue() ) <<"Dequeue operation to make queue empty for insertion";

    EXPECT_EQ( true, obj.enqueue( 40 ) ) <<"Enqueue operation should succeed on spacious queue";

    obj.display();

}