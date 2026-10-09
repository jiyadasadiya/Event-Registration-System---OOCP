#ifndef ORGANIZER_H
#define ORGANIZER_H
#include <string>
class Organizer {
 int id; std::string name,department;
public:
 Organizer(int id=0,std::string name="",std::string department="");
 int getId()const; std::string getName()const; std::string getDepartment()const;
 std::string toFileLine()const; static bool fromFileLine(const std::string&,Organizer&);
};
#endif
