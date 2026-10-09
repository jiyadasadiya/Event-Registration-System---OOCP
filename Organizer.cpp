#include "Organizer.h"
#include <sstream>
Organizer::Organizer(int i,std::string n,std::string d):id(i),name(n),department(d){}
int Organizer::getId()const{return id;} std::string Organizer::getName()const{return name;} std::string Organizer::getDepartment()const{return department;}
std::string Organizer::toFileLine()const{return std::to_string(id)+"|"+name+"|"+department;}
bool Organizer::fromFileLine(const std::string& l,Organizer& o){std::stringstream s(l);std::string a,b,c;if(!std::getline(s,a,'|')||!std::getline(s,b,'|')||!std::getline(s,c,'|'))return false;try{o=Organizer(std::stoi(a),b,c);return true;}catch(...){return false;}}
