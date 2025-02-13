# /bin/bash
rm -f out
touch out
chmod +r out

# test 1
# subject test
input="8 9 * 9 - 9 - 9 - 4 - 1 +"

echo "=====================================================================" >> out
echo "test 1 : subject test" >> out

echo "=====================================================================" >> out

echo "$input" >> out
echo "---------------------------------------------------------------------" >> out
./RPN "$input" >> out 2>&1

echo >>out

# test 2
# subject test
input="7 7 * 7 -"

echo "=====================================================================" >> out
echo "test 2 : subject test" >> out
echo "=====================================================================" >> out

echo "$input" >> out
echo "---------------------------------------------------------------------" >> out
./RPN "$input" >> out 2>&1

echo >>out

# test 3
# subject test
input="1 2 * 2 / 2 * 2 4 - +"

echo "=====================================================================" >> out
echo "test 3 : subject test" >> out
echo "=====================================================================" >> out

echo "$input" >> out
echo "---------------------------------------------------------------------" >> out
./RPN "$input" >> out 2>&1

echo >>out

# test 4
# subject test
input="(1 + 1)"

echo "=====================================================================" >> out
echo "test 4 : subject test" >> out
echo "=====================================================================" >> out

echo "$input" >> out
echo "---------------------------------------------------------------------" >> out
./RPN "$input" >> out 2>&1

echo >>out

# test 5
# empty
input=""

echo "=====================================================================" >> out
echo "test 5 : empty" >> out
echo "=====================================================================" >> out

echo "$input" >> out
echo "---------------------------------------------------------------------" >> out
./RPN "$input" >> out 2>&1

echo >>out

# test 6
# more number than operator
input="2 2 + 2 + 2 2"

echo "=====================================================================" >> out
echo "test 6 : more number than operator" >> out
echo "=====================================================================" >> out

echo "$input" >> out
echo "---------------------------------------------------------------------" >> out
./RPN "$input" >> out 2>&1

echo >>out

# test 7
# divide zero
input="1 / 0.00000000000000000000001"

echo "=====================================================================" >> out
echo "test 7 : divide zero" >> out
echo "=====================================================================" >> out

echo "$input" >> out
echo "---------------------------------------------------------------------" >> out
./RPN "$input" >> out 2>&1

echo >>out

# test 8
# divide zero
input="0 0 + 0 /"

echo "=====================================================================" >> out
echo "test 8 : divide zero" >> out
echo "=====================================================================" >> out

echo "$input" >> out
echo "---------------------------------------------------------------------" >> out
./RPN "$input" >> out 2>&1

echo >>out

# test 9
# over abs 10
input="0 0 + 0 * -11 - -2147483648"

echo "=====================================================================" >> out
echo "test 9 : over abs 10" >> out
echo "=====================================================================" >> out

echo "$input" >> out
echo "---------------------------------------------------------------------" >> out
./RPN "$input" >> out 2>&1

echo >>out

# test 10
# empty
input="                                           "

echo "=====================================================================" >> out
echo "test 10 : empty" >> out
echo "=====================================================================" >> out

echo "$input" >> out
echo "---------------------------------------------------------------------" >> out
./RPN "$input" >> out 2>&1

echo >>out

# test 11
# char is
input="1 1 1 1 1 1 1 1 1  hi"

echo "=====================================================================" >> out
echo "test 11 : char is" >> out
echo "=====================================================================" >> out

echo "$input" >> out
echo "---------------------------------------------------------------------" >> out
./RPN "$input" >> out 2>&1

echo >>out

# test 12
# normal
input="8 2 2 2 2 / / / /"
echo "=====================================================================" >> out
echo "test 12 : normal" >> out
echo "=====================================================================" >> out

echo "$input" >> out
echo "---------------------------------------------------------------------" >> out
./RPN "$input" >> out 2>&1

echo >>out

# test 13
# normal
input="-8 -2 -2 -2 -2 / / / /"
echo "=====================================================================" >> out
echo "test 13 : normal" >> out
echo "=====================================================================" >> out

echo "$input" >> out
echo "---------------------------------------------------------------------" >> out
./RPN "$input" >> out 2>&1

echo >>out

# test 13
# more operator
input="1  1 / 1 / 1 / 1 / /"
echo "=====================================================================" >> out
echo "test 13 : more operator" >> out
echo "=====================================================================" >> out

echo "$input" >> out
echo "---------------------------------------------------------------------" >> out
./RPN "$input" >> out 2>&1

echo >>out

# test 14
# size error
input="1 / 1 / 1 / 1 / 1 /"
echo "=====================================================================" >> out
echo "test 14 : size error" >> out
echo "=====================================================================" >> out

echo "$input" >> out
echo "---------------------------------------------------------------------" >> out
./RPN "$input" >> out 2>&1

echo >>out

# test 15
# white space
input="1                1                         /"
echo "=====================================================================" >> out
echo "test 15 : white space" >> out
echo "=====================================================================" >> out

echo "$input" >> out
echo "---------------------------------------------------------------------" >> out
./RPN "$input" >> out 2>&1

echo >>out