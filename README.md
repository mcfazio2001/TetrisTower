# LED-Tower

**Inspiration**	

Throughout the past couple of years, a large portion of our lives were at our desks. One day after another, we saw how barren our desks were. The Tetra Tower was a useless invention with just enough amusement factor to make our days that much more fun.

**How it Works**

The Tetra Tower sits on our desk with 4, 8x8 LED matrix panels. The animation on the matrix would ideally have a rain animation and as the rain falls, the water level would rise. Once the “water level” reaches the top of the matrix, you could press the button on the tower to “drain” it. Although there is no real purpose for the Tetris Tower, it’s just enough to keep your desk fresh and exciting. 

**Building Procedure**

The initial step was to get the design of the tower case set. This was to give the 3D Printer time to print off the required components. The first printed piece was the base of the tower, this took 3 hours to print. The next step was to design and print the support for the LED Matrix. This was a cylindrical print with guides to hold the LED Matrix in place, this took 12 hours. 

While the design was going on, we were also working on the code simultaneously. The code set up communications between the Arduino, the LED Matrix, and the computer. The code was also to integrate the hex values from LED Matrix Studio of our animation to the Arduino Nano 33 IoT. 

The final step was to connect all of the parts. This included putting the Arduino inside of the case, connecting the portable power supply to allow the tower to be portable, and flashing the software onto the Arduino.

**Difficulties Faced**
Throughout this project, there were many difficulties. The bulk of these coincided with the LED Matrix animation. The code was functional according to the compiler. However, when it came to the Arduino, the animation wouldn’t upload as intended. The Hex data was thousands of lines long for 5 frames of our 64 frame animation. Our first Arduino didn’t have enough memory for this, we then had to change to an alternate board that had issues of its own. The board’s ports weren’t reading. After hours of investigation, we saw that there were underlying bugs in the code. We tried going through a troubleshooting process and found minor fixes, but the issue was never fully solved. 

**Accomplishments that we’re proud of**

This is our first Hack-a-thon and we’re proud that we got something done under the time limit and while following criteria. Restricting your project requires your to think intentionally throughout the entire project. This intentionality gave us the confidence to move forward with more similar projects.

**What we Learned**

We learned that anything is possible. If it seems beyond our capabilities, we just have to take it one task at a time. Breaking a project into bite-sized steps can go a long distance. Additionally, we learned how to adjust when listed data isn’t completely accurate, such as the dimensions on part CAD models.

**What’s next for Tetris Tower**

The next step for Tetris Tower is to find ways to reduce the code produced by the HEX data. Our process took thousands of lines and there is a high risk of errors. We would ideally like to make computing more efficient to reduce the stress on our hardware. 

We would also like to give more controls on the tower. One example would be to give different animations according to how long the user holds the button, or how many times they hold it. We could also implement more automated controls without the user pressing the button. 
