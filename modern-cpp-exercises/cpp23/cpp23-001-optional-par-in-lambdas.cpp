//
// Created by Sebastian on 22/11/2023.
//

/*
 * Optional parentheses in lambdas:
 *
 * https://www.open-std.org/jtc1/sc22/wg21/docs/papers/2020/p1102r2.html
 *
 * Link found on https://developer.apple.com/xcode/cpp/#c++23
 */

#include <iostream>
#include "cpp23-001-optional-par-in-lambdas.h"

// nested namespaces can be concatenated, nice!!!
namespace cpp23::ex001 {
void doit() {
    {
        std::string s1 = "abc";
        auto withParen = [s1 = std::move(s1)]() {
            std::cout << s1 << '\n';
        };
        withParen();

        std::string s2 = "abc";
        auto noSean = [s2 = std::move(s2)] { // Note no syntax error.
            std::cout << s2 << '\n';
        };
        noSean();
    }
    {
        std::string s1 = "xyz";
        auto withParen = [s1 = std::move(s1)]() mutable {
            s1 += "d";
            std::cout << s1 << '\n';
        };
        withParen();

        std::string s2 = "xyz";
        auto noSean = [s2 = std::move(s2)] mutable { // A syntax error before C++23.
            s2 += "d";
            std::cout << s2 << '\n';
        };
        noSean();
    }
}
}
