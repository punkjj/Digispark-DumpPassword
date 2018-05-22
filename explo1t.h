#include "DigiKeyboard.h"
#define __explo1t_h__

void printThis(String x, int y)
{
    DigiKeyboard.print(x);
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
    DigiKeyboard.delay(y);
}

void sleep(int x)
{
    DigiKeyboard.delay(x);
}

void pressThis(byte key, byte modifier) // presses the keys given in the parameters
{
    DigiKeyboard.sendKeyStroke(key, modifier);
}

void pressThis(byte key) //Override to enable single keys
{
    pressThis(key, 0);
}

void tap(byte key, int x)
{
    for (int y = 0; y != x; y++)
    {
        pressThis(key);
    }
}

void openCMD() //Open's CMD Prompt with admin rights.
{
    pressThis(KEY_R, MOD_GUI_LEFT);
    sleep(1000);
    DigiKeyboard.print("powershell -Command Start-Process cmd -Verb runAs");
    sleep(1000);
    pressThis(KEY_ENTER);
    sleep(1000);
    pressThis(KEY_ARROW_LEFT);
    pressThis(KEY_ENTER);
    sleep(2000);
}

void hideWindow() // Hides window near taskbar so we can work as well as keep it hidden.
{
    pressThis(KEY_SPACE, MOD_ALT_LEFT);
    sleep(200);
    DigiKeyboard.print("m");
    DigiKeyboard.sendKeyPress(KEY_ARROW_DOWN); //sendKeyPress -> KEY_ARROW_DOWN , Press the Key
    sleep(3000);                               // Wait 3 seconds
    DigiKeyboard.sendKeyPress(KEY_ARROW_DOWN); //sendKeyPress -> KEY_ARROW_DOWN , Release the Key
    pressThis(KEY_ENTER);
}
