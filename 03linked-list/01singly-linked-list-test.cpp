# include <gtest/gtest.h>

# include "01singly-linked-list.h"

# include "01singly-linked-list.cpp"

using namespace std;

TEST( MyTestSuitName, MyTestCaseName ) {

    LinkedList obj;

    obj.addFirst( 10 );

    obj.addFirst( 20 );

    obj.addFirst( 30 );

    obj.addLast( 40);

    obj.addLast( 50);

    Node * node;


    ASSERT_NE( nullptr,node = obj.deleteFirst() ) << "deleteFirst() operation should return non NULL value";
    EXPECT_EQ(  20, node->data ) <<"deleteFirst() operation should return data of head node";
    ASSERT_NE( nullptr,node = obj.deleteLast() ) << "deleteLast() operation should return non NULL value";
    EXPECT_EQ(  20, node->data ) <<"deleteLast() operation should return data of head node";


    ASSERT_NE( nullptr,node = obj.deleteFirst() ) << "deleteFirst() operation should return non NULL value";
    EXPECT_EQ(  10, node->data ) <<"deleteFirst() operation should return data of head node";
    ASSERT_NE( nullptr,node = obj.deleteLast() ) << "deleteLast() operation should return non NULL value";
    EXPECT_EQ(  10, node->data ) <<"deleteLast() operation should return data of head node";


    ASSERT_EQ( nullptr,node = obj.deleteLast() ) << "deleteLast() operation should return non NULL value";


    obj.display();

}

