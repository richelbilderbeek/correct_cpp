# Do a pull request

After [pushing your code](push_your_code.md), [do a pull request](do_a_pull_request.md) to correct your solution.

On your fork's GitHub page, click on `Pull request`, which is directly 
below the green `Clone or download` button.

![Click here to submit a pull request](pics/submit_pull_request_with_frame.png)

One the chapter's (*not* your fork's) GitHub, at Pull Requests (directly
below the GitHub's title) you can see how well your code did. 

If you are quick, Travis CI is not even detected your pull request:

![A pull request still unnoticed by Travis CI](pics/pull_request_before_travis.png)

After Travis CI notices your pull request, it will correct your work:

![A pull request being correct by Travis CI](pics/pull_request_pending.png)

If there was something corrected, the pull request will fail. Click on the Travis CI icon to view the Travis CI log to find the correction.

![A pull request being correct by Travis CI](pics/pull_request_pending.png)

If your solution was correct, the build status of your pull request will become green. Your code will be rejected 
with a :+1: (this is a course, remember?).
