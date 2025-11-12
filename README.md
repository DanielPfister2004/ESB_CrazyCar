
## Table of Contents
- [Turning off the optimizer](#turning-off-the-optimizer)
- [Milestone 1](#milestone-1)
  - [Chapter 1 – Introduction](#chapter-1---introduction)
  - [Chapter 2 – GPIO](#chapter-2---gpio)
- [How to install Git](#how-to-install-git)



# Turning off the optimizer

Go to FILE -> PROPERTIES -> BUILD\MSP430 Compiler\Optimizer and turn it off.
<img width="1273" height="387" alt="image" src="https://github.com/user-attachments/assets/540af58c-ac82-4372-b921-9ae20916f05a" />

<br><br>
<!-- ################################################################################################### -->

# Milestone 1
## Chapter 1 - Introduction

The task is to set up the correct environment for our code.    
<img width="731" height="415" alt="image" src="https://github.com/user-attachments/assets/6d539b35-a5c0-4411-9ffc-bff52246f65f" />     

#### HAL ... Hardware Abstraction Layer
>This layer communicates directly to the hardware aka to the registers. 
#### DL ... Driver Layer
>The DL does not talk to the registers. It uses functions from the HAL but does not set any Pins. 
#### AL ... Application Layer 
>This layer is completly independent from the HAL layer. It is the top layer and controles what the controller should do.  

## Chapter 2 - GPIO 

The purpose of this task is to to turn the LCD on and off using the START and STOP button interrupt.       
When the LCD display is turned on, the MSP430 should add two integer and float numbers together. During the calculating the LCD display should remain on on otherwise off.    

Measuring the time the display is on, the time the MSP430 needs to perfom the calculation, can be measured using the oscilloskop:   
![Float Calculation](https://github.com/DanielPfister2004/ESB_CrazyCar/blob/master/Laboruebung_2/calc_float.png)
![Integer Calculation](https://github.com/DanielPfister2004/ESB_CrazyCar/blob/master/Laboruebung_2/calc_int.png)


### F&Q
**What is contact bounce, and how can it be prevented through hardware or software techniques?**
> Contact bounceoccurs when a mechanical button generates multiple unintended transitions during a single press or release.           
> It happens due to poor quality of the button, suboptimal PCB layout or faulty soldering.
> A RC-low pass filter or a schmitt-trigger can fix it hardware-wise. When the problem can only be solved software-wise, turning off the interrupt and adding a for-loop (ideally by a timer) also does the trick.

 
**To what extent does an interrupt affect the timing behavior of a program?**
> If an interrupt occurs, the programm halts executions, works through the interrupt and then continous exactly where it left off. 

**What is meant by interrupt nesting?**
> When interrupt nesting is enabled (GIE set inside ISR), any interrupt can interrupt the current ISR — regardless of priority.    
> <img width="847" height="98" alt="image" src="https://github.com/user-attachments/assets/09122c44-352f-412f-a60c-50363db241fb" />


**Which interrupt-priority has Port1?**
> Port1 has the adress 0xFFE4 (information source unkown)
> <img width="820" height="367" alt="image" src="https://github.com/user-attachments/assets/3f8fac4f-076d-4e0e-bcc2-e0a48bd30daf" />

<br><br>
<!-- ################################################################################################### -->


# How to install Git

To create a git, you first need to download the git:
[Download Git](https://git-scm.com/downloads/win)

After installing, the new path has to be add to the global environment variables: 

Environment variable -> New  
Name the Varialbe is z.B. Git
Value the Variable is: "C:\Program Files\Git\cmd" (download path)

## Creating the repository  

After that you have to create a local repository and add your account:  
```c
git init    
git remote add origin https://gitlab.com/<benutzer>/<projekt>.git    
git add .    
git commit -m "Initial commit"    
git push -u origin master    
```


## These are the commands for the future commits

WARNING: use the commands in the correct path "cd C:\Users\danie\Desktop\FH Joanneum\ECE3\ESI"  
```c
git add .  
git commit -m "Commit text"    
git push  
```




