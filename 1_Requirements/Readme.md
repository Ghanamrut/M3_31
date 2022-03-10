3# Remote Keyless Entry (RKE)

## Tabele of Content
  1. [Introduction](#introduction)
  2. [High Level Reuqirements](#high-level-requirements)
## Introduction : -
Remote keyless entry (RKE) system is a system designed to remotely lock or unlock access to automobiles.

RKE transmission requires two components - a transmitter and a receiver. 

•	Transmitter - RKE key fob, other ID device with RKE integrated 

•	Receiver - Body Control ECU, other ECU with integrated RKE 

RKE operates by broadcasting radio waves on a particular frequency unidirectionally. 

RKE systems implement encryption and rolling code algorithms to prevent car thieves from intercepting and spoofing the telegrams. 

# High Level Requirements
|ID|Description|
|------|------|
|HLR_01|RKE key fob shall send signal to the car ECU|
|HLR_02|Car shall get locked on pressing blue switch once|
|HLR_03|Car shall get unlocked on pressing blue switch twice|
|HLR_04|Car alarm shall get activated/deactivated on pressing blue switch thrice|
|HLR_05|Car Approach Light shall get activated on pressing blue switch four times|

# Low Level Requirements
|ID|ID|Description|
|------|------|------|
|HLR_01|LLR_01|Key shall be detectable range of the car|
|HLR_02|LLR_01|System shall print message "Lock"|       
       |LLR_02|All LED lights shall get turned on at the same time|
       
