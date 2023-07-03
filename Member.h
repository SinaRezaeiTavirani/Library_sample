#pragma once
#ifndef MEMBER_H
#define MEMBER_H

#include <string>

class Member {
private:
    std::string name;
    std::string id;

public:
    Member(const std::string& name, const std::string& id);
    std::string getName() const;
    std::string getId() const;
};

#endif // MEMBER_H