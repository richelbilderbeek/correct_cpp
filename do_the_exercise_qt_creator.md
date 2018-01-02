# Do the exercise using Qt Creator

You can [do the exercise](do_the_exercise.md) using Qt Creator.

Each chapter has a link to a Qt Creator project file with the name `main.pro`. Download it in the same folder as the chapter.

![Location of the main.pro file](pics/pro_file.png)

You could also re-create a lighter version of it: create a file called `main.pro` with the content below:

```
# Files
SOURCES += main.cpp

# C++17
CONFIG += c++17
QMAKE_CXXFLAGS += -std=c++17

# High warnings levels
QMAKE_CXXFLAGS += -Wall -Wextra -Wshadow -Wnon-virtual-dtor -pedantic -Weffc++ -Werror
```

Open that project file using Qt Creator.

![Open the main.pro file using Qt Creator](pics/open_pro_file.png)

If Qt Creator asks you to configure the project, click on 'Configure project'

![Let Qt Creator configure the project](pics/qt_creator_configure_project.png)

Qt Creator will show you its first screen.

![Qt Creator first screen](pics/qt_creator_first.png)

At the left, in the 'Project' section, click the drop-down arrow to view the first sections of the project.
Then click the drop-down arrow on 'Sources' to view the source files. Double-click on `main.cpp` to start editing.

![Qt Creator editing main.cpp](pics/qt_creator_main.png)

Think you are done with the exercise? Time to [push your code](push_your_code.md)!
