# Sync my fork

In this course, you need to [fork a chapter](fork_a_chapter.md), as that is [how this course works](how_this_course_works.md).
Sometimes, the original GitHub, one that you forked, changes.
If you care about those changes, you will need to:

 * Configure a remote
 * Sync the fork
 * Add, commit and push the changes

## Configure a remote

In your fork's location, do once [1]:

```
git remote add upstream https://github.com/REPO_OWNER/YOUR_REPO_NAME
```

 * Replace `REPO_OWNER` by the owner of the original owner. In this course, this is always `richelbilderbeek`.
 * Replace `YOUR_REPO_NAME` by the repository's name

For example, for [the correct_cpp_scoreboard](https://github.com/richelbilderbeek/correct_cpp_scoreboard), use this line:

```
git remote add upstream https://github.com/richelbilderbeek/correct_cpp_scoreboard
```

## Sync the fork

In your fork's location, then do each time you want to sync [2]:

```
git fetch upstream
git checkout master
git merge upstream/master
```

You may need to [fix merge conflicts](fix_merge_conlicts.md).

## Add, commit and push the changes

In your fork's location, after syncing, you need to add, commit and push the changes:

```
git add --all :/
git commit -m "Sync with upstream"
git push
```

You may use other commit messages than 'Sync with upstream'.

## References

  * [GitHub Help: Configuring a remote for a fork](https://help.github.com/articles/configuring-a-remote-for-a-fork/)
  * [GitHub Help: syncing a fork](https://help.github.com/articles/syncing-a-fork/)
