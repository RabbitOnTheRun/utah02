#! /bin/bash
for (( i=1; i<=100; i++))
do 
  build/Debug/Cygwin_4.x-Windows/tests/TestFiles/f25.exe sequenceTest/001
  if [ $? -ne 0 ] ; then
    echo "Error in utah02"
    break
  fi
done
