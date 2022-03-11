# TestPlanAndOutput
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
