#mhw2


"... but instead appear as noise of the correct average intensity. This noise is much less objectionable to our visual system than aliasing."
- https://www.cs.cmu.edu/afs/cs/academic/class/15462-s15/www/lec_slides/p51-cook.pdf


How does the Monte Carlo Simulation differ from MC training in RL?
    What is MC in RL?
        An agent is thrown into an enviornment without any prior knowledge of rewards.
        It must via trial-and-error conduct a large magnitude of mistakes and through iteration minimize negative rewards (punishments) and maximize positive rewards.
        The positive rewards are thus accumulated and at the end of the episode compared with previous episodes.
        It should be noted that an agent must complete the entire episode for that episode to be written to memory.
        As well as this, it is a selection of the fittest once the agent has successfully completed an episode, Such that it recieves a negative reward the longer it takes to
        complete a successful run which would mean that it optimizes for the 'fastest route to success'.

    What is MC Simulation?
        Imagine you were attempting to find the global statistics for hunger in the world.
        As you don't have enough funding, you are unable to track 7,500,000,000 daily routines to find if they don't have food.
        What you decide to do is take an unbiased pick of 10,000 people around the world.
        You use this approximation to determine an APPROXIMATION and use it.
         
        Why is it that in https://www.youtube.com/watch?v=7ESK5SaP-bc the numbers converge to pi?
        
