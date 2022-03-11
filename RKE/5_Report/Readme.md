# Remote Keyless Entry (RKE)

## Tabele of Content
  1. [Introduction](#introduction)
  2. [High Level Reuqirements](#high-level-requirements)
  3. [Low Level Reuqirements](#low-level-requirements)
  4. [ SWOT Analysis](#swot-analysis)
  5. [5Ws and 1H](#5ws-and-1h)
## Introduction
Remote keyless entry (RKE) system is a system designed to remotely lock or unlock access to automobiles.

RKE transmission requires two components - a transmitter and a receiver. 

•	Transmitter - RKE key fob, other ID device with RKE integrated 

•	Receiver - Body Control ECU, other ECU with integrated RKE 

RKE operates by broadcasting radio waves on a particular frequency unidirectionally. 

RKE systems implement encryption and rolling code algorithms to prevent car thieves from intercepting and spoofing the telegrams. 

## High Level Requirements
|ID|Description|
|------|------|
|HLR_01|RKE key fob shall send signal to the car ECU|
|HLR_02|Car shall get locked on pressing blue switch once|
|HLR_03|Car shall get unlocked on pressing blue switch twice|
|HLR_04|Car alarm shall get activated/deactivated on pressing blue switch thrice|
|HLR_05|Car Approach Light shall get activated on pressing blue switch four times|

## Low Level Requirements
|ID|ID|Description|
|------|------|------|
|HLR_01|LLR_01|Key shall be in detectable range of the car|
||LLR_02|Key Battery must be charged|
|HLR_02|LLR_01|System shall print message "Lock"|       
||LLR_02|All LED lights shall get turned on at the same time|
|HLR_03|LLR_01|System shall print message "Unlock"|              
||LLR_02|All LED lights shall get turned off at the same time|
|HLR_04|LLR_01|System shall print message "Alarm Activated/Deactivated"|              
||LLR_02|All led shall get turned on in clockwise manner|
|HLR_04|LLR_01|System shall print message "Approach Light"|              
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
![M3HL-SD drawio](https://user-images.githubusercontent.com/98812321/157839066-4281d77c-c44d-4aa2-8437-9b1ec3f3265a.png)

## Low Level Structural Diagram
![Architecture drawio](https://user-images.githubusercontent.com/98812321/157650808-22eadb78-6416-475a-be49-6a11a3252a33.png)
# Design

## High Level Structural Diagram
![M3HL-SD drawio](https://user-images.githubusercontent.com/98812321/157839066-4281d77c-c44d-4aa2-8437-9b1ec3f3265a.png)

## Low Level Structural Diagram
![Architecture drawio](https://user-images.githubusercontent.com/98812321/157650808-22eadb78-6416-475a-be49-6a11a3252a33.png)


## Low Level UML Use Case Diagram
![M3Project drawio](https://user-images.githubusercontent.com/98812321/157839105-41a51243-30ce-4915-83c4-538bf4896126.png)


## Low Level UML Use Case Diagram
![M3Project drawio](https://user-images.githubusercontent.com/98812321/157839105-41a51243-30ce-4915-83c4-538bf4896126.png)







