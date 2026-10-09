#ifndef PARTICIPANT_H
#define PARTICIPANT_H
#include <string>
class Participant {
 int id; std::string name,email;
public:
 Participant(int id=0,std::string name="",std::string email="");
 int getId()const; std::string getName()const; std::string getEmail()const;
 std::string toFileLine()const; static bool fromFileLine(const std::string&,Participant&);
};
#endif
