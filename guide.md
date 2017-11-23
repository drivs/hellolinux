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

List files using the astericks regular expression

```
  ls \*.pdf
```

This regular expression will expand to *any* files ending in .pdf.

Listing all .tex and .fsx

```
  ls *.{tex|fsx}
```

## Case: Find the needle in a haystack

```bash
  grep -n -e needle files/*.txt
```

## Links

* Learn just enough Linux to get things done
    http://alexpetralia.com/posts/2017/6/26/learning-linux-bash-to-get-things-done

* The Linux Command Line -- great (and somewhat elaborate) book
    http://linuxcommand.org/tlcl.php

* Setting up eduroam
    https://cat.eduroam.org/#

