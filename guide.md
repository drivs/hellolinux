# Quick guide

## Why use Linux?

Well, how does it differ from Windows? Let's list up some of the greatest
points:

* Full access. Linux is open source, you can read how it all works.
* Great terminal in Linux, not so great in windows.
* Package manager in Linux.
* Flexibility. So which Desktop Environment do you want? What package manager?
  etc.

## Basic commands

### Change directory
```
  cd {directory}
```

### List directory
```
  ls [-lha]
```

### Create a new file
```
  touch {file}
```

### Copy file or directory
```
  cp [-R] {source} {destination}
```

### Move file or diretory (also used for renaming)
```
  mv {source} {destination}
```

### Run a the program *program* (if it's executable)
```
  ./program
```

### Print working directory
```
  pwd 
```

The list goes on. See the links fore more.

## Wildcards

What if we wanted to list all .pdf files? Or all .tex and .fsx files?

### List all pdf files

First change directory into wildcard

```
  cd wildcard
```

List files using the asteriks regular expression

```
  ls *.pdf
```

This regular expression will expand to *any* files ending in .pdf. In this
case, it's the files 'whatever.pdf' and 'foobar.pdf'

Listing all .tex and .fsx

```
  ls *.{tex|fsx}
```

### Case: Find the needle in a haystack

```bash
  grep -n -e needle files/*.txt
```

## Piping

Show good example of piping

First, type this into the terminal:

```
  wc -l
```

Then type in random things, and terminate with ^d (Ctrl + d). The terminal will
output number of lines

How many files are there in the current directory? The command *wc -l* will list the
number of lines of STDIN. If we *pipe* the output from *ls -l* into STDIN for
wc -l, it will effectively count the number of files in the directory. Voila!

```
  ls -l | wc -l
```

This can be used for much simpler usecases. Grep multiple files for specific
lines, find duplicates, make them all lowercase and save to a file. All of
these operations can be done by seperate command line tools by piping the
output of one command as the stdin of the next command. This generate a so
called "pipe" between several commands.

## Redirection

### Redirecting STDIN

Redirect STDIN to come from a file, instead of the keyboard.

First, run the program *simple* in the *cprogam* directory. This can be done by
typing this into the terminal

```
  cd cprogram
```

Make sure the cprogram is executable, by typing in the following

```
  chmod +x simple
```

Now, run the program by typing

```
  ./simple
```

Enter the requested information. Manually entering stuff is cumbersome. Let's
automate that!

*simple* reads from STDIN using the *scanf* function from *stdio*. STDIN is by
default the keyboard, but using redirection, we can change that. To ru a program
*prog* with a file *input* as STDIN, type the following into the terminal:

```
  ./prog < input
```

In our case, type in the following:


```
  ./simple < input.txt
```

Show when to use redirection. For example, their fsx script might be reading from
stdin, then redirection could be a good thing to use. STDIN should come from
this file.

### Redirecting STDOUT

Just like the STDIN can be redirected, the STDOUT can be redirected as well.
Say we want

## Links

* Learn just enough Linux to get things done
    http://alexpetralia.com/posts/2017/6/26/learning-linux-bash-to-get-things-done

* The Linux Command Line -- great (and somewhat elaborate) book
    http://linuxcommand.org/tlcl.php

* Setting up eduroam
    https://cat.eduroam.org/#

* When ever you need to do just that one thing
    https://stackoverflow.com

* If you have problems with your distro (Unsupported hardware, muted sound,
  etc.), go to the respective forum for your distro. Folks are normally more
  then willing to help out.
