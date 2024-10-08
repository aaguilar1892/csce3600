# Write a bash script that will repeatedly prompt the user to guess a random number
# between 1 and 10, inclusively, until the user correctly guesses it. To generate a
# random number, you can use $RANDOM, which is an internal bash function that
# returns a pseudorandom integer in the range 0 – 32767. You can use the modulus
# operator to limit the range, plus an offset value so that it’s between 1 and 10,
# inclusively.
# Specifically, generate a random number between 1 and 10, inclusively. Then, in a loop,
# prompt the user to enter a number between 1 and 10. If the user’s guess is correct,
# then print a congratulatory message with the correct number generated by the
# $RANDOM function. Otherwise, if the user’s guess is not correct, print out an
# appropriate failure message and ask the user to try again. You will keep prompting
# the user and reading the user’s guess until the user guesses the number correctly.
# This bash script should be called rec04C.sh.
#
# SAMPLE OUTPUT (input in asterisks):
# $ ./rec04C.sh
# Enter a number between 1 and 10: **5**
# Sorry, you are not correct. Try again!
# Enter a number between 1 and 10: **9**
# Sorry, you are not correct. Try again!
# Enter a number between 1 and 10: **2**
# Congratulations, the number is 2.

# Alexis Aguilar (aa1732)
# Fall 2024 CSCE 3600 - Systems Programming
# Recitation 4

#!/usr/bin/bash

# make random number 1 <= x <= 10
random_number=$(( RANDOM % 10 + 1 ))

# initialize empty guess variable
guess=0

# loop to repeat prompting user for guess
while [ "$guess" -ne "$random_number" ]; do
    # prompt user to enter number 1 <= x <= 10
    echo ":D Heheheh guess a number between 1 and 10: "
    read guess

    # check if guess is correct
    if [ "$guess" -eq "$random_number" ]; then
        echo ";P Woohoo you guessed the correct number: $random_number."
    else
        echo ">:~( Wrong guess, try again!"
    fi
done