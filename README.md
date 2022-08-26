# Vehicle-Control-system
C project as a perctice on the basics concepts of the C language progarmming 
<br/>
# Run
It is porject folder on eclipse , in the src folder there are 3 files , the main function in Vehicle_Control_System.c<br/>
#WITH_ENGINE_TEMP_CONTROLLER in the Vehicle.c is set to 1 to compile the code of ENGINE_TEMP_CONTROLLER
<br/>
# Sepecifications
### 1) Asking the user if he/she wants:  <br/>

  a. Turn on the vehicle engine  <br/>

  b. Turn off the vehicle engine  <br/>

  c. Quit the system  <br/>

  <br/>  

If chose to “Quit the system”: Quit program  <br/>

If chose to “Turn off the vehicle engine”: Ask him/her again what he/she wants to do
  <br/>  <br/>

### 2) If chose to “Turn on the vehicle engine”, display “Sensors set menu”, menu that simulates the vehicle sensors readings:  <br/>

  a. Turn off the engine  <br/>

  b. Set the traffic light color.  <br/>

  c. Set the room temperature (Temperature Sensor)  <br/>

  d. Set the engine temperature (Engine Temperature Sensor)  <br/>

While the engine is ON, the menu must be always displayed and waits for an answer.  <br/>

  <br/> 


####  Based on traffic light data (Take it as input from console, we will assume that this is the sensor read value)<br/>

i. If the traffic light is ‘G’ set vehicle speed to 100 km/hr<br/>

ii. If the traffic light is ‘O’ set vehicle speed to 30 km/hr<br/>

iii. If the traffic light is ‘R’ set vehicle speed to 0 km/h<br/>
<br/>
#### Based on room temperature data (Take it as input from console, we will assume
that this is the sensor read value)<br/>

i. If temperature less than 10, Turn AC ON and set
temperature to 20<br/>

ii. If temperature is greater than 30, Turn AC ON and set
temperature to 20<br/>

iii. If temperature is otherwise, Turn AC OFF<br/>
<br/>


#### Based on engine temperature data (Take it as input from console, we will
assume that this is the sensor read value)<br/>

i. If temperature less than 100, Turn “Engine Temperature
Controller” ON and set temperature to 125<br/>

ii. If temperature is greater than 150, Turn “Engine Temperature
Controller” ON and set temperature to 125<br/>

iii. If temperature is otherwise, Turn “Engine Temperature
Controller” OFF<br/>

<br/><br/>

#### If vehicle speed is 30 km/hr<br/>
i. Turn ON AC if it was OFF and set room temperature to: current
temperature * (5/4) + 1<br/>
ii. Turn ON “Engine Temperature Controller” if it was OFF and set engine
temperature to: current temperature * (5/4) + 1<br/>

<br/><br/>

### Display the current vehicle state 
i. Engine state: ON/OFF.<br/>
ii. AC: ON/OFF.<br/>
iii. Vehicle Speed.<br/>
iv. Room Temperature.<br/>
v. Engine Temperature Controller State.<br/>
vi. Engine Temperature.<br/>
<br/><br/>

#### If chose in menu of requirement 5 to “Turn off the engine”, the menu of requirement 1 must be displayed.
<br/>
<br/>

# Snap

![Screenshot 2022-08-26 184744](https://user-images.githubusercontent.com/85132939/186953510-4a30a779-10f5-400c-a2cc-91ed1c2b5488.png)

