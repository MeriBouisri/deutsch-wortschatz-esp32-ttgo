#include "event.h"

Event::Event() {
    _currentEvent = NONE;
}

EventType Event::dispatchEvent() {
    if (leftPress()) {
        _currentEvent = LEFT_PRESS;

    } else if (rightPress()) {
        _currentEvent = RIGHT_PRESS;

    } else if (dualPress()) {
        _currentEvent = DUAL_PRESS;

    } else {
        _currentEvent = NONE;
    }

    return _currentEvent;
}

bool Event::leftPress() {
    return (digitalRead(0) == 0 && digitalRead(35) == 1);
}

bool Event::rightPress() {
    return (digitalRead(35) == 0 && digitalRead(0) == 1) ;
}

bool Event::dualPress() {
    return (digitalRead(0) == 0 && digitalRead(35) == 0);
}


