# `doc`

This folder contains documentation for developers.

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