# RandomString
Generate a random string

I  created this small project for mostly my own interest and maybe as an example.
It isn't meant to be a production project or anything of the sort.

I seen https://www.youtube.com/watch?v=cjarxeW9_Wo where a code review was done of
the project https://github.com/kanzenminarai/rcg/tree/main/src

The project was made far more complicated than it need be. This lead to code bloat. Code bloat has multiple negative effects. Those include more code to trouble shoot and more code to maintain. The more code you write the more potential places for errors to occur. It can also cause performance issues.

Expanding the project was mentioned a lot. Not every project should be looked at as if it will be expanded. One should look at the probability of the project being expanded and would it be simpler to create a separate project for issue were expansion is a potential. If you look at the project here expanding it is not likely. You wouldn’t want to expand it to allow all utf-8 or unicode for example.
As for adding other language support those would be better done in separate projects or apis.

I put 3 examples in the examples in the https://github.com/hayesgr/RandomString/blob/main/generate.c
file which reduces the code less lines the smallest being around 15 lines of code.

There are always factors one needs to consider when it comes to a project. Performance, size, security/safety, stability, maintainability, readability, expandability. I've spent a lot of time working in areas that if I mess up on production code it costs lives not just takes a server down or shows data or information it shouldn't. Industrial control systems are an example. I've also worked on other stuff that was mostly performance orientated.

The most important thing you need to decide is what is your projects job. Well use this project as an example. Checking user input. Where should that be done. Should it be done at the UI level or the API level or should there be an interface level. Doing it multiple is a bad idea you are just duplicating code.
Is it the API developers job to hold the hand of the person using the code? NO. It isn’t. It isn’t your job to guard against stupid people or maliciousness. Your job is to write something that works that does a specific task.

Imagine you go through add in lots of checks for incoming information. Great. But does that fix the issue were the other person even with that information keeps sending in the wrong type of information. No. Will it fix the issue if they don’t check the User input data and notify the user of the wrong type of input data? No.

Checking something generated in your own code such as allocated memory is your job. The quality of user input data is the users job or programmers job who is using the API you created. If they can’t use something correct based on documentation and an example what chance do you think a return code is going to straiten them out? None.


Expandability: Is only important if the project has good chance of being expanded. If that is the case why isn't it at the point you are writing it?

Maintainability: When I started out programming this was mostly just not using stuff that was specific to hardware. If you need to use hardware specific methods then you separated it from the rest of the code. 

Readability: Is Subjective. What is readability is dependent on the readers skill level of programming.
Size: This can matter to the point there is no compromise. Depending on the hardware you are working your size can be very limited.
Security/Safety: Screw up the controls on a nuclear power plant, cat cracker/refinery, aircraft, medical equipment, dam control, and many other things you can very easily get people killed sometimes not just a few. Make mistake of the same nature in game code and the consequences are a lot less sever.
Stability: If people can't run the products they can't use the product.
Performance: "Premature optimization," that comment is probably the biggest sign someone is an amateur or new to programming. I can't even count the number of companies that failed because of that BS. We can just throw more hardware at it. Which means more initial cost, more electricity, ... The more optimized code is the less instructions need to be run, the less power it uses, this can be translated into money directly for a business. Which is why there is all the work going into boosting performance of languages.

Side rant:/*
There is a lot of hand holding going on in the industry because there isn't enough adequately trained programmers. Colleges are failing to do their jobs. Because they have to hire these subpar programmers they are having to rely on methods like TDD to hold their hands. I want you to think about TDD. You write code to test code. But the test code you never tested. Think that isn't an issue. Watch youtube the videos teaching TDD. See how many of them make mistakes in the test code. Even well respected so called pros make mistakes in their videos. It is like building a second multi-meter to test and calibrate the first mulit-meter you made. Neither are tested or calibrated. It is simply just stupid.
*/

The point is you need to evaluate your project and decide what is the more important aspects and why. Then explain it.
Trying to support expandability on a project that isn't likely to be expanded is a waste.

Something like performance on this project probably isn't to high of a level. That would depend though on the number of calls it gets and what they are used for. If someone is using it to help generate passwords for users when they create an account. That can be fairly low. Unless suddenly you have a rush of new users eager to sign up or some other weird issue. If you use it to generate random strings for an ID system in a database that could use a lot more performance. It really depends on the use case.

