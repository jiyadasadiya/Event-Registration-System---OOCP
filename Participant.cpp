#include "Participant.h"
#include <sstream>
Participant::Participant(int i,std::string n,std::string e):id(i),name(n),email(e){}
int Participant::getId()const{return id;} std::string Participant::getName()const{return name;} std::string Participant::getEmail()const{return email;}
std::string Participant::toFileLine()const{return std::to_string(id)+"|"+name+"|"+email;}
bool Participant::fromFileLine(const std::string& l,Participant& o){std::stringstream s(l);std::string a,b,c;if(!std::getline(s,a,'|')||!std::getline(s,b,'|')||!std::getline(s,c,'|'))return false;try{o=Participant(std::stoi(a),b,c);return true;}catch(...){return false;}}
