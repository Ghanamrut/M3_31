![Code Quality Score](https://api.codiga.io/project/31922/score/svg)
![Code grade](https://api.codiga.io/project/31922/status/svg)
[![Codacy Badge](https://app.codacy.com/project/badge/Grade/867330aaf60b48b097d7322cbe29d6ad)](https://www.codacy.com/gh/Ghanamrut/M2-EmbSys/dashboard?utm_source=github.com&amp;utm_medium=referral&amp;utm_content=Ghanamrut/M2-EmbSys&amp;utm_campaign=Badge_Grade)

|Name|Contribution|
|--------|---------|
|Gaurav Pawar|Requriment, Button Initialization, Approch Light function, Door Status function|
|Akshay Eknathe|Test Plan, While loop, Unlock function, Alarm Status function|
|Ghanamrut Marathe|Design, Delay function, Alarm function, Battery Info function|
|Nimish Palod|5W and 1H /SWOT Anlysis, LED Initialization, Lock function, Window Status function|

# M3_31
Remote keyless entry (RKE) system is a system designed to remotely lock or unlock access to automobiles. 

1.A) RKE transmission requires two components - a transmitter and a receiver.

     * Transmitter - RKE key fob, other ID device with RKE integrated 
     
     * Receiver - Body Control ECU, other ECU with integrated RKE 
     
  B) RKE operates by broadcasting radio waves on a particular frequency unidirectionally.
  
  C) RKE systems implement encryption and rolling code algorithms to prevent car thieves from intercepting and spoofing the telegrams.
  
  D) Typical RKE functions are:
  
     * Print lock – (Blue switch on- All led on at the same time)
     
     * Print unlock - (Blue switch press two times- All led off at the same time)
     
     * Print alarm activation/deactivation - (Blue switch press three times- All led on in clockwise manner)
     
     * Print approach light - (Blue switch press four times- All led on in anti-clockwise manner)
     
2.A) A BiCom system is the extention of the unidirectional RKE to bidirectional RKE system. 

     *	keyfob -> car (like a unidirectional RKE system) 
     
     *	car -> keyfob (car status information for displaying on the keyfob by LED or display) 
     
  B) Typical BiCom status information transmitted to the keyfob are: 
     
     *	Print window status (Blue switch on- All led on at the same time)
     
     *	Print alarm status - (Blue switch press two times- All led off at the same time
     
     *	Print car battery info – (Blue switch press three times- All led on in clockwise manner)
     
     *	Print Door status (Blue switch press four times- All led on in anti-clockwise manner)

