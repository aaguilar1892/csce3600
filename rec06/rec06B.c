//Orphan Process

/*
Recall that a child process whose parent has terminated is referred to as an orphan
process. This means that the child is still executing, but its parent has terminated and
that some process is then needed to handle the child’s exit status. Use the 
following algorithm and specific instructions to develop a short, simple C program
called rec06B.c to create an orphan process.
    a. Add the include directives for the stdio.h, stdlib.h and unistd.h
    libraries.
    b. Declare a pointer to a char called name.
    c. Declare a variable called pid with the data type pid_t and invoke the
    fork() system call, assigning the result to pid.
    d. Write an if-else if-else branching statement to handle the child
    process, parent process, and error case, respectively.
        i. In the child process, print "child: %d started\n" using the getpid()
        system call for the %d. Then, print "child: parent = %d\n" using the
        getppid() system call for the %d. Now, print another child status
        (use "child: ...") to indicate the child is about to go to sleep. Then, sleep
        for 20 seconds. Finally, print a child status to indicate that the child just
        woke up.
        ii. In the parent process, print "parent: %d started\n" using the
        getpid() system call for the %d. Then print "parent: parent =
        %d\n" using the getppid() system call for the %d.
        iii. In the error case, call the perror() system call with "fork error".
    e. Outside of the if-else if-else branching statement, use the ternary
    operator (condition) ? (if_true) : (if_false) to assign "child"
    to the name character pointer if pid is 0 and "parent" otherwise. Then, print
    "%s: terminating...\n" using the name character pointer for the %s.
Now, compile and run your program. After your program initially runs, but before the
child process has terminated, enter the ps -ef|grep $USER command to see
your existing processes. You should notice your child process is still running, but has
1 for its parent process – this means that the init/systemd process has taken
over as the parent (since our parent terminated) and will handle the child once it has
terminated
*/