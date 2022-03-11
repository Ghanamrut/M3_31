# Remote Keyless Entry (RKE)

## Tabele of Content
  1. [Introduction](#introduction)
  2. [High Level Reuqirements](#high-level-requirements)
  3. [Low Level Reuqirements](#low-level-requirements)
  4. [ SWOT Analysis](#swot-analysis)
  5. [5Ws and 1H](#5ws-and-1h)
## Introduction
2.1	A BiCom system is the extention of the unidirectional RKE to bidirectional RKE system. 
•	keyfob -> car (like a unidirectional RKE system) 
•	car -> keyfob (car status information for displaying on the keyfob by LED or display) 
 

## High Level Requirements
|ID|Description|
|------|------|
|HLR_01|Car shall send signal to the key fob|
|HLR_02|Car Window open/closed status shall be sent to key fob on pressing blue switch once|
|HLR_03|Car Alarm status shall be sent to key fob on pressing blue switch twice|
|HLR_04|Car Battery info shall be sent on pressing blue switch thrice|
|HLR_05|Car Door status shall be sent to key fob on pressing blue switch four times|

## Low Level Requirements
|ID|ID|Description|
|------|------|------|
|HLR_01|LLR_01|Key shall be in detectable range of the car|
||LLR_02|Key Battery must be charged|
|HLR_02|LLR_01|System shall print message "Window Open/Close"|       
||LLR_02|All LED lights shall get turned on at the same time|
|HLR_03|LLR_01|System shall print message "Alarm On/off"|              
||LLR_02|All LED lights shall get turned off at the same time|
|HLR_04|LLR_01|System shall print message "Battery Info"|              
||LLR_02|All led shall get turned on in clockwise manner|
|HLR_04|LLR_01|System shall print message "Door Open/Close"|              
||LLR_02|All led shall get turned on in anti-clockwise manner|







# SWOT Analysis
![download](https://user-images.githubusercontent.com/98874290/157716675-bbf17aea-59a4-4ebb-8f13-288a8266389d.png)
* **Strength**:-
1) Remote key is very useful in  situations where car lock is not opening Physically.
2) Broad amount of sensor data available on vehicle or driver status.
3) Convinient & Time saving.
* **Weakness**:-
1) Limited Range.
2) Dependable on Battery.
3) Still missing data communication and data exchange standards and unsolved tasks regarding driver state sensing.
4) Sensing information is not available or sensing tasks have to be passed to e.g. environment perception or connectivity.
5) Use of Single switch for multiple operations might be confusing.
* **Opportunities**:-
1) Broad amount of sensor data can be remotely accessed (e.g. tire pressure, engine diagnostics, fatigue monitoring).
2) Existing sensor types and set-ups could be used for advanced connected and automated features.
* **Threats**:-
1) Anyone who has access to key can unlock the car.
2) Controlling car through mobile phones can vanish this Technology.
3) User might not get the desired output if mistakenly wrong number of times button is pressed which may create problem.



# 5Ws and 1H
![download](https://user-images.githubusercontent.com/98874290/157722220-f94605d1-9cd1-405a-a3ca-bbac83014911.jpg)
* **Who** - People Having Car.
* **What** - Remote keyless Entry.
* **When** - When user want to access car functions remotely.
* **Where** - In a detectable range of car.
* **Why** - Convinience & Security.
* **How** - By pressing button on key.







