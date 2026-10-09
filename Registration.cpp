#include "Registration.h"
#include <sstream>
Registration::Registration(int i,int p,int e,std::string t):id(i),participantId(p),eventId(e),timestamp(t){}
int Registration::getId()const{return id;} int Registration::getParticipantId()const{return participantId;} int Registration::getEventId()const{return eventId;} std::string Registration::getTimestamp()const{return timestamp;}
std::string Registration::toFileLine()const{return std::to_string(id)+"|"+std::to_string(participantId)+"|"+std::to_string(eventId)+"|"+timestamp;}
bool Registration::fromFileLine(const std::string& l,Registration& o){std::stringstream s(l);std::string a,b,c,d;if(!std::getline(s,a,'|')||!std::getline(s,b,'|')||!std::getline(s,c,'|')||!std::getline(s,d,'|'))return false;try{o=Registration(std::stoi(a),std::stoi(b),std::stoi(c),d);return true;}catch(...){return false;}}
