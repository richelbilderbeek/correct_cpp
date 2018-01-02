# FAQ

## How does this course work?

See [how this course works](how_this_course_works.md).

## Where are the teaching materials?

There is plenty of material about C++ online, which you'll have to find and use.

Recommended online resources are:

 * [isocpp.org](https://isocpp.org/): excellent starting point
 * [C++ core guidelines](https://github.com/isocpp/CppCoreGuidelines): guidelines to write correct code
 * [cplusplus.com](http://www.cplusplus.com/): C++ tutorials
 * [cppreference.com](http://en.cppreference.com/w/cpp): C++ reference

## Do I need a GitHub account?

Yes. These are free/gratis.

## Do I need a Travis CI account?

No. My Travis CI account will correct your exercises.

## How is the code corrected?

Each chapter has its own `.travis.yml` file.
This file contains the commands that Travis CI needs to run.

To keep the chapters' GitHubs clean, the scripts to build and test
are usually downloaded from this GitHub, made excutable and then executed.

## How to correct my code without a pull request?

There are two ways:

 * Correct your code locally, see 'How to test if my code is correct locally?'
 * Let Travis CI correct your GitHub, see 'How to let Travis CI correct my GitHub?'

Correcting your code locally is fastest, but only works under GNU/Linux with an Ubuntu-like distro.

Letting Travis CI correct your GitHub is slower (you again have to wait for Travis CI to do its analysis), but always works. This requires a Travis CI account, which is free/gratis, and you can use your GitHub account to log in.

## How to let Travis CI correct my GitHub?

Activate Travis CI for your GitHub.

You will need a Travis CI account for this. A Travis CI is free/gratis, and
you can use your GitHub account to log in.

## How to correct my code locally?

The scripts of any chapter, can be found in this GitHub, in a folder
with the same name as the chapter. For example, the scripts for 
chapter `hello_world` are found in the `hello_world` folder.

These scripts work on Travis CI, which uses a Ubuntu GNU/Linux distro.

## Why don't you put the `.pro` files in each chapter's GitHub?

Advantages of putting the `.pro` files I use in the GitHub:

 * It would help all those that use Qt Creator and have a C++ compiler that supports C++17. This just happens to be most of my students

Disadvantages of putting the `.pro` files I use in the GitHub:

 * It would be in the way of all those that do not use Qt Creator

I chose to keep it out, as Qt Creator is not the most used C++ IDE around.

## My code 'just works', but is rejected

'it just works' is not good enough for this course.
Your code will be corrected in many ways.
For example, your code will compiled with maximum warning levels.

If you think your code is correct, see 'My correct code is rejected'

## My correct code is rejected, but should be accepted

If you would like to [contribute](CONTRIBUTING.md) by submitting an example of correct code that is rejected, 
see [contribute](CONTRIBUTING.md), section 'My correct code is rejected'.

## My incorrect code is accepted, but should be rejected

Sure, in code one can disable all warnings and do all
other evil things. This course corrections protects against Murphy, not against Machiavelli.

If your code is not evil, see 'My incorrect evil code is accepted, but should be rejected'

Additionnally, if you think you code should have been rejected by the tools used, 
consider sending the example code to the developers of those tools.

## My incorrect non-evil code is accepted, but should be rejected

If you would like to [contribute](CONTRIBUTING.md) by submitting an example of incorrect non-evil code that is accepted, 
see [contribute](CONTRIBUTING.md), section 'My incorrect non-evil code is accepted'.

## Why the name of the course?

'correct' is meant to have the same meaning as 'cannot-be-corrected'.
A solution is correct, if it cannot be corrected by tools.
If these tools cannot detect a flaw, the solution 
is called correct. This does not mean a human may see
imperfections in these solutions.
