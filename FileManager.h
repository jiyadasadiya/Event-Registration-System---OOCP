#ifndef FILEMANAGER_H
#define FILEMANAGER_H
#include "Event.h"
#include "Participant.h"
#include "Organizer.h"
#include "Registration.h"
#include <vector>
#include <string>
class FileManager {
 std::string folder;
public:
 explicit FileManager(std::string folder="../Data");
 bool loadEvents(std::vector<Event>&)const; bool saveEvents(const std::vector<Event>&)const;
 bool loadParticipants(std::vector<Participant>&)const; bool saveParticipants(const std::vector<Participant>&)const;
 bool loadOrganizers(std::vector<Organizer>&)const; bool saveOrganizers(const std::vector<Organizer>&)const;
 bool loadRegistrations(std::vector<Registration>&)const; bool saveRegistrations(const std::vector<Registration>&)const;
};
#endif
