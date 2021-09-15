#!/bin/bash

echo 
echo 
echo -e "\033[33m\033[4m\033[1m\033[44mSTART CHECK\033[0m"
echo 

echo -e "\033[34mNon numeric:"
output=$(./push_swap 1 1a)
str="Error"
if [ $output = $str ]
then
echo -en "\033[32mOK  "
else
echo -en "\033[31mKO  "
fi

output=$(./push_swap a 1a)
str="Error"
if [ $output = $str ]
then
echo -en "\033[32mOK  "
else
echo -en "\033[31mKO  "
fi

output=$(./push_swap a)
str="Error"
if [ $output = $str ]
then
echo -en "\033[32mOK  "
else
echo -en "\033[31mKO  "
fi

output=$(./push_swap 1 2 1a2)
str="Error"
if [ $output = $str ]
then
echo -e "\033[32mOK  "
else
echo -e "\033[31mKO  "
fi








echo -e "\033[34mDuplicate:"
output=$(./push_swap 1 1)
str="Error"
if [ $output = $str ]
then
echo -en "\033[32mOK  "
else
echo -en "\033[31mKO  "
fi

output=$(./push_swap a a)
str="Error"
if [ $output = $str ]
then
echo -en "\033[32mOK  "
else
echo -en "\033[31mKO  "
fi

output=$(./push_swap 1 2 4 0 8 6 2)
str="Error"
if [ $output = $str ]
then
echo -en "\033[32mOK  "
else
echo -en "\033[31mKO  "
fi

output=$(./push_swap 1 2 11 22 -11 -11)
str="Error"
if [ $output = $str ]
then
echo -e "\033[32mOK  "
else
echo -e "\033[31mKO  "
fi












echo -e "\033[34mToo BIG:"
output=$(./push_swap 1 999999999999999999999999999999999999999 12 0)
str="Error"
if [ $output = $str ]
then
echo -en "\033[32mOK  "
else
echo -en "\033[31mKO  "
fi

output=$(./push_swap 9 6 0 -9999999999999999999999999999999999999999999999999)
str="Error"
if [ $output = $str ]
then
echo -en "\033[32mOK  "
else
echo -en "\033[31mKO  "
fi

output=$(./push_swap 999999999999999999999999999999999999999999999999)
str="Error"
if [ $output = $str ]
then
echo -en "\033[32mOK  "
else
echo -en "\033[31mKO  "
fi

output=$(./push_swap -9999999999999999999999999999999999999999)
str="Error"
if [ $output = $str ]
then
echo -e "\033[32mOK  "
else
echo -e "\033[31mKO  "
fi














echo -e "\033[34mEmpty:"
output=$(./push_swap)
str=""
if [ $output = $str ]
then
echo -en "\033[32mOK  "
else
echo -en "\033[31mKO  "
fi

output=$(./push_swap 42)
str=""
if [ $output = $str ]
then
echo -en "\033[32mOK  "
else
echo -en "\033[31mKO  "
fi

output=$(./push_swap 0 1 2 3)
str=""
if [ $output = $str ]
then
echo -en "\033[32mOK  "
else
echo -en "\033[31mKO  "
fi

output=$(./push_swap 0 1 2 3 4 5 6 7 8 9)
str=""
if [ $output = $str ]
then
echo -e "\033[32mOK  "
else
echo -e "\033[31mKO  "
fi