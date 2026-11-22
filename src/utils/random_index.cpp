#include "utils/random_index.hpp"
#include <random>

std::size_t random_index(std::size_t count) {
    static thread_local std::mt19937 engine{std::random_device{}()};
    return std::uniform_int_distribution<std::size_t>(0, count - 1)(engine);
}
