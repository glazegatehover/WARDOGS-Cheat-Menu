#include "nonsense.hpp"

#include <array>
#include <iostream>
#include <random>

void print_nonsense() {
    constexpr std::array subjects{"A sock", "The ceiling", "An unpaid pigeon"};
    constexpr std::array actions{" borrowed ", " sneezed on ", " voted against "};
    constexpr std::array objects{"next Tuesday", "a pocket of soup", "the number seven"};

    std::mt19937 random{std::random_device{}()};
    auto pick = [&](const auto& words) {
        std::uniform_int_distribution<std::size_t> index(0, words.size() - 1);
        return words[index(random)];
    };

    std::cout << pick(subjects) << pick(actions) << pick(objects) << ".\n";
}
