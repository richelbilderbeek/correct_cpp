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

Letting Travis CI correct your GitHub is slower (you again have to wait for Travis CI to do its analysis), 
but always works. This requires a Travis CI account, which is free/gratis, and you can use your GitHub account to log in.

## How to let Travis CI correct my GitHub?

Activate Travis CI for your GitHub.

You will need a Travis CI account for this. A Travis CI is free/gratis, and
you can use your GitHub account to log in.

## How to correct my code locally?

The scripts of any chapter, can be found in this GitHub, in a folder
with the same name as the chapter. For example, the scripts for 
chapter `hello_world` are found in the `hello_world` folder.

These scripts work on Travis CI, which uses a Ubuntu GNU/Linux distro.

## My code 'just works', but is not accepted

'it just works' is not good enough for this course.
Your code will be corrected in many ways.
For example, your code will compiled with maximum warning levels.

## My incorrect code is accepted

Sure, in your code you can disable all warnings and do all
other evil things. The tools protect against Murphy, not against Machiavelli.

If you think you code should have been rejected, consider sending the example
code to the developers of those tools.

## Why the name of the course?

'correct' is meant to have the same meaning as 'cannot-be-corrected'.
A solution is correct, if it cannot be corrected by tools.
If these tools cannot detect a flaw, the solution 
is called correct. This does not mean a human may see
imperfections in these solutions.
