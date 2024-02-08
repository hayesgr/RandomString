# RandomString
Generate a random string

I  created this small project for mostly my own interest and maybe as an example.
It isn't meant to be a production project or anything of the sort.

I seen https://www.youtube.com/watch?v=cjarxeW9_Wo
in hich did a code review on the project https://github.com/kanzenminarai/rcg/tree/main/src

What I saw to me was an over complicated project that made something that is fairly easy made
much more complicated than it needs to be. This results in code bloat.
Code bloat means you have more code to maintain which means more potential for bugs.
It is harder to read and understand what is going on.

One of the things I noticed mentioned a lot is the potential for expanding or extendign the project.
Not every project should be should be treated as such you have to look at the reality of if such will
ever happen vs what better options there would be.
You wouldn't want to expand the project to handle all of utf-8 or unicode for example.
As for adding other language support that would be realisticly done better in a separate project.

Granted there is stuff I certainly can do better in this project itself. I can even reduce the amoung of 
code further if I chose to do so. But you have to strike a balance between at time between what is maintainable
or ledgible and other aspects. I figure most programmers with my experience aren't likely to be the one's looking
at this. So I wanted it at least readable enough for who might look at it.

Note:
Went ahead and added a reduced code version in comments in generate.c. It is only 20 lines if you remove comments.

There are always factors one needs to consider when it comes to a project. Performance, size, security/safety, stability,
maintainability, readability, expandability. I've spent a lot of time working in areas that if I mess up on production code
it costs lives not just takes a server down or shows data or information it shouldn't. Industrial control systems are an example.
I've also worked on other stuff that was mostly performance orientated.

Expandability: Is only important if the project has good chance of being expanded. If that is the case why isn't it at the point 
you are writing it?
Maintainability: When I started out this was mostly just not using stuff that was specific to hardware or if you had to separate
it from the rest of the code so it can be easily replaced.
Readability: What is readablility is dependent on the readers skill level of programming.
Size: This can matter to the point there is no compromize. Depending on the hardware you are working your size can be very limited.
Security/Safety: Screw up the controls on a nuclear power plant, cat cracker/refinery, air craft, medical equipment, damn control, 
and many other things you can very easily get people killed sometimes not just a few. Make mistake of the same nature in game code
and the consequences are a lot less sever.
Stability: If people can't run the products they can't use the product.
Performance: "Premature optimization," that comment is probably the biggest sign someone is an amatuer or new to programming. I 
can't even count the number of companies that failed because of that BS. We can just throw more hardware at it. Which means more 
initial cost, more elecricity, ... The more optimized code is the less instructions need to be run, the less power it uses, this 
can be translated into money directly for a business. Which is why there is all the work going into boosting performance of languages.

Side rant:/*
There is a lot of hand holding going on in the industry because there isn't enough adequately trained programmers. Colleges are 
failing to do their jobs. Because they have to hire these subpar programmers they are having to rely on methods like TTD to hold
their hands. I want you to think about TDD. You write code to test code. But the test code you never tested. Think that isn't an issue.
Watch youtube the videos on teach TDD. See how many of them make mistakes in the test code. Even well respected so called pros make
mistakes in thier videos. It is like building a second multi-meter to test and calibrate the first mulit-meter you made. Neither are
tested or calibrated. It is simply just stupid.
*/

The point is you need to evaluate your project and decide what is the more important aspects and why. Then explain it.
Trying to support expandability on a project that isn't likely to be expanded is a waste.

Something like performance on this project probably isn't to high of a level. That would depend though on the number of calls it 
gets and what they are used for. If someone is using it to help generate passwords for users when they create an account. That can 
be fairly low. Unless suddently you have a rush of new users eager to sign up or some other weird issue. If you use it to generate
random strings for an ID system in a database that could use a lot more performance. It really depends on the use case.

