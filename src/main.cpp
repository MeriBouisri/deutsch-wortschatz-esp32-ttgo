#include <Arduino.h>
#include <TFT_eSPI.h>
#include <SPIFFS.h>
#include <SD.h>
#include "eventHandler.h"

TFT_eSPI tft = TFT_eSPI();
EventHandler eventHandler = EventHandler();


File file;




void setup() {
    pinMode(0, INPUT_PULLUP);
    pinMode(35, INPUT_PULLUP);

    eventHandler.initEventHandler();
    // tft.println("Initializing...");

    // if (!SPIFFS.begin()) {
    //     tft.fillScreen(TFT_BLACK);
    //     tft.println("An Error has occurred while mounting SPIFFS");
    //     return;
    // }

    // file = SPIFFS.open("/german_english.json", FILE_READ);

    // if (!file) {
    //     tft.fillScreen(TFT_BLACK);
    //     tft.println("Failed to open file for reading");
    //     return;
    // }

    // tft.fillScreen(TFT_BLACK);
    // tft.println("File Content:");
    // int begin = millis();
    // while (file.available()) {
    //     tft.write(file.read());

    //     counter++;
    //     if (counter % 500 == 0) {
    //         tft.fillScreen(TFT_BLACK);
    //         tft.setCursor(0, 0);
    //     }
    // }
    // int end = millis();
    // tft.fillScreen(TFT_BLACK);
    // tft.setCursor(0, 0);
    // tft.println("Total time to read file:");
    // tft.setCursor(0, 30);
    // tft.println(end - begin);
    // tft.setCursor(0, 60);
    // tft.println("Total bytes read:");
    // tft.setCursor(0, 90);
    // tft.println(counter);
}

void loop() {
    eventHandler.handleEvent();
    // eventListener.updatePressStates();
    // tft.setCursor(0, 0);
    // tft.println("Left:");
    // tft.setCursor(0, 30);
    // tft.println("Right:");
    // tft.setCursor(0, 60);
    // tft.println("Dual:");
    
    // if (eventListener.leftPress()) {
    //     leftCount++;
    //     tft.setCursor(30, 0);
    //     tft.println(leftCount);
    // }

    // else if (eventListener.rightPress()) {
    //     rightCount++;
    //     tft.setCursor(30, 30);
    //     tft.println(rightCount);
    // }

    // else if (eventListener.dualPress()) {
    //     dualCount++;
    //     tft.setCursor(30, 60);
    //     tft.println(dualCount);
    // }

}