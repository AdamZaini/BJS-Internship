# Internship Progress at BJS Biotechnologies Ltd

## Opening statement
This repository consist of the materials I was working on during my internship at BJS Biotechnologies Ltd. The internship lasted from 17th June 2019 to 26th July 2019 in London. You can learn more about the company from their website:
https://www.linkedin.com/company/xxpress-pcr/

## Objective
The objective of the internship was to produce prototype robots that would automate a part of their qPCR process. This includes a liquid dispensing robot and the heating, and transferring of vials. To do this, I built upon an Opentrons OT2 and a 3-DOF robotic arm. Scripts were written in Python for the Opentrons OT2 and Arduino for the robotic arm. Small mechanical changes were made to accommodate the objective. Laser cutting was used to make additional mechanical parts.

## Contents
Within this repository, you can find two folders; one for the work I've done on the Opentrons OT2 and the other on the robotic arm. 

The Opentrons folder contains two Jupyter Notebook code. The first is an instruction manual that I produced. This expands on how to use the functions I have produced for this purpose and how to create customised modules. The objective of this file is that it is to be used as a reference for the next person going forward with the project. The second Jupyter Notebook script consist of the code I used to display the workings of the robot. This script was used whhen filming the robot for presentation purposes. The Opentrons OT2 robot uses a Raspberry Pi as its CPU. Opentrons website: https://opentrons.com/

The Arduino folder contains the Arduino script I used for the robotic arm. The robotic arm was integrated with a vacuum to be used for suction. This required an adaptor to hold the vacuum tubes in place. You may also find the sketch used to laser cut the vacuum adaptor and the electrical diagram for the Arduino based robotic arm. The vacuum and robotic arm was powered by a 12V lithium ion battery pack.

## Further improvements
This section summarises on the improvements I could have made given enough time. Firstly, I would integrate the two robots under a single master script. This could potentially be done via the raspberry pi of the Opentrons OT2 robot. 

There are also minor improvements that could be made on the Opentrons OT2 script. For example, when dispensing liquid, small amounts of liquid would remain on the tip of the pipette. This is due to the viscosity of the liquid. This could be fixed by touching the tips of the pipette on the edge of the well of the vial. Aggresively vibrating the pippete or blowing air after fully dispensing the liquid could also potentially work. On the robotic arm, servos with a higher torque could also be used to produce smoother movements when transferring plates. Instead of a vacuum suction, a small mechanical actuation device would also be more suitable for transferring plates in tight spaces. 
