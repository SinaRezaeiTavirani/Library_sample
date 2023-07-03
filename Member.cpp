#include "Member.h"

Member::Member(const std::string& name, const std::string& id) : name(name), id(id)
{
}

std::string Member::getName() const
{
    return name;
}

std::string Member::getId() const
{
    return id;
}
