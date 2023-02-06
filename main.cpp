#if false
/*
 PFM::C++ For Musicians Task
 Project 1 - Part 1 / 1
 Video: Chapter 2 Part 1
 
Create a branch named Part1

Purpose:  This project will get you thinking correctly about choosing good names for the tasks that your objects will perform. 
This project will also introduce you to the review process, and how Pull Requests work.
I will request a change be made to one of your 10 nouns for the sole purpose of showing how the review process works.

 1) write out 10 nouns in the space provided below.
    Choose nouns that do things.  
    avoid choosing nouns that have things done TO them.
    If your noun consists of multiple words, use camelCaseToNameIt.
 
 2) for each of the 10 nouns, write out 3 actions it might perform, in plain english.
    a) AVOID state-checking actions, like "Car has a horn".  i.e.
        car.hasHorn()
    b) We use 'can' and 'has' to check the state of objects, so they aren't really 'action' verbs.
        "the Car blows its horn" is a better action, because the car is doing something.  its state is not being checked.  i.e.
            car.blowsHorn()
    c) choose actions that your noun does.  Do not write out actions that are performed on your noun.
        for example: 
            noun: lightBulb.
            action: turns on.  
                This is a bad action because someone else turns on the light.  the light doesn't turn itself on. 
            a better action would be: 
                illuminates room
                This is a better action, because this is what lightbulbs do.  
            other actions that would work:
                action: consume electricity
                action: burn out and destroy filament.

        
 3) write out how you'd call that action in pseudo code, in the space after the plain-english action
 
 4) If the action requires multiple words, use camelCaseToNameIt
     don't forget the semi-colon after each statement
 */


//  example)
//  Noun:       arm                     // 1)
//  action 1:   the arm extends         // 2)
arm.extend();                           // 3)
//  action 2:   the arm flexes          // 2)
arm.flex();                             // 3)
//  action 3:   the arm rotates conter-clockwise
arm.rotateCounterClockwise();           // 4) demonstrates camelCase


//  1)
//  Noun: sun 
//  action 1: the sun shines
sun.shine();
//  action 2:    the sun burns
sun.burn();
//  action 3:    the sun lights up
sun.lightUp();
//  2)
//  Noun: hand   
//  action 1: the hand opens
hand.open();
//  action 2: the hand closes
hand.close();
//  action 3: the hand shake
hand.shake();
//  3)
//  Noun: dog
//  action 1: the dog wags its tail
dog.wag();
//  action 2: the dog barks
dog.bark();
//  action 3: the dog plays
dog.play();
//  4)
//  Noun: Anchor man
//  action 1: the anchor man read the news
anchorMan.readTheNews();
//  action 2: the anchor man host the show
anchorMan.hostTheShow();
//  action 3: bee produces wax
anchorMan.readTheTeleprompter();
//  5)
//  Noun: person
//  action 1: a person eats
person.eat();
//  action 2: a person rides
person.ride();
//  action 3: a persone smiles
person.smile();
//  6)
//  Noun: loudspeaker
//  action 1: a loudspeaker vibrates
loudspeaker.vibrate();
//  action 2: a loudspeaker reproduce sounds
loudspeaker.reproduceSounds();
//  action 3: a loudspeaker could break
loudspeaker.break();
//  7)
//  Noun: chef 
//  action 1: a chef cooks
chef.cook();
//  action 2: a chef chops food
chef.chopFood();
//  action 3: a chef serves food
chef.serveFood();
//  8)
//  Noun: cartoonist
//  action 1: a cartoonist writes a story
cartoonist.writeStory();
//  action 2: a cartoonist draws
cartoonist.draw();
//  action 3: a cartoonist illustrates a story
cartoonist.illustrate();
//  9)
//  Noun: smartphone
//  action 1: a smartphone makes a call
smartphone.makeCall();
//  action 2: a smartphone can make a web search
smartphone.makeWebSearch();
//  action 3: a smartphone takes photos
smartphone.takePhotos();
//  10)
//  Noun: plant
//  action 1: a plant grows
plant.grow();
//  action 2: a plant absorbs water
plant.absorbWater();
//  action 3: a plant absorbs sun lights
plant.absorbSunLight();


#endif

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

#include <iostream>
int main()
{
    std::cout << "good to go" << std::endl;
    return 0;
}
