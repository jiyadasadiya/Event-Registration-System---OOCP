#ifndef EVENT_H
#define EVENT_H
#include <string>
class Event {
    int id, capacity, registered;
    std::string name, date, venue;
public:
    Event(int id=0, std::string name="", std::string date="", std::string venue="", int capacity=0, int registered=0);
    int getId() const; int getCapacity() const; int getRegistered() const;
    std::string getName() const; std::string getDate() const; std::string getVenue() const;
    int seatsLeft() const;
    void addRegistration(); void removeRegistration();
    std::string toFileLine() const;
    static bool fromFileLine(const std::string&, Event&);
};
#endif
