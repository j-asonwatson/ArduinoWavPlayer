#include <pcmConfig.h>
#include <pcmRF.h>
#include <TMRpcm.h>
#include <SD.h>
#include <SPI.h>



                // need to include the SD library
//#define SD_ChipSelectPin 53  //example uses hardware SS pin 53 on Mega2560
#define SD_ChipSelectPin 10  //using digital pin 4 on arduino nano 328
//#define MODE1
         //  also need to include this library...

TMRpcm tmrpcm;   // create an object for use in this sketch
char mychar;

void setup(){
  tmrpcm.speakerPin = 9; //11 on Mega, 9 on Uno, Nano, etc
  tmrpcm.setVolume(5);
  tmrpcm.quality(1);
  Serial.begin(9600);
  while(true){
  if (!SD.begin(SD_ChipSelectPin)) {  // see if the card is present and can be initialized:
    Serial.println("SD fail");  
    return;   // don't do anything more if not
  }
  tmrpcm.play("Wubz.wav"); //the sound file "music" will play each time the arduino powers up, or is reset}
  }
}

void loop(){  

  if(Serial.available()){   
    mychar = Serial.read();


  }

}
