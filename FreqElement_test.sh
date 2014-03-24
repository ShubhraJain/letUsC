
function check {
  echo "-------------------"
  echo "Input:" $1
  echo "Expected output:" $2


  max2=`echo $1 |./a.out` 
  echo "Actual output:" $max2; 
  if [ "$max2" = "$2" ]; then
      echo "Pass";
  else 
      echo "Fail";
  fi
}

gcc FreqElement.c
# First argument starts with number of elements
# followed by the elements themselves.
# Second argument is the expected output (i.e. Frequent Element)
check "6 2 2 5 6 7 8" 2
check "3 1 1 99" 1
check "8 3 2 1 2 3 4 5 6" 2
check "1 1" 1
check "2 1 2" 1
check "4 1 2 1 2" 1
check "3 4 4 4" 4 
