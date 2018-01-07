# Set up git

## Let git know who you are

Type this at a terminal:

```
git config --global user.email "richel@richelbilderbeek.nl"
git config --global user.name "richelbilderbeek"
```

## Let git remember your password

`git` will remember your password for ten hours:

Type this at a terminal:

```
git config --global credential.helper cache
git config --global credential.helper 'cache --timeout=36000'
```

## External links

 * [Video 'Set up git'](www.richelbilderbeek.nl/correct_cpp_set_up_git.mp4)