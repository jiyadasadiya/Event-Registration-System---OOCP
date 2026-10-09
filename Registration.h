#ifndef REGISTRATION_H
#define REGISTRATION_H
#include <string>
class Registration {
 int id,participantId,eventId; std::string timestamp;
public:
 Registration(int id=0,int participantId=0,int eventId=0,std::string timestamp="");
 int getId()const; int getParticipantId()const; int getEventId()const; std::string getTimestamp()const;
 std::string toFileLine()const; static bool fromFileLine(const std::string&,Registration&);
};
#endif
