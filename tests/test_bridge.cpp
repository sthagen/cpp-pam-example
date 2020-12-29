#include "catch.hpp"
#include "../pam/bridge.hpp"

TEST_CASE("The bridge accepts requests.", "[positive]") {
    auto request = bridge::enter("claim|'token'");
    CHECK(request.claim == "claim");
    REQUIRE(request.token == "'token'");
}
