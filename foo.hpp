#pragma once

#include "Human.hpp"

#include <algorithm>
#include <list>
#include <vector>

std::vector< char > foo(std::list< Human >& people)
{
    std::vector< char > ret_v(people.size());
    // Twoja implementacja tutaj
    std::for_each(begin(people), end(people), [](Human& man) { man.birthday(); });
    std::transform(begin(people), end(people), rbegin(ret_v), [](Human& man) { return man.isMonster() ? 'n' : 'y';});
    return ret_v;
}
