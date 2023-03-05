#ifndef EVENT_LISTENER_H
#define EVENT_LISTENER_H

#include <Arduino.h>

namespace EventNamespace {
    enum EventType { LEFT_PRESS, RIGHT_PRESS, DUAL_PRESS, NONE};
};

using namespace EventNamespace;

class Event
{
public:
    Event();
    EventType dispatchEvent();
    
    bool leftPress();
    bool rightPress();
    bool dualPress();

private:
    EventType _currentEvent;
};

#endif