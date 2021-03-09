#include <stdio.h>

struct Account
{
  int acc_no;
  char holder_name[50];
  float balance;
} Customers[10];

void NewAccount(struct Account *customer, int acc_no);
void AskAccNumber();
void ShowMenu(int idx);
void Withdraw(int idx);
void Deposit(int idx);
void ShowDetails(int idx);

// Create new account from user input
void NewAccount(struct Account *customer, int acc_no)
{
  printf("New Account\n");
  customer->acc_no = acc_no;
  printf("Account Holder Name: ");
  scanf(" %s", &customer->holder_name);
  printf("Balance: ");
  scanf(" %f", &customer->balance);
  printf("✅ Account added. Account No: %d\n\n", acc_no);
}

// Ask for account number
void AskAccNumber()
{
  int acc_no, have_match = 0;

  printf("🔹 Enter Account Number : ");
  scanf("%d", &acc_no);
  for (int i = 0; i < 10; i++)
  {
    if (Customers[i].acc_no == acc_no)
    {
      have_match = 1;
      break;
    }
  }

  if (have_match)
    ShowMenu(acc_no);
  else
  {
    printf("❌ Incorrect account number!\n");
    AskAccNumber(1);
  }
}

// Show main menu
void ShowMenu(int idx)
{
  int choice;
  printf("+-----------------------+\n");
  printf("\tWelcome %s\t\n", Customers[idx].holder_name);
  printf("1. Withdraw\n2. Deposit\n3. Show Details\n4. Exit\n");
  printf("+-----------------------+\n");
  printf("Enter your choice: ");
  scanf("%d", &choice);
  switch (choice)
  {
  case 1:
    Withdraw(idx);
    break;
  case 2:
    Deposit(idx);
    break;
  case 3:
    ShowDetails(idx);
    break;
  case 4:
    AskAccNumber();
    break;

  default:
    printf("❌ Invalid Option!\n\n");
    ShowMenu(idx);
    break;
  }
}

// Withdraw money from account
void Withdraw(int idx)
{
  float amount;
  printf("Enter 0 to return to previous menu.\nWithdraw Amount: ");
  scanf("%f", &amount);
  if (amount == 0)
    ShowMenu(idx);
  else if ((Customers[idx].balance - amount) < 0)
  {
    printf("Insufficient balance. Balance: %.2f\n\n", Customers[idx].balance);
    Withdraw(idx);
  }
  else
  {
    Customers[idx].balance -= amount;
    printf("Withdraw successful. Balance: %.2f\n\n", Customers[idx].balance);
    Withdraw(idx);
  }
}

// Deposit money into account
void Deposit(int idx)
{
  float amount;
  printf("Enter 0 to return to previous menu.\nDeposit Amount: ");
  scanf("%f", &amount);
  if (amount == 0)
    ShowMenu(idx);
  else
  {
    Customers[idx].balance += amount;
    printf("Deposit successful. Balance: %.2f\n\n", Customers[idx].balance);
    Deposit(idx);
  }
}

// Show account details with balance
void ShowDetails(int idx)
{
  printf("\nCustomer Details\n");
  printf("Account No. : %d\nAccount Holder Name: %s\nBalance: %.2f\n\n", Customers[idx].acc_no, Customers[idx].holder_name, Customers[idx].balance);
  ShowMenu(idx);
}

int main()
{
  for (int i = 0; i < 10; i++)
    NewAccount(&Customers[i], i);

  AskAccNumber();

  return 0;
}
