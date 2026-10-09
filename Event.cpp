#include "Event.h"
#include <sstream>
#include <stdexcept>
Event::Event(int i,std::string n,std::string d,std::string v,int c,int r):id(i),capacity(c),registered(r),name(n),date(d),venue(v){
 if(id<0||capacity<0||registered<0||registered>capacity) throw std::invalid_argument("Invalid event values.");
}
int Event::getId()const{return id;} int Event::getCapacity()const{return capacity;} int Event::getRegistered()const{return registered;}
std::string Event::getName()const{return name;} std::string Event::getDate()const{return date;} std::string Event::getVenue()const{return venue;}
int Event::seatsLeft()const{return capacity-registered;}
void Event::addRegistration(){if(seatsLeft()<=0)throw std::runtime_error("Event is full.");++registered;}
void Event::removeRegistration(){if(registered>0)--registered;}
std::string Event::toFileLine()const{return std::to_string(id)+"|"+name+"|"+date+"|"+venue+"|"+std::to_string(capacity)+"|"+std::to_string(registered);}
bool Event::fromFileLine(const std::string& line,Event& out){std::stringstream ss(line);std::string a,b,c,d,e,f;if(!std::getline(ss,a,'|')||!std::getline(ss,b,'|')||!std::getline(ss,c,'|')||!std::getline(ss,d,'|')||!std::getline(ss,e,'|')||!std::getline(ss,f,'|'))return false;try{out=Event(std::stoi(a),b,c,d,std::stoi(e),std::stoi(f));return true;}catch(...){return false;}}
