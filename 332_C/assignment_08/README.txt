Assignment - 8 (Structure & Union)
========================
Last Date of submission: 30/01/2021

1. Define a structure called Cricket that will describe the following information:
	Player name
	Team name
	Batting average
Now, using Cricket, declare an array Players with 10 elements and write a program to read the information about the 10 players and print a team-wise list containing names of players with their batting average.

2. Define a structure called Account that will describe the following information:
	Account number
	Account holder name
	Balance
Using Account, declare an array Customers with 10 elements and write a program to read the information about 10 customers.
Now develop a menu and do the following (like an ATM) as shown below:
1) The system will ask for account number first.
 ----------------------------------------
|  ENTER ACCOUNT NUMBER: __     |
 ----------------------------------------
If the account number is present in the system then show the following menu; otherwise show an error and ask to enter account number again.
 ----------------------------------
| Welcome <Cust Name>	|
| 1. Withdraw		|
| 2. Deposit		|
| 3. Show Details with Balance	|
| 4. Exit			|
| Enter your choice: 		|
 ----------------------------------
For both withdraw and deposit ask user to enter amount to be withdrawn or deposited. In case of withdraw check that the balance should not be negative.
