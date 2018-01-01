# Do the exercise

After having [cloned your fork](clone_your_fork.md), it is time to [do the exercise](do_the_exercise.md).

Each chapter describes an exercise (in `README.md`) 
and has a file called `main.cpp`. 
`main.cpp` is where you must put your code. 

![Content of the 'hello' chapter's folder](pics/hello_folder.png)

To do an exercise, edit the `main.cpp` file. 
Usually `main.cpp` contains already some incomplete code to get you started, or dictate some structure. 
For example, the `hello` chapter has this code in `main.cpp`:

```c++
main() {}
```

You can use any editor or IDE to build and run your code. 

To compile and run your code, ther are many ways. The ways I will describe:

 * From a terminal, compile with `g++` and run locally
 * Compile and run your code from Qt Creator

Think you are done? Time to [push your code](push_your_code.md)!

## Compile and run your code from a terminal using `g++`

From a terminal, do:

```
g++ main.cpp
```

To run the created executable, which as the name `a.out` by default, type:

```
./a.out
```

The course compiles with C++17 with highest warning levels. To do so yourself, instead use:

```
g++ -Wall -Wextra -Wshadow -Wnon-virtual-dtor -pedantic -Weffc++ -Werror -std=c++17 main.cpp
```

## Compile and run your code from Qt Creator

Each chapter has a link to a Qt Creator project file with the name `main.pro`. 
This link can be found in its `README.md`, section 'External links'.
Download this project file, `main.pro`, in the same folder as the chapter.

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

Edit the `main.cpp` file to fullfill the exercise. In the `hello`