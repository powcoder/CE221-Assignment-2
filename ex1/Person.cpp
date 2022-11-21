https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
#include <string>
#include "Person.h"

using namespace std;

Person::Person(const string &name)
{   this->name = name;
}

string Person::getName() const
{   return name;
}

void Person::changeName(const string &newName)
{   name = newName;
}
