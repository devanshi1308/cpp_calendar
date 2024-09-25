## Calendar Program in C++

# Description
This C++ program prints a calendar for a specific month of a given year. 
It determines the number of days in a month, checks for leap years, and calculates the starting day of the month using **Zeller's Congruence**. 
It then outputs the calendar in a visually organized format.

# Features
- Input: Year and Month
- Output: Calendar layout for the specified month
- Automatically checks for leap years
- Supports all months from January to December
- Uses **Zeller's Congruence** to calculate the first day of the month

## How to Use
1. Clone the repository:
   ```bash
   git clone https://github.com/your-username/calendar-program.git
2. Navigate into the project dictionary
   cd calendar-program
3. complie the progame
   g++ calendar.cpp -o calendar
5. Run the program
   ./calendar

# example of the code
  ## input ##
        Enter the year: 2006
        Enter the month (1-12): 8
  ## output ##
        =============================
           Year: 2006    Month: 8
        =============================
         SUN MON TUE WED THU FRI SAT
               1   2   3   4   5   6
           7   8   9  10  11  12  13
          14  15  16  17  18  19  20
          21  22  23  24  25  26  27
          28  29  30  31
        =============================

## Project Structure
- `calendar.cpp`: Main source code file

## Contributing
Contributions are welcome! If you find any bugs or have suggestions for new features, feel free to open an issue or create a pull request.

## THANK YOUU!!!
