# Correct your GitHub

After [pushing your code](push_your_code.md), there are two ways to [correct your code](correct_your_code.md).

[Correct your GitHub](correct_your_github.md) is the way that features:

 * Need to create a Travis CI account (which is free/gratis)
 * Travis CI works on your GitHub
 * You can [use the scoreboard](use_the_scoreboard.md)


## Create a Travis CI account

Go to [https://travis-ci.org/](https://travis-ci.org/) and create an account using your GitHub account.
It is free/gratis

![The Travis CI homepage](TravisHomepageBordered.png)

## Travis CI works on your GitHub

To make Travis CI work on your GitHub:

 * Activate Travis CI for your GitHub
 * Modify the status badges

### Activate Travis CI for your GitHub

To acticate Travis CI, go to [https://travis-ci.org/](https://travis-ci.org/), sign in using your GitHub, and click on 'Accounts'. 

![Activate your repository](TravisAccountsBordered.png)

Activate your repository by clicking the slider.

### Modify the status badges

When you fork a chapter, the status badges display the status of `richelbilderbeek`'s original repository.

```
Branch|[Travis CI](https://travis-ci.org)|[Codecov](https://www.codecov.io)
---|---|---
master|[![Build Status](https://travis-ci.org/richelbilderbeek/correct_cpp_hello.svg?branch=master)](https://travis-ci.org/richelbilderbeek/correct_cpp_hello)|[![codecov.io](https://codecov.io/github/richelbilderbeek/correct_cpp_hello/coverage.svg?branch=master)](https://codecov.io/github/richelbilderbeek/correct_cpp_hello/branch/master)
```

Replace the username `richelbilderbeek` to your username to show the status of your GitHub.

Now, you can [correct your code](correct_your_code.md) by [correcting your GitHub](correct_your_github.md). 

If your solution was correct, the build status of your GitHub will become green :+1:

You may display your progresss by [using the scoreboard](use_the_scoreboard.md).
