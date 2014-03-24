
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
check "2 2 5 6 7 8" "5 6 8 7"
check "1 1 99" "99"
check "3 2 1 2 3 4 5 6" "1 2 4 6 5 3"
