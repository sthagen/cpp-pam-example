#pragma once
#include <string_view>

class request {
    // Just some random thoughts - do not use.
    public:
        request(): claim(nullptr), token(nullptr) {};
        ~trigger() {};
	      enter(std::string_view request){
            // does not yet compile - which is good.
        };
    private:
        std::string_view claim;
        std::string_view token;
};
