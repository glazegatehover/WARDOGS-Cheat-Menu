#include "core/sentence.hpp"
#include "modules/words.hpp"
#include "utils/random_index.hpp"

std::string make_sentence() {
    return std::string(subjects[random_index(subjects.size())]) + " "
        + actions[random_index(actions.size())] + " "
        + objects[random_index(objects.size())] + ".";
}
