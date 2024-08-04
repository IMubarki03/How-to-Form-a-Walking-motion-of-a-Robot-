# How to Form a Walking-motion of a Robot?
## Introduction
To create a walking motion for a robot with six Servo motors controlled by an Arduino, we need to consider that each leg is consist of three Servo motors for the three joints(hip, knee, and ankle). We will try to analog the movement of a _penguin_, that is to shift the whole weight on one leg to lift-move-place the other, respectivily, and redo the same function for the second leg. By repeating this function, the robot will be able to move for long distances with high steability.<br><br>
![image](https://github.com/user-attachments/assets/a183f716-bef1-48ca-b36c-bbfa0b58b644)

## Parts Required
1. Arduino board
2. 6 servo motors (3 for each leg)
3. Power supply for the servos
4. Mechanical structure for the robot
## Procedure
1. **Initialization**: Define initial positions for the servos.
2. **Weight Shift**: Shift the weight of the robot onto one leg.
3. **Lift Leg**: Lift the leg that is free from weight.
4. **Move Leg Forward**: Move the lifted leg forward.
5. **Place Leg Down**: Lower the leg back to the ground.
6. **Repeat for the other leg**: Shift the weight to the opposite leg and repeat the process.
