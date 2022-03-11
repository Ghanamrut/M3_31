# Remote Keyless Entry (RKE)

## Tabele of Content
  1. [Introduction](#introduction)
  2. [High Level Reuqirements](#high-level-requirements)
  3. [Low Level Reuqirements](#low-level-requirements)
  4. [ SWOT Analysis](#swot-analysis)
  5. [5Ws and 1H](#5ws-and-1h)
  6. [Design](#design)
  7. [Test Plan And Output](#test-plan-and-output)
## Introduction
Bi-Com System is Bidirectional RKE system which consists of transmitter (Key-fob) and receiver (Car) include some functions. By using these functions, we can check the car status information. Most used Bi-Com system alarm the vehicle against theft and lock and unlock the door and tailgate. Some include remote start and car finder function. The most Bi-Com system design are achieving Low power consumption in both Transmitter and Receiver, while achieving good range and reliability for the Bi- Com system. Bi-Com system allows a user to lock, unlock the care and to check the windows status, alarm status, Battery status information etc.… This application note describes how Bi-Com system Work and ways to meet the primary design challenges, which are low power consumption, Bi-Com Transmitter, Receiver range and reliability.

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

# Design

## High Level Structural Diagram
![M3HL-SD drawio (1)](https://user-images.githubusercontent.com/98812321/157848265-b23f0855-09b8-4a93-b0a3-0fc3fe69b14d.png)

## Low Level Structural Diagram
![Untitled Diagram drawio (2)](https://user-images.githubusercontent.com/98812321/157847273-1cba3ed4-d910-4c36-a804-92bf7978672e.png)


## Low Level UML Use Case Diagram
![M3Project drawio (1)](https://user-images.githubusercontent.com/98812321/157847931-ab07a16f-1389-4d8b-ad97-bbd62743cdc0.png)

# Test Plan And Output
## HIGH LEVEL TEST PLAN
|TestID|Description|Input|Output|Status|
|------|--------|--------|-------|-----|
|01|Encryption|Only authorized key can access the Car control | Authorized key required to access the Car control |Passing|
|02|To get window status|switch pressed 1 times|Car Window status|Passing|
|03|To get Alarm status|switch pressed 2 times|Car alarm status|Passing|
|04|To get Battery status|switch pressed 3 time|Car Battery Status|Passing|
|05|To get Door status|switch pressed 4 times|Car Door Status|Passing|
## LOW LEVEL TEST PLAN
|TestID|Description|Input|Output|Status|
|------|--------|--------|-------|--------|
|01| To show Window Status|switch pressed 1 times |All Leds are ON|Passing|
|02| To Show Alarm status |switch pressed 2 times |All Leds are OFF|Passing|
|03|To show battery status|switch pressed 3 time |LEDs turned ON one by one in clockwise direction |Passing|
|04|To show door status|switch pressed 4 time |LEDs turned ON one by one in anticlockwise direction |Passing|


