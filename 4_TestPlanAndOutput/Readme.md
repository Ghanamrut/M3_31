# TestPlanAndOutput
## HIGH LEVEL TEST PLAN
|TestID|Description|Input|Output|Status|
|------|--------|--------|-------|-----|
|01|Encryption|Only authorized key can access the Car control | Authorized key required to access the Car control |Passing|
|02|Remote Car Locking|switch pressed 1 times|Car  Locked|Passing|
|03|Remote Car unlocking|switch pressed 2 times|Car  unlocked|Passing|
|04|Alram Activation|switch pressed 3 time|Alarm Activated|Passing|
|05|Alram deactivation|switch pressed 3 times|Alarm deactivated|Passing|
|06|Approach Light|switch pressed 4 times|Approch Light Turned ON|Passing|
## LOW LEVEL TEST PLAN
|TestID|Description|Input|Output|Status|
|------|--------|--------|-------|--------|
|01|All LEDs Should get turn ON together when Car is locked|switch pressed 1 times |All Leds are ON|Passing|
|02|All LEDs Should get turn OFF together when Car is unlocked |switch pressed 2 times |All Leds are OFF|Passing|
|03|Alram Activation|switch pressed 3 time |LEDs turned ON one by one in clockwise direction |Passing|
|04|Alram deactivation|switch pressed 3 time |LEDs turned OFF one by one in clockwise direction |Passing|
|05|Approach light|switch pressed 4 time |LEDs turned ON one by one in anticlockwise direction |Passing|
