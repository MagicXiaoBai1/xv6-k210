#!/bin/sh

tests="
exit
brk
chdir
clone
close
dup2
dup
execve

fork
fstat
getcwd
getdents
getpid
getppid
gettimeofday
mkdir_
mmap
mount
munmap
openat
open
pipe
read
times
umount
uname
unlink
wait
waitpid
write
yield.sh
"
for i in $tests
do
	echo "Testing $i :"
	./$i
done
