# 4. Modify `README.md`

After having [activate Travis CI](3_activate.md) on your chapter, the `README.md`
file needs to be modified:

Each chapter starts with a status table like this:

```
Branch|[Travis CI](https://travis-ci.org)|[Codecov](https://www.codecov.io)
---|---|---
master|[![Build Status](https://travis-ci.org/richelbilderbeek/correct_cpp_scoreboard.svg?branch=master)]//..
```

Instead of displaying you chapter's success, it will display `richelbilderbeek`'s status.

It will not work to just replace `richelbilderbeek` by your name, as there are links
to other useful `richelbilderbeek` GitHubs.

 * Open `README.md` in any text editor
 * Replace all `richelbilderbeek/correct_cpp_` s by `[your_github_username]/correct_cpp_`.
   For example, if your username is `CarmenIJsebaart`, change `richelbilderbeek/correct_cpp_`
   to `CarmenIJsebaart/correct_cpp_`.
 * Save the file
 * Close the editor

You can now [do the exercise](5_do_the_exercise.md).
