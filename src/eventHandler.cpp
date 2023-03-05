#include "eventHandler.h"

EventHandler::EventHandler() {
    _event = Event();
}

void EventHandler::initEventHandler() {
    _tft.init();
    _tft.fillScreen(TFT_BLACK);
    _tft.setTextSize(1);
    _tft.setTextColor(TFT_WHITE, TFT_BLACK);

    _tft.setCursor(0, 0);
    _tft.println("left:");
    _tft.setCursor(0, 30);
    _tft.println("right:");
    _tft.setCursor(0, 60);
    _tft.println("dual:");
}

void EventHandler::handleEvent() {
    switch (_event.dispatchEvent()) {

        case LEFT_PRESS:
            
            EventHandler::onLeftPress();
            break;

        case RIGHT_PRESS:
   
            EventHandler::onRightPress();
            break;

        case DUAL_PRESS:
            EventHandler::onDualPress();
            break;

        default:
            break;
    }
}

void EventHandler::onLeftPress() {
    _tft.setCursor(40, 0);
    _leftCount++;
    _tft.print(_leftCount);
}

void EventHandler::onRightPress() {
    _tft.setCursor(40, 30);
    _rightCount++;
    _tft.print(_rightCount);
}


void EventHandler::onDualPress() {
    _tft.setCursor(40, 60);
    _dualCount++;
    _tft.print(_dualCount);
}
