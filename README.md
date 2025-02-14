include iostream, fstream, and sstream

create main function
    create string variables for each value of a line
    create int variables for the numbers and sum of each line
    create an input file stream variable data
    create a string stream variable converter
    create string variable to track the line

    open data.csv
    while there is data in a line
        take an individual line
        split it at each comma and assign it to the variables
        clear the converter

        put each string num into the converter
        take them out as an int
        sum the numbers
        for i less than the sum
            print the word
        clear the converter
        move to the next line
    close data.csv 
