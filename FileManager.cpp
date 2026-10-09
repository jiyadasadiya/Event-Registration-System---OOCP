#include "FileManager.h"
#include <fstream>
FileManager::FileManager(std::string f):folder(f){}
template<class T,class Parser> bool loadRows(const std::string& path,std::vector<T>& out,Parser parse){std::ifstream in(path);if(!in)return false;out.clear();std::string line;while(std::getline(in,line)){if(line.empty())continue;T item;if(parse(line,item))out.push_back(item);}return true;}
template<class T> bool saveRows(const std::string& path,const std::vector<T>& rows){std::ofstream out(path);if(!out)return false;for(const auto& x:rows)out<<x.toFileLine()<<'\n';return static_cast<bool>(out);}
bool FileManager::loadEvents(std::vector<Event>& v)const{return loadRows(folder+"/events.txt",v,Event::fromFileLine);}
bool FileManager::saveEvents(const std::vector<Event>& v)const{return saveRows(folder+"/events.txt",v);}
bool FileManager::loadParticipants(std::vector<Participant>& v)const{return loadRows(folder+"/participants.txt",v,Participant::fromFileLine);}
bool FileManager::saveParticipants(const std::vector<Participant>& v)const{return saveRows(folder+"/participants.txt",v);}
bool FileManager::loadOrganizers(std::vector<Organizer>& v)const{return loadRows(folder+"/organizers.txt",v,Organizer::fromFileLine);}
bool FileManager::saveOrganizers(const std::vector<Organizer>& v)const{return saveRows(folder+"/organizers.txt",v);}
bool FileManager::loadRegistrations(std::vector<Registration>& v)const{return loadRows(folder+"/registrations.txt",v,Registration::fromFileLine);}
bool FileManager::saveRegistrations(const std::vector<Registration>& v)const{return saveRows(folder+"/registrations.txt",v);}
