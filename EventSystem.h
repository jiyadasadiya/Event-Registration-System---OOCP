#ifndef EVENTSYSTEM_H
#define EVENTSYSTEM_H
#include "Event.h"
#include "Participant.h"
#include "Organizer.h"
#include "Registration.h"
#include "FileManager.h"
#include <vector>
class EventSystem {
 std::vector<Event> events; std::vector<Participant> participants; std::vector<Organizer> organizers; std::vector<Registration> registrations;
 FileManager files; int nextEventId,nextParticipantId,nextOrganizerId,nextRegistrationId;
 void persist(); bool emailValid(const std::string&)const;
public:
 explicit EventSystem(std::string dataFolder="../Data");
 void run(); void listEvents()const; void listParticipants()const; void listOrganizers()const; void listRegistrations()const;
 void addEvent(); void addParticipant(); void addOrganizer(); void registerParticipant(); void cancelRegistration();
};
#endif
