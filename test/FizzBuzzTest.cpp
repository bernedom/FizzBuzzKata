#include <catch2/catch_test_macros.hpp>

#include <FizzBuzz.h>
#include <stdexcept>

/// Some example test cases to illustrate how to use catch2 /
void exception_thrower() { throw std::runtime_error("Exception thrown"); }
int noexcept_function() noexcept { return 99; }

TEST_CASE("Example Test Case") {
  REQUIRE(1 == 1);
  REQUIRE_FALSE(true == false);
  REQUIRE_THROWS(exception_thrower());
  REQUIRE_NOTHROW(noexcept_function());
}

TEST_CASE("Example 2 (this test fails)") { REQUIRE(1 == 2); }

/// End of examples, your turn now!