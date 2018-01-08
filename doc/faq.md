# FAQ

For developers, see the Technical FAQ below.

## How does this course work?

See [how this course works](how_this_course_works.md).

## Where are the teaching materials?

For C++ syntax, there is plenty of material about C++ online, which you'll have to find and use. Recommended online resources are:

 * [isocpp.org](https://isocpp.org/): excellent starting point
 * [C++ core guidelines](https://github.com/isocpp/CppCoreGuidelines): guidelines to write correct code
 * [cplusplus.com](http://www.cplusplus.com/): C++ tutorials
 * [cppreference.com](http://en.cppreference.com/w/cpp): C++ reference

Next to [how this course works](how_this_course_works.md), there are some articles:

 * [How to get 100% code coverage](get_100_percent_code_coverage.md)
 * [How to lower cyclomatic complexity](lower_cyclomatic_complexity.md)

## Do I need a GitHub account?

Yes. This is free/gratis.

## Do I need a Travis CI account?

Yes. You can use your GitHub account to sign in.

## How is the code corrected?

Each chapter has its own `.travis.yml` file.
This file contains the commands that Travis CI needs to run.

To keep the chapters' GitHubs clean, the scripts to build and test
are usually downloaded from this GitHub, made excutable and then executed.

## How to correct my code?

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

You will need:

 * its unique `test` script
 * its shared peripheral scripts

The unique `test` script of any chapter, can be found in this GitHub, in the folder
with the same name as the chapter. For example, the scripts for 
chapter `hello_world` are found in the `hello_world` folder.
Copy the `test` script to your chapter's folder.

The shared peripheral scripts can be found in [the `shared` folder of this GitHub](https://github.com/richelbilderbeek/correct_cpp/tree/master/shared).


Copy all files in the `shared` folder to your chapter's folder:

```
cp path_to_correct_cpp/shared/* .
```

This will copy all files in the `shared` folder to your current location (the dot). 

Run your tests:

```
./test
```

These scripts work on Travis CI, which uses a Ubuntu GNU/Linux distro.

To clean up:

```
./clean_test
```

## Why do you prefer a command-line interface over an interactive interface?

Because a command-line interface can be used in scripts.
And you program will be tested by scripts.

## Why don't you put the `.pro` files in each chapter's GitHub?

Advantages of putting the `.pro` files I use in the GitHub:

 * It would help all those that use Qt Creator and have a C++ compiler that supports C++17. This just happens to be most of my students

Disadvantages of putting the `.pro` files I use in the GitHub:

 * It would be in the way of all those that do not use Qt Creator

I chose to keep it out, as Qt Creator is not the most used C++ IDE around.

## My code 'just works', but is rejected

[![xkcd #1695: code quality #2](pics/xkcd_code_quality_2.png)](https://xkcd.com/1695/)

'it just works' is not good enough for this course.
Your code will be corrected in many ways.
For example, your code will compiled with maximum warning levels.

If you think your code is correct, see 'My correct code is rejected'

## My correct code is rejected, but should be accepted

If you would like to [contribute](../CONTRIBUTING.md) by submitting an example of correct code that is rejected, 
see [contribute](../CONTRIBUTING.md), section 'My correct code is rejected'.

## My incorrect code is accepted, but should be rejected

Sure, in code one can disable all warnings and do all
other evil things. This course corrections protects against Murphy, not against Machiavelli.

If your code is not evil, see 'My incorrect evil code is accepted, but should be rejected'

Additionnally, if you think you code should have been rejected by the tools used, 
consider sending the example code to the developers of those tools.

## My incorrect non-evil code is accepted, but should be rejected

If you would like to [contribute](../CONTRIBUTING.md) by submitting an example of incorrect non-evil code that is accepted, 
see [contribute](../CONTRIBUTING.md), section 'My incorrect non-evil code is accepted'.

## Why the name of the course?

'correct' is meant to have the same meaning as 'cannot-be-corrected'.
A solution is correct, if it cannot be corrected by tools.
If these tools cannot detect a flaw, the solution 
is called correct. This does not mean a human may see
imperfections in these solutions.

## What is the course's philophy?

[![xkcd #1513: code quality](pics/xkcd_code_quality.png)](https://xkcd.com/1513)

 * Follow the best practices of the literature
 * A student should learn how to write code following all best practices from the start [1]:
    * clean compile under high warning levels [2,3]
    * low cyclomatic complexity [4]
    * 100% code coverage
    * no memory leaks
    * it should follow the specifications :-)
    * using tools [6]
 * A student should be able to check if his/her code is correct easily, without a human involved
 * Prefer a learning curve that is too gentle, over one that is too steep
 * The course is pragmatic: an exercise is stated to be correct, when all scripts and tools suggest no improvement. 

## Why so strict?

[![xkcd #1926: bad code](pics/xkcd_bad_code.png)](https://xkcd.com/1926)

A student should do it right directly [1,5]. 
If a student has never learned how to write correct code for simple code, he/she
will probably not do it for larger code bases either.

This especially applies for code coverage. Code coverage should ideally be 100% (why write code
that is unused or untestable?), so in these exercises it is required to be 100%. 

In some other contexts, less than 100% may be considered correct as well.
Still the question is: why write code that is unused or untestable?

Note that I do allow partial matches in code coverage:

```c++
bool is_prime(const int i) noexcept
{
  // ..
  for (int j=2; j!=i-1; ++j)
  {
    if (i % j == 0) //Partial code coverage
    {
      return false;
    }
  }
  // ..
}
```

## Which tools are used?

 * [GitHub](https://github.com/)
 * [Travis CI](https://travis-ci.org/)
 * [Codecov](https://codecov.io/)
 * [GCC](https://gcc.gnu.org/)
 * [gcov](https://gcc.gnu.org/onlinedocs/gcc/Gcov.html)
 * [Qt Creator](https://www.qt.io)
 * [OCLint](https://github.com/oclint/oclint)
 * [cppcheck](http://cppcheck.sourceforge.net/)
 * [UBSAN](https://developers.redhat.com/blog/2014/10/16/gcc-undefined-behavior-sanitizer-ubsan/): GCC's Undefined Behavior Sanitizer 
 * [valgrind](http://valgrind.org/)'s `helgrind`
 * [valgrind](http://valgrind.org/)'s `memcheck`
 * [gprof](https://sourceware.org/binutils/docs/gprof/)

## How do I view my build status?

See [view your build status and code coverage](view_status.md)

## How do I view my code coverage?

See [view your build status and code coverage](view_status.md)

## How to get a 100% code coverage?

See [how to get 100% code coverage](get_100_percent_code_coverage.md)

## How to lower cyclomatic complexity?

See [how to lower cyclomatic complexity](lower_cyclomatic_complexity.md)

## All your chapters' builds fail, shouldn't they pass?

No, this is a course, in which each chapter holds an exercise. That exercise should be *made* to pass, on the student's fork.

## Where do you teach this course?

I this course at:

 * the [Dojo](https://github.com/richelbilderbeek/Dojo) of [De Jonge Onderzoekers](http://www.djog.nl/) in the city of Groningen, The Netherlands 
 * the [Arduino course](https://github.com/richelbilderbeek/ArduinoCourse) of [De Jonge Onderzoekers](http://www.djog.nl/) in the city of Groningen, The Netherlands

## How to write my own `.travis.yml` files?

See [my Travis CI tutorial](https://github.com/richelbilderbeek/travis_cpp_tutorial).

## Why do you use GCC 5?

I had to make a trade-off between all features:

Feature|GCC 4|GCC 5| GCC 7
---|---|---|---
Installation time (mins)|0|2|7
UBSAN|No|Yes|Yes
C++11|Yes|Yes|Yes
C++14|No|Yes|Yes
C++17|No|No|Yes

I picked GCC 5, as

  * UBSAN benefits all my students
  * C++17 benefits only a few

## Why don't you use GCC 4?

 * Pro: GCC 4.8.4 is already installed on Travis CI
 * Con: UBSAN is absent

I think the benefits of UBSAN outweight the 2 minutes of installation of GCC 5.

## Why don't you use GCC 7?

 * Pro: GCC 7 gives my students access to C++14 and C++17.
 * Con: Installing GCC 7 on Travis CI takes [around 7 minutes](https://travis-ci.org/richelbilderbeek/correct_cpp_hello/builds/325027943). 

I think the cost of 7 minutes waiting time for all my students outweight those great C++17 features for some of my students.

## How can I use GCC 7 anyways?

In the chapter's `.travis.yml`, replace `g++-5` and `gcov-5` by `g++-7` and `gcov-7` respectively. 

# FAQ for developers

## How to test if all chapters work locally?

In the main folder, run `test_tests`. 
This script tests each chapter.

## How to check if Travis CI does accept all accepted answers?

In `scripts`:

 * `./copy_accepted_to_chapters`: copies each chapter's `accept_0.cpp` to each chapter's `main.cpp`.
 * `./push_all_chapters`: git add, git commit, git push for each chapter

The [Correct C++ scoreboard](https://github.com/richelbilderbeek/correct_cpp_scoreboard) should now turn to all green.

## How to check if Travis CI does reject all reject answers?

In `scripts`:

 * `./copy_rejected_to_chapters`: copies each chapter's `reject_0.cpp` to each chapter's `main.cpp`.
 * `./push_all_chapters`: git add, git commit, git push for each chapter

The [Correct C++ scoreboard](https://github.com/richelbilderbeek/correct_cpp_scoreboard) should now turn to all red.

## What if a chapter's test fails?

 * Go into the folder, for example `hello_world`:

```
cd hello_world
```

 * Copy all tests in `shared` to there

```
cp ../shared/* .
```

 * Copy the file that should be accepted or rejected to main.cpp, for example, `accepted_0.cpp`

```
cp accepted_0.cpp main.cpp
```

 * Run the tests for that chapter

```
./test
```

 * Fix the code or the `test` script 
 * Clean up

```
./clean_test
```

## References

 * [1] Trevor Misfeldt, Gregory Bumgardner, Andrew Gray. The elements of C++ style. 2004. ISBN: 978-0-521-89308-4. Chapter 2.3, page 5: 'Do it right the first time'
 * [2] Herb Sutter, Andrei Alexandrescu. C++ coding standards: 101 rules, guidelines, and best practices. ISBN: 0-32-111358-6. Item 1: 'Compile cleanly at high warning levels'.
 * [3] Linus Torvalds. [Re:[PATCH] Don't compare unsigned variable for &lt;0 in sys\_prctl()](http://linux.derkeiler.com/Mailing-Lists/Kernel/2006-11/msg08325.html). 2006-11-28. Retrieved on 2010-09-20. 'Friends don't let friends use [gcc] -W'
 * [4] Bjarne Stroustrup. The C++ Programming Language (4th edition). 2013. ISBN: 978-0-321-56384-2. Page 32, 1.5 'Advice', item 16: 'C++ is not just C with a few extensions'
 * [5] Maureen A. Carey, Jason A. Papin. Ten simple rules for biologists learning to program. 2018. PLOS Computational Biology 14(1): e1005871. https://doi.org/10.1371
 * [6] [C++ Core Guidelines: P.12: Use supporting tools as appropriate](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#p12-use-supporting-tools-as-appropriate)
