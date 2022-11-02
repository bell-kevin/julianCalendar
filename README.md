# julianCalendar

To make calculations across days and months easier, businesses use the Julian calendar. It numbers each day of the year consecutively, starting at 1 and ending at 365 (we'll ignore leap day and leap year). For example, day 2 is January 2, day 32 is February 1, day 365 is December 31. There are no month names in the Julian calendar, just numbers. The Julian calendar is used in business to calculate future dates or distance between dates. If a bill is due in 30 days, it is far easier to calculate that due date if you can add 30 days to the current day and then convert that number to a month and day format. Or, it is far easier to calculate how late a payment is by subtracting the Julian due date from the current Julian date.

This project asks the user for a Julian number and displays the month and day for that number. Also, it will display the day before and the day after using overloaded postfix and prefix increment operators.

You need to know the last day of each month in Julian numbers:

Last Day	Julian Number

January	31

February	59

March	90

April	120

May	151

June	181

July	212

August	243

September	273

October	304

November	334

December	365

Create a class for the day of the year. It needs constant static variables for the array for the last Julian day of each month and the array of month names. Create a print method in the class to convert the Julian day to the month and day and display it. After displaying the month and day, use the overloaded method for prefix decrement to display the day before, and the overloaded method for postfix increment to display the day after. If the day decrements to zero, set it to 365; if the day increments to 366, set it to 1. This makes the ends of the calendar "wrap" around to the beginning or end of another year. In the main function, use a loop to ask the user for the Julian day, stopping when the sentinel of -1 is entered. 

Here is an example:

![Ch 11 Julian Dates](https://github.com/bell-kevin/julianCalendar/blob/main/julian.PNG)

Run the program and test at least 4 dates in a year, specifically including 365. Take a screenshot of the results.

 

NOTE: Remember the requirements for a header and a pause at the end of the program, discussed in the reading "Console Applications". These are required in every console application project.

Submission: Submit a single zipped folder containing all of the specified screenshots AND the root folder for the project.

== We're Using GitHub Under Protest ==

This project is currently hosted on GitHub.  This is not ideal; GitHub is a
proprietary, trade-secret system that is not Free and Open Souce Software
(FOSS).  We are deeply concerned about using a proprietary system like GitHub
to develop our FOSS project. I have a [website](https://bellKevin.me) where the
project contributors are actively discussing how we can move away from GitHub
in the long term.  We urge you to read about the [Give up GitHub](https://GiveUpGitHub.org) campaign 
from [the Software Freedom Conservancy](https://sfconservancy.org) to understand some of the reasons why GitHub is not 
a good place to host FOSS projects.

If you are a contributor who personally has already quit using GitHub, please
email me at **bellKevin@pm.me** for how to send us contributions without
using GitHub directly.

Any use of this project's code by GitHub Copilot, past or present, is done
without our permission.  We do not consent to GitHub's use of this project's
code in Copilot.

![Logo of the GiveUpGitHub campaign](https://sfconservancy.org/img/GiveUpGitHub.png)
