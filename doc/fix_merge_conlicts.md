# Fix merge conflicts

A merge conflict occurs when `git` has to guess what to do.
`git` will not guess.

A merge conflic occurs, when a file gets modified by two different commits.

## Example: fairy tale

Imagine two people writing a fairy tale together. They start with this text:

```
Once upon a time
```

User A modifies the original text to:

```
Once upon a time
there was a king
```

Simulatenously, user B modifies the original text to:

```
Once upon a time
and they live happily ever after
```

When user A pushes his/her code, user B will get a merge conflict when doing the same:

```
Once upon a time
<<<<<<< HEAD
there was a king
=======
and they live happily ever after
>>>>>>> TAIL
```

`git` will not guess the order of lines after 'Once upon a time'.

Modify the text to the correct result, then add, commit and push.

