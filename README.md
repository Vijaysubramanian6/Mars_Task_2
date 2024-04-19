# Mars_Task_2

## Thinking during Tasks

So when I read the task, it sounded familiar as one of my mini project was similar to this but with serovs. Stepper Motor was something that I had heard of but never worked with it. Didn't sounded very difficult. 
But its difference in working with simulation and real hardware. With real hardware their are a lot of things that could go wrong(some componenets me not work), many extra processes involved(like setting up the setup, connections, keeping the connection clean) and many more things to keep in mind(like safety with power connection, avoiding loss connections) etc.

Their is always a chance to things going wrong, like one equipment might not work out of everything and we would have to find that one component out of all.
Obviously i was not an exception I faced the same issue, some my setups connections were lose, IR sensors were responding weirdly at times. Especially Stepper was a slightly newnthings for me and that had some issue with poew supply, which i was not able to sort and had to take help seniors.

These are some things that one can only experience while working with actual hardware. And these can't be avoided no matter how many ever times we checkm our connections, or code in simulation.




## Steps 
So how did i go about attempting the task

Firstly, understand Stepper 
I searched about the basics of Stepper, what it does, how is it different from servo, it pin out diagram.

Then figured out how to get it connected to the MicroStep Controller TB6600, its pin diagram. Tried to understand what each pin does at very basic level, so that it helps me to understand the code in a better way.

Next step was controlling the stepper. So I searched on net to get general code for controlling stepper. I made changes that were required for with respect to the task. After that i checked its working, which was a very very smooth process with trying and replaceing 3 motor, 2 boards and 1 TB6600(sarcasim). But at the end sorted it out.

Then had to inegrate it with IR sensor. Write code for it and connections were easy. I got the logic correctly. The issue was the caliberation of IR sensor, like some IR was active high and some where active low, their ranges/ sensitivity was also different. I figured them out and coded for it accordingly.

That was it, it was working to an extict but due to some lose connection of wire their was some fluctuation.


## Resources 
From Web, mostly refered to Arduino's documentation website.
