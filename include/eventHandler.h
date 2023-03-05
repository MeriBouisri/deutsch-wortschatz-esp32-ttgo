#ifndef EVENT_HANDLER_H
#define EVENT_HANDLER_H

#include <TFT_eSPI.h>
#include "event.h"

class EventHandler
{
    public:
        EventHandler();
        void initEventHandler();

        void handleEvent();

        void onLeftPress();
        void onRightPress();
        void onDualPress();

    private:
        Event _event;
        TFT_eSPI _tft = TFT_eSPI();

        int _leftCount, _rightCount, _dualCount;
};

#endif