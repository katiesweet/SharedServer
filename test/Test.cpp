/*This file is where all unit testing will be going. All you need to do
 *is include the appropriate header files and then perform your test.
 */

#define BOOST_TEST_MODULE const string test;

// Boost Includes
#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_CASE(cardInitialization)
{
  BOOST_CHECK_EQUAL(0, 0);
  BOOST_CHECK_EQUAL(20, 20);
}

BOOST_AUTO_TEST_CASE(otherTest)
{
  BOOST_CHECK_EQUAL(10, 10);
  BOOST_CHECK_EQUAL(5, 5);
}

//EOF